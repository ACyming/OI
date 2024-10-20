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
	cin>>x;
	v.erase(v.begin()+x-1);
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	return 0;
} 
