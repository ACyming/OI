#include<bits/stdc++.h>
using namespace std;
string a,s1,s2;
int n;
int main(){
	cin>>a;
	n=a.find(",");
	s1=a.substr(0,n);
	s2=a.substr(n+1);
	cout<<s2<<","<<s1;
	return 0;
}
