#include<bits/stdc++.h>
using namespace std;
int n,x,k,ans,maxn,a[2000000];
int main() 
{
	cin>>n;
	for(int i=1;i<=n;i++)
		{
		cin>>x;
		a[x]++;
	}
	for (int i=0;i<=2000000;i++)
	{
		a[i+1]+=a[i]/2;
		ans+=a[i]%2;
	}
	cout<<ans;
}
