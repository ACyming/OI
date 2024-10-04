#include<bits/stdc++.h>
using namespace std;
string s;
int ans=1;
int main()
{
	getline(cin,s);
	
	
	for(int i=0;i<s.size();i++)
	{
		if(s[i]==' '&&s[i+1]==' ')
		{
			s[i]='1';
		}
	}
//	s[s.size()+1]=' ';
	int f=s.find(" ");
	while(f!=-1)
	{
		ans++;
		f=s.find(" ",f+1);
	}
	cout<<ans;
	return 0;
}
