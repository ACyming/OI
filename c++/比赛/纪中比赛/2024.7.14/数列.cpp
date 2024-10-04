#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, ans,  d=1, kk;
main()
{
    cin >> n;
    kk=n;
    while (n>=d)
    {
        if(n>=d*2-1)
        {
            ans+=n/(d*10)*d;
            if(kk%10>=1)
            {
                if(n>=(kk/10)*(d*10)+d*2-1) ans+=d;
                else ans+=n-(kk*d)+1;
            }
        }else ans+=n-d+1;
        d*=10;
        kk/=10;
    }
    cout << ans;
    return 0;
}