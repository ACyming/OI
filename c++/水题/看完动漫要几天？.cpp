#include<bits/stdc++.h>
using namespace std;
int n;
string s1,s2;
int hs(string s)
{
    int h=(s[0]-'0')*10+(s[1]-'0');
    int m=(s[3]-'0')*10+(s[4]-'0');
    return h*60+m;
}
int main() 
{
    
    cin>>n>>s1>>s2;
    int x=hs(s2)-hs(s1);
    if(n%x==0)
	{
        cout<<n/x<<endl;
    }
	else
	{
        cout<<n/x+1<<endl;
    }
}
