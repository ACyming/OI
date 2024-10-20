#include<bits/stdc++.h>
using namespace std;
int hs(int x)
{
	int a=1;
	for(int i=1;i<=x;i++)
	{
		a=a*i;
	}
	return a;
}
int main()
{
	int r,k;
	cin>>k>>r;
	cout<<hs(k)/(hs(r)*hs((k-r)));
	return 0;
}
