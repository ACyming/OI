#include<bits/stdc++.h>
using namespace std;
string s,t;
string ans;
int ma;
int len,c,p;
int main() {

    cin>>len>>s;
    int n=s.size();
    for(int i=len;i<=n;i++)
	{
        for(int j=0;j<=n-i;j++)
		{

            t=s.substr(j,i);
            c=0;
            p=s.find(t);
            while(p!=-1)
            {
                c++;
                p=s.find(t,p+1);
            }
            if(c>ma||c==ma && t.size()>ans.size())
			{
                ma=c;
                ans=t;
        	}
    	}
    }
    cout<<ans;
    return 0;
}

