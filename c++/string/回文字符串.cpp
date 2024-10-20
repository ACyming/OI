#include<bits/stdc++.h>
using namespace std;
char s[20];
int n;
int len;
bool pd2()
{
	int num[9999];
	int ans=0;
	memset(num,0,sizeof(num));
	for(int i=1;i<=len;i++) 
	{
        num[s[i]-'a']++;
    }
    for(int i=1;i<=26;i++)
    {
    	if(num[i]%2!=0)
    	{
    		ans++;
//    		cout<<num[i]<<endl<<" "<<"cs";
		}
	}
	if(ans>1)
	{
		return false;
	}
	else
	{
		return true;
	}
}
bool pd()
{
    for(int i=1;i<=len;i++)
    {
        if(s[i]!=s[len-1-i])
        {
	        return false;
        }
    }
   return true;
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		scanf("%s",s);
		len=strlen(s);
		if(pd())
		{
			cout<<"Yes";
		}
		else
		{
			if(pd2)
			{
				cout<<"Yes";
			}
			else
			{
				cout<<"No";
			}
		}
	}
    return 0;
}
