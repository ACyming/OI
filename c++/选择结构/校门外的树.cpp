
#include<bits/stdc++.h>
using namespace std;
int n,m,a[10000],b[10000],mp[10001],ans;
int main()
{
    
    cin>>n>>m;
    for(int i=1;i<=m;i++) 
	{
        cin>>a[i]>>b[i];
    }
    for(int j=1;j<=m;j++) 
	{
        for(int z=a[j];z<=b[j];z++) 
		{
            mp[z]=1;
        }
    }
    for(int i=1;i<=n;i++) 
	{
        if(mp[i]==0) 
		{
            ans++;
        }
    }
    cout<<ans+1;
    return 0;
 
}
