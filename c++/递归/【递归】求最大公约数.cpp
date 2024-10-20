#include<iostream>
using namespace std;
int hs(int n,int m)
{
	if(m==0) return n;
	else 
	{
		hs(m,n%m);
	}
}
int main()
{
	int n,m;
	cin>>n>>m;
	cout<<"gcd="<<hs(n,m);
	return 0;
}
