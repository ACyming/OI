#include<bits/stdc++.h>
using namespace std;
int hs(int x)
{
	for(int i=1;i<=x;i++)
	{
		cout<<"*";
	}
	return ' ';
}
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cout<<(char)hs(i)<<endl;
	}
	return 0;
}
