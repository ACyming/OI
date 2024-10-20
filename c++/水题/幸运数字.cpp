#include<bits/stdc++.h>
using namespace std;
int x,ans;
string s;
int main()
{
	cin>>x;
	for(int i=1;i<=x;i++)
	{
		s=to_string(i);
		int n=s.find("44");
		int m=s.find("77");
		if(i%4==0 || i%7==0 || n!=-1 || m!=-1)
		{
			ans++;
		}
	}
	cout<<ans;
	return 0;
} 
