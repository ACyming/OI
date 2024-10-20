#include<bits/stdc++.h>
using namespace std;
void hs(int x,int y)
{
	for(int i=1;i<=x;i++)
	{
		for(int j=1;j<=y;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
int main()
{
	int n,m;
	cin>>n>>m;
	hs(n,m);
	return 0;
}
