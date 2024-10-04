#include<bits/stdc++.h>
using namespace std;
string s;
int num;
int main()
{
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]>='0'&&s[i]<='9')
		{
			num*=10;
			num+=s[i]-'0';
		}
		else
		{
			if(num>0)
			for(int j=1;j<=num;j++)
			{
				cout<<s[i];
			}
			else
			cout<<s[i];
			num=0;
		}
	}
} 
