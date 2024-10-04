#include<bits/stdc++.h> 
using namespace std;
int a[101];
int n,ans,tmp;
int main()
{
	int m;
	cin>>m;
	for(int j=1;j<=m;j++)
	{
		cin>>n;
		ans=0; 
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		sort(a+1,a+n+1);
		n=(n/2)+1;
		for(int i=1;i<=n;i++)
		{
			tmp=a[i]/2;
			ans+=tmp+1;
		}
		cout<<ans<<endl;
	}
	return 0;
}

