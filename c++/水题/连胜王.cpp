#include <bits/stdc++.h>
using namespace std;
int a[1010];
int n,cnt=0,ans,maxx;
int main() 
{

    cin>>n;
    for(int i=1;i<=n;i++) 
	{
        cin>>a[i];
    }
   	for(int i=1;i<=n;i++)
	{
		cnt++;
        if(i==n||a[i]!=a[i+1])
		{
            
            if(cnt>maxx)
            {
            	maxx=cnt;
            	ans=a[i];
			}
            
            cnt=0;
        }
	}
	cout<<ans;
    return 0;

}

 
