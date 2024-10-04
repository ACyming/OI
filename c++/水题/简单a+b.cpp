#include<bits/stdc++.h>
using namespace std;
string s,s1,s2;
int main()
{
	cin>>s;
	int n=s.size();
	int m=s.find("+");
	s1=s.substr(0,m);
	s2=s.substr(m+1,n-1-m-1);
	cout<<stoi(s1)+stoi(s2);
	return 0;
} 
