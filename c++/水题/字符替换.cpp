#include<bits/stdc++.h>
using namespace std;
string a,s1,s2;
int n;
int main(){
	cin>>a>>s1>>s2;
	n=a.find(s1);
	while(n!=-1)
	{
		a.replace(n,1,s2); 
		n=a.find(s1);
	}
	cout<<a;
	return 0;
}
