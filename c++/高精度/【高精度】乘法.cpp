#include<bits/stdc++.h>
using namespace std;
string a,b;
int a1[10000],b1[10000],c1[10000],lena,lenb,lenc;
void hs(string x,int y[],int z)
{
	for(int i=0;i<=z;i++)
	{
		y[i]=x[z-i]-48;
	}
}
int main()
{
	cin>>a>>b;
	lena=a.size()-1;
	lenb=b.size()-1;
	hs(a,a1,lena);
	hs(b,b1,lenb);
	for(int i=0;i<=lena;i++)
	{
		int x=0;
		for(int j=0;j<=lenb;j++)
		{
			c1[i+j]=c1[i+j]+a1[i]*b1[j]+x;
			x=c1[i+j]/10;
			c1[i+j]=c1[i+j]%10;
		}
		c1[i+lenb+1]=x;
	}
	lenc=lena+lenb+1;
	while(c1[lenc]==0&&lenc>0)
	{
		lenc--;
	}
	for(int i=lenc;i>=0;i--)
	{
		cout<<c1[i];
	}
	return 0;
}
