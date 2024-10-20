#include<bits/stdc++.h>
using namespace std;
long long b,a,p,k,ans=1,c;
int main()
{
    cin>>b>>p>>k;
    a=b;c=p;
    while(p>0)
    {
        if(p%2!=0)
            ans=ans*b%k;
        b=b*b%k;
        p/=2;
    }
    ans%=k;
   cout<<ans; 
    return 0;
}
