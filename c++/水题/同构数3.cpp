#include<bits/stdc++.h>
using namespace std;
bool pd(int x,int y)
{
	int c=0,num1=0,num2=0;
	while(x!=0)
	{
		num1*=10;
		num1+=x%10;
		x/=10;
		c++;
	}
	for(int i=1;i<=c;i++)
	{
		num2*=10;
		num2+=y%10;
		y/=10;
	}
	if(num2==num1)
	{
		return true;
	}
	return false;
}
int main()
{
	int num=0,ans=0,n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		num=i*i;
		if(pd(i,num))
		{
			ans++;
		}
	} 
	cout<<ans;
	return 0;
} 
