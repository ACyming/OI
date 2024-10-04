#include<bits/stdc++.h>
using namespace std;
string a,b;
int n,ans;
int main()
{
	cin>>a;
	cin>>b;
	n=b.find(a);
	while(n!=-1)
	{
		ans++;
		n=b.find(a,n+1);
		
	}
	cout<<ans; 
	return 0;
 } 
