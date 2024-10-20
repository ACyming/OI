#include<bits/stdc++.h>
using namespace std;
long long sum,a[100],b[100],bz[100],qq;
void dfs(long long s,long long cnt)
{
	if(s>sum)
	{
		return;
	}
	if(s==sum)
	{
		cout<<++qq<<" "<<sum<<"="<<a[1];
		for(long long i=2;i<=cnt-1;i++)
		{
			cout<<"+"<<a[i];
		}
		cout<<endl;
		return;
	}
	for(long long i=1;i<=sum;i++)
	{
		a[cnt]=i;
		dfs(s+i,cnt+1);
	}
}
int main()
{
	cin>>sum;
	for(long long i=1;i<=sum-1;i++)
	{
		b[i]=i;
	}
	dfs(0,1);
	return 0;
}
