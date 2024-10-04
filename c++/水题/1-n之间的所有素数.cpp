#include<bits/stdc++.h>
using namespace std;
int hs(int x,int y)
{
	for(int j=2;j<=y;j++)
	{
		if(x/j==1||x%j!=0)
		{
			
		}
		else
		{
			return true;
		}
	}
	return false;
}
int main()
{
	int n,cnt=0;
	cin>>n;
	for(int i=2;i<=n;i++)
	{
		
		if(hs(i,n)==true)
		{
			++cnt;
			cout<<i<<" ";
		}
		if(cnt==5)
		{
			cout<<endl;
			cnt=0;
		}
	}
	return 0;
}
