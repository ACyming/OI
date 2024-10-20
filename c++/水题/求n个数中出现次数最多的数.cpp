#include<bits/stdc++.h>
using namespace std;
int a[110],b[20],ans,maxn;
int main() 
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		b[a[i]]++;
		if(b[a[i]]>maxn)
		{
			ans=a[i];
			maxn=b[a[i]];
		}
		
	} 
	cout<<ans;
	return 0;
}
