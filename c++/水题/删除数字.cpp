#include<bits/stdc++.h>
using namespace std;
string s;
int n;
int main()
{
	getline(cin,s);
	for(int i=0;i<s.size();i++)
	{
		if(s[i]>='1' && s[i]<='9')
		{
			s[i]='0';
		}
	}
	for(int i=0;i<s.size();i++)
	{
		if(s[i]!='0')
		{
			cout<<s[i];
		}
	}
	return 0;
}
