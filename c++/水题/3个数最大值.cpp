#include<bits/stdc++.h>
using namespace std;
int hs(int x,int y)
{
	if(x>y)
	return x;
	else
	return y;
}
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	cout<<hs(c,hs(a,b));
	return 0;
}
