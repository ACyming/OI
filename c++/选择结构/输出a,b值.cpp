#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,x=-999,xx=99999999;
	cin>>a>>b;
	if(a>x)
	{
		x=a;
	}
	if(b>x)
	{
		x=b;
	}
	if(a<xx)
	{
		xx=a;
	}
	if(b<xx)
	{
		xx=b;
	}
	cout<<x<<" "<<xx;
	return 0;
}
