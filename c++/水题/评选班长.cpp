#include<bits/stdc++.h>
using namespace std;
int n,a[12000],b[12000],maxx,cnt;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		b[a[i]]++;
		cnt=max(cnt,a[i]);
		maxx=max(maxx,b[a[i]]);
	}
	for(int i=1;i<=cnt;i++)
	{
		if(b[i]==maxx)
		{
			cout<<i<<" ";
		}
	} 
	return 0;
}
