
#include<bits/stdc++.h>
using namespace std;
int n,x[1001],f[1001];
int main()
{
	
	cin>>n>>x[1];
	for(int i=2;i<=n;i++)
	{
		x[i]=((x[i-1]*37+33031)%n)+1;
	}
	for(int i=1;i<=n;i++)
	{
		f[x[i]]++;
	}
	int max=-9999,ans;
	for(int i=1;i<=n;i++)
	{
		if(f[i]>max)
		{
			max=f[i];
			ans=i;
		} 
	}
	cout<<ans;
	return 0;
}
