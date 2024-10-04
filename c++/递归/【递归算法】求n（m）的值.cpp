#include<bits/stdc++.h>
using namespace std;
int n[1000],m;
int main()
{
	cin>>m;
	n[1]=1;
	for(int i=2;i<=m;i++)
	{
		n[i]=n[i-1]*3-1;
	}
	cout<<n[m];
	return 0;
}
