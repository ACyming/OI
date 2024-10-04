#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g;
    scanf("%d:%d:%d",&a,&b,&c);
    scanf("%d:%d:%d",&d,&e,&f);
    c=a*3600+b*60+c;
    f=d*3600+e*60+f;
    cout<<c-f;
    return 0;
}
