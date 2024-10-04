#include<bits/stdc++.h>
using namespace std;
int a[10000],ans,b;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[j+1]>a[j])
			{
				b=a[j+1];
				a[j+1]=a[j];
				a[j]=b;	
			}
		}
	}
	for(int i=n;i>=1;i--)
	{
		ans+=a[i]*i;
	}
	cout<<ans;
	return 0;
}
