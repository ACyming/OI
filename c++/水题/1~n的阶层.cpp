#include<bits/stdc++.h>
using namespace std;
int hs(int x)
{
	if(x==1)
	{
		return 1;
	}
	return hs(x-1)*x;
}
int main()
{
	int n;
	cin>>n;
	cout<<hs(n);
	return 0;
}
