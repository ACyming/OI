#include<bits/stdc++.h>
using namespace std;
int ans,n,m;
void hs(int x)
{
	int num=x%10;
	while(x!=0)
	{
		if(x>num)
		{
			return ;
		}
		num=x%10;
		x/=10;
	}
	ans++;
	return ;
}
int main()
{
	while(cin>>n>>m)
	{
		for(int i=n;i<=sqrt(m);i++)
		{
			hs(i);
		}
		cout<<ans;
	}
	return 0;
}
