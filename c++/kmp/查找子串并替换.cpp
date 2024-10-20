#include<bits/stdc++.h>
using namespace std;
string a,b,c;
int main(){
	getline(cin,a);
	getline(cin,b);
	getline(cin,c);
	int n=a.find(b);
	int m=b.size();
	a.replace(n,m,c);
	cout<<a;
	return 0;
} 
