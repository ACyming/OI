#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int n;
double x;
int m;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>m;
		v.push_back(m);
		x+=m;
	}
	sort(v.begin(),v.end());
	x-=(v[0]+v[n-1]);
	printf("%.1lf",x/(n-2));
	cout<<endl;
	for(int i=1;i<n-1;i++)
	{
		cout<<v[i]<<" ";
	}
	
	return 0;
} 
