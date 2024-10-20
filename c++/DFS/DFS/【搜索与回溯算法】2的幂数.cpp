#include<bits/stdc++.h>
using namespace std;
long long n,cnt;
void dfs(long long s,long long g)
{
	if(s>n)	return;
	if(s==n)
	{
		cnt++;
		return;
	}
	for(long long i=g;i<=n;i*=2)
	{
		dfs(s+i,i);
	}
}
int main()
{
	cin>>n;
	dfs(0,1);
	cout<<cnt;
	return 0;
}
