#include<bits/stdc++.h>
using namespace std;
string s;
long long a[20],c1;
char f[20],c2;
long long ans=0;
int t=0;
bool pd(char c) 
{

    if(c>='0'&&c<='9')
    {
    	return true;
	}
    else 
	{
		return false;	
	}

}
int main() {

	cin>>s;
   for(int i=0;i<s.size();i++) 
	{
        if(pd(s[i])) 
		{
            t=t*10+(s[i]-'0');
            if(i==s.size()-1||!pd(s[i + 1])) 
			{
				c1++;
                a[c1]=t;
                t=0;
            }

        } 
		else 
		{
            c2++;
            f[c2]=s[i];
        }

    }
	for(int i=1;i<=c2;i++)
	{
        if(f[i]=='*')
		{
            a[i+1]= a[i]*a[i+1];
            a[i]=0;
        }
		else if(f[i]=='-')
		{
            a[i+1]=-a[i+1];
        }
    }
    for(int i=1;i<=c1;i++)
	{
        ans+=a[i];
    }
    cout<<ans;
    return 0;
}
