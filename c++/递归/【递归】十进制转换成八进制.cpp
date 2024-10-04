#include<bits/stdc++.h>
using namespace std;
long long a[10000],n,i=0;
int dg(long long x)
{
	if(x==0)
	{
		return 0;
	}
	i++;
	a[i]=x%8;
	return dg(x/8);
}
int main()
{
	cin>>n;
	if(n%8==0)
	{
		i--;
	}
	dg(n);
	for(i;i>=1;i--)
	{
		cout<<a[i];
	}
	return 0;
}
