#include<iostream>
using namespace std;
int a[10001],b[10001],g[10001],k[10001],n,x,y;
int main()
{
    
    cin>>n;
    for(int i=1;i<=1001;i++)
    {
    	a[i]=b[i]=g[i]=k[i]=0;
	}
    for(int i=1;i<=n;i++)
    {
    	cin>>a[i]>>b[i]>>g[i]>>k[i];
	}
    cin>>x>>y;
    for(int i=n;i>=1;i--)
    {
        if(x>=a[i]&&x<=a[i]+g[i]&&y>=b[i]&&y<=b[i]+k[i])
        {
            cout<<i;
            return 0;
        }
    }
    cout<<"-1";
    return 0;
}

