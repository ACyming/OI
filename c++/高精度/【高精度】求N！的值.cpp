#include<iostream>
using namespace std;
int a[100];
int main()
{
	int n,lena=1,x;
	cin>>n;
	a[1]=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=lena;j++)
		{
			a[j]=a[j]*i;
			x=0;
		}
		for(int j=1;j<=lena;j++)
		{
			a[j]=a[j]+x;
			x=a[j]/10;
			a[j]%=10;
		}
		while(x>0)
		{
			lena++;
			a[lena]=x%10;
			x/=10;
		}
	}
	for(int i=lena;i>=1;i--)
	{
		cout<<a[i];
	}
	return 0;
}
