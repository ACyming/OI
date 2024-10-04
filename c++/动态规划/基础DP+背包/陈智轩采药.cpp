#include<iostream>
using namespace std;
int w[1111],c[1111],f[1111];
int main()
{
	int k,n;
	cin>>k>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>w[i]>>c[i];
	 } 
	 for(int i=1;i<=n;i++)
	 {
	 	for(int j=k;j>=w[i];j--)
	 	{
	 		f[j]=max(f[j-w[i]]*c[i],f[j]);
		 }
	 }
	 cout<<f[k];
}
