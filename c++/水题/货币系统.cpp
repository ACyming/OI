#include<bits/stdc++.h>
using namespace std;
long long n,m,a[99999],f[99999];
int main()
{
	cin>>n>>m;
	for(long long i=1;i<=n;i++)
		cin>>a[i];
	f[0]=1;
	for(int i=1;i<=n;i++)
		for(long long j=a[i];j<=m;j++)
			f[j]=f[j]+f[j-a[i]];
	cout<<f[m];
	return 0;
}
