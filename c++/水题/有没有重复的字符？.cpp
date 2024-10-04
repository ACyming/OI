#include<bits/stdc++.h>
using namespace std;
string a;
int b[200];
int n;
int main(){
	cin>>a;
	for(int i=0;i<a.size();i++)
	{
		b[a[i]]++;
	}
	for(int i=0;i<=a.size();i++)
	{
		if(b[a[i]]>1)
		{
			cout<<a[i];
			return 0;
		}
	}
	cout<<a.size();
	return 0;
} 
