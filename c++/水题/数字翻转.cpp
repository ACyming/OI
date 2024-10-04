#include<bits/stdc++.h>
using namespace std;
vector<int> v(1020);
int n,m;
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>v[i];
	}
	int x,y;
	
	for(int i=1;i<=m;i++)
	{
		cin>>x>>y;
		reverse(v.begin()+x,v.begin()+y+1);
	}
	for(int i=1;i<=n;i++)
	cout<<v[i]<<" ";
	return 0;
} 
