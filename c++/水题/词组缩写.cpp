#include<bits/stdc++.h>
using namespace std;
string a;
int n,m;
char ans;
int main()
{
	getline(cin,a);
	if(a[0]!=' ')
	{
		ans=toupper(a[0]); 
		cout<<ans;
	}
	
	n=0;
	while(n!=-1)
	{
		n=a.find(" ",n+1);
		if(n<a.size())
		{
			if(a[n+1]!=' ')
			{
				ans=toupper(a[n+1]);
				cout<<ans;
			}
		}
		
	}
	
	return 0;
} 
