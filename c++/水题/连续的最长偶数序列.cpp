#include <bits/stdc++.h>
using namespace std;
int a[110],maxn;
int n,num=0;
int main() 
{

    cin>>n;
    for(int i=1;i<=n;i++) 
	{
        cin>>a[i];
	}
    for(int i=1;i<=n;i++) 
	{
        if(i==n||a[i+1]%2!=0) 
		{
        	maxn=max(maxn,num); 
            num=0;
        }
        else
        {
        	num++;
		}
    }
    cout<<maxn;
    return 0;

}
