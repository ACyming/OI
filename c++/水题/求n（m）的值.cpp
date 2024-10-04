#include<bits/stdc++.h>
using namespace std;
int n(int x)
{
	if(x==1)
	{
		return 1;
	}
	return n(x-1)*3-1;
}
int main()
{
	int m;
	cin>>m;
	cout<<n(m);
	return 0;
}
