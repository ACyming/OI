#include<bits/stdc++.h>
using namespace std;
long long n,a[10000];
int main()
{
	cin>>n;
	for(long long i=1;i<=n;i++)	cin>>a[i];
	for(long long i=2;i<=n;i++)
	{
		long long x=a[i],j=i-1;
		for(;j>=1;j--)
		{
			if(x<a[j])	a[j+1]=a[j];
			else	break;
		}
		a[j+1]=x;	//之所以不用a[j+1]=a[i]是因为a[i]的值已经被替换了 
	}
	for(long long i=1;i<=n;i++)	cout<<a[i]<<" ";
	return 0;
}
