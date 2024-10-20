#include<iostream>
using namespace std;
int w[999999],c[999999],f[999999];
int main()
{
	int k,n;
	cin>>k>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>c[i]>>w[i];
	 } 
	 for(int i=1;i<=n;i++)
	 {
	 	for(int j=w[i];j<=k;j++)
	 	{
	 		f[j]=max(f[j-w[i]]+c[i],f[j]);
		 }
	 }
	 cout<<f[k];
}
