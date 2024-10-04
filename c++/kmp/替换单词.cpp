#include<bits/stdc++.h>
using namespace std;
string a,b,c;
int main(){
	getline(cin,a);
	int n=a.find("ruler");
	while(n!=-1)
	{
		a.replace(n,5,"book");
		n=a.find("ruler");
	}
	
	cout<<a;
	return 0;
} 
