#include<bits/stdc++.h>
using namespace std;
void hs(long long x)
{
	while(x!=0)
	{
		cout<<x<<" ";
		int i=x;
		x=1;
		while(i!=0)
		{
			x=i%10*x;
			i=i/10;
		}
	}
	cout<<0;
}
int main()
{
	long long n;
	cin>>n;
	hs(n);
	return 0;
}
