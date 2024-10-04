#include<bits/stdc++.h>
using namespace std;
int jf[5];
int i,j,n,wz,dw,js;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>wz>>dw>>js;
        if(js==1)
        {
            jf[wz]+=dw*3;
            for(j=1;j<=4;j++)
            {
                if(j!=wz)
                {
                    jf[j]-=dw;
                }
            }
        }
        else
        {
            jf[wz]-=dw*3;
            for(j=1;j<=4;j++)
            {
                if(j!=wz)
                {
                    jf[j]+=dw;
                }
            }
        }
    }
    for(j=1;j<=4;j++)
    {
        cout<<jf[j]<<' ';
    }
    cout<<endl;
    return 0;
}

