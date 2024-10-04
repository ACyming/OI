#include<iostream>
using namespace std;
int a[5001];
int n,m; 
int main()
{
	
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		a[i]=0; 
	 } 
	for(int i=2;i<=m;i++)
		for(int j=i;j<=n;j+=i)
			a[j]=!a[j];
	cout<<1;
	for(int i=2;i<=n;i++)
		if(!a[i]) cout<<","<<i;
	return 0;
}
