#include<bits/stdc++.h>
using namespace std;
int bz1[10000],bz2[10000],bz3[10000],n,s;
void dfs(int x)
{
	if(x==n+1)
	{
		s++;
		return;
	}
	for(int i=1;i<=n;i++)
	{
		if(bz1[i]==0&&bz2[x-i+n]==0&&bz3[x+i]==0)
		{
			bz1[i]=1;
			bz2[x-i+n]=1;
			bz3[x+i]=1;
			dfs(x+1);
			bz1[i]=0;
			bz2[x-i+n]=0;
			bz3[x+i]=0;
		}
	}
}
int main()
{
	cin>>n;
	dfs(1);
	cout<<s;
	return 0;
}
