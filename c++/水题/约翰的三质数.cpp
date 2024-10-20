#include<bits/stdc++.h>
using namespace std;
int n,a;
bool ans[250];
bool hs(int x)
{
	int num;
	for(int i=1;i<=x;i++)
	{
		if(x%i==0)
		{
			num++;
		}
	}
	if(num!=3)
	{
		return 0;
	}
	return 1;
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		if(hs(a))
		{
			ans[i]=1; 
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(ans[i])
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
