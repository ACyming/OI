#include <bits/stdc++.h>
using namespace std;
int ans=0;
int n,a[9999999],m;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	cin>>m;
	for(int i=1;i<=n;i++)
	{
		if(a[i]==m)
		{
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
