#include<bits/stdc++.h>
using namespace std;
int n;
string s,maxx;

int main()
{
	cin>>n;
	s=to_string(n);   
	for(int i=1;i<s.size();i++)
	{
		maxx=max(s[i],s[i+1]);
	}
	int m=s.find(maxx);
	swap(s[0],s[m]);
	cout<<s;
	return 0;
} 
