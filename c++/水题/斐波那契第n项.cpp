#include<iostream>
using namespace std;
int n,a[31]={0,1};
int main()
{
 	cin>>n;
	for(int i=2;i<=n;i++)
	{
		a[i]=a[i-1]+a[i-2];
 	}
 	cout<<a[n-1];
 	return 0;
}

