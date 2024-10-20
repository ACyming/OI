#include <iostream>
using namespace std;
int a[99999],b;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n-1;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			if(a[j+1]>a[j])
			{
				b=a[j+1];
				a[j+1]=a[j];
				a[j]=b;
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
