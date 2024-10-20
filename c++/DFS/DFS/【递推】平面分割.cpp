#include<bits/stdc++.h>
using namespace std;
long long p,n;
long long hs(long long x)
{
	if(x==p)	return 2*p;
	return	hs(x-1)+x;
}
int main()
{
	cin>>n>>p;
	cout<<hs(n);
	return 0;
}

