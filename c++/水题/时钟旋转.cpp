#include<bits/stdc++.h>
using namespace std;
string s1,s2;
int hs(string s)
{
    double h=(s[0]-'0')*10+(s[1]-'0');
    double m=(s[3]-'0')*10+(s[4]-'0');
    return h*60+m;
}
int main() 
{
    
    cin>>s1>>s2;
    double x=hs(s2)-hs(s1);
    printf("%.1lf",x*0.5);
}
