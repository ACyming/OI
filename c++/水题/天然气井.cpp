#include<iostream>
using namespace std;
long long n,ans,y[500001],x[500001],yy[500001],xx[500001];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
	{
        cin>>x[i]>>y[i];
        ans+=y[i]-x[i];
	}
    for(int i=1;i<=n;i++)
	{
        cin>>xx[i]>>yy[i];
        ans+=xx[i]-yy[i];
    }
    cout<<ans;
    return 0;
}
