#include<bits/stdc++.h>
using namespace std;
int n,k,x;
int num,a[1010],b[1010],c[1010];
void hs()
{
	for(int i=1;i<=n/2;i++);
	{
		b[num]=a[i];
		num+=2;
	}
	num=1;
	for(int i=n/2+1;i<=n;i++);
	{
		b[num]=a[i];
		num+=2;
	}
	for(int i=1;i<=n;i++)
	{
		a[i]=b[i];
	}
}
int main()
{
	cin>>n>>k>>x;
	for(int i=1;i<=n/2;i++)
	{
		a[num]=i;
		num+=2;
	}
	num=1;
	for(int i=n/2+1;i<=n;i++)
	{
		a[num]=i;
		num+=2;
	}
	num=0; 
	hs(); 
	for(int i=0;i<n;i++)
	{
		cout<<a[i]; 
	}
	return 0;
} 
