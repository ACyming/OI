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
	int a,b;
	cin>>a>>b;
	cout<<hs(a,b);
	return 0;
}
