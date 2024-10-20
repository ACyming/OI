#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int n,x,y;
int m;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>m;
		v.push_back(m);
	}
	cin>>x>>y;
	v.insert(v.begin()+x-1,y);
	for(int i=0;i<=n;i++)
	{
		cout<<v[i]<<" ";
	}
	return 0;
} 
