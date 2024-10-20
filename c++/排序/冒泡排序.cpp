#include<bits/stdc++.h>
using namespace std;
long long a[100000],n;
int main()
{
	cin>>n;
	for(long long i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(long long i=1;i<=n-1;i++)
	{
		for(long long j=1;j<=n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				swap(a[j],a[j+1]);
			}
		}
	}
	for(long long i=1;i<=n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
