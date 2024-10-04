#include<bits/stdc++.h>
using namespace std;
int n,num,ans;
bool pd(int x,int y)
{
	int num=0,n=x,z=0;
	while(n!=0)
	{
		z++;
		n/=10;
	}
	for(int i=1;i<=z;i++)
	{
		num*=10;
		num+=y%10;
		y/=10;
	}
	if(num==x)
	{
		return true;
	}
	
	return false;
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		num=i*i;
		if(pd(i,num)==true)
		{
			ans++;
//			cout<<i<<endl;
		}
	}
	cout<<ans;
	return 0;
}
