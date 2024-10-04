#include<bits/stdc++.h>
using namespace std;
string a,b;
int n;
int main(){
	cin>>a>>b;
	n=a.find(b);
	while(n!=-1)
	{
		a.erase(n,1);
		n=a.find(b);
	}
	cout<<a;
	return 0;
}
