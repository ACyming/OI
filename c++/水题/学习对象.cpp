#include<bits/stdc++.h>
using namespace std;
long n,a[1000011],b[1000011];
int main() {
	cin>>n;
	for(int i=2;i<=n+1;i++)
	{
		cin>>a[i];
		for(int j=1;j<=n+1;j++)
		{
			if(a[j]>a[i])
			{
				b[i]=j;
				break;
			}
			else
			{
				b[i]=0;
			}
		}
	}
	for(int i=2;i<=n+1;i++)
	{
		for(int j=2;j<=n+1;j++)
		{
			if(a[j]>a[i])
			{
				b[i]=j;
				break;
			}
		}
	}
	for(int i=2;i<=n+1;i++)
	{
		cout<<endl<<b[i];
	}
	return 0;
}
