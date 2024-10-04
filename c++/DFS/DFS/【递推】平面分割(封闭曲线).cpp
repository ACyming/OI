#include<bits/stdc++.h>
using namespace std;
long long hs(long long x)
{
	if(x==1) 
	{
		return 2;
	}
	else
	{
		return hs(x-1)+(x-1)*2;
	}
}
int main()
{
	long long n;
	cin>>n;
	cout<<hs(n);
	return 0;
}
