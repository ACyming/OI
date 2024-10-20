#include<bits/stdc++.h>
using namespace std;
string s;
int num=1;
int hh=0;
int main()
{
	cin>>s;
	sort(s.begin(),s.end());
	for(int i=1;i<=s.size();i++)
	{
		if(s[i+1]!=s[i])
		{
			if(s[i]!='.')
			{
				if(hh!=5)
				{
					hh++;
					cout<<s[i]<<":"<<num;
					cout<<" ";
					num=1;
				}
				else
				{
					hh=1;
					cout<<endl;
					cout<<s[i]<<":"<<num;
					cout<<" ";
					num=1;
				}
			}
		}
		else
		{
			num++;
		}
	}
}

