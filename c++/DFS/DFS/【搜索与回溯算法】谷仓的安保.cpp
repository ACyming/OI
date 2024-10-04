#include<bits/stdc++.h>
using namespace std;
long long bz[1000],n,cnt,m;
char a,mapp[25003];
void dfs(long long x)
{
	if(x==m+1)
	{
		bool d=1;
		for(long long i=1;i<=m;i++)
		{
			if(mapp[i]=='a'||mapp[i]=='e'||mapp[i]=='i'||mapp[i]=='o'||mapp[i]=='u')
			{
				d=0;
				break;
			}
		}
		if(d==1)	return;
		long long k=0;
		d=1;
		for(long long i=1;i<=m;i++)
		{
			if(mapp[i]!='a'&&mapp[i]!='e'&&mapp[i]!='i'&&mapp[i]!='o'&&mapp[i]!='u')
			{
				k++;
				if(k>=2)
				{
					d=0;
					break;
				}
			}
		}
		if(d==1)
		{
			return;
		}
		cnt++;
		for(long long i=1;i<=m;i++)
		{
			cout<<mapp[i];
		}
		if(cnt==25000)	exit(0);
		cout<<endl;
		return;
	}
	for(long long i='a';i<='z';i++)
	{
		if(bz[i]==1&&mapp[x-1]<i)
		{
			bz[i]=0;
			mapp[x]=i;
			dfs(x+1);
			bz[i]=1;
		}
	}
}
int main()
{
	cin>>m>>n;
	for(long long i=1;i<=n;i++)
	{
		cin>>a;
		bz[a]=1;
	}
	dfs(1);
	return 0;
}
