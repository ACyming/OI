#include<bits/stdc++.h>
using namespace std;
string s,s1,s2;
int main()
{
	cin>>s;
	long long n=s.find('*');
	s1=s.substr(0,n);
	s2=s.substr(n+1,s.size());
	long long x=atoi(s1.c_str());
	long long y=atoi(s2.c_str());
	long long ans=x*y;
	cout<<ans;
	
	return 0;
}//4294967296*4294967296=
