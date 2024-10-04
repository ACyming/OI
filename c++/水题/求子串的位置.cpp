#include<bits/stdc++.h>
using namespace std;
string a,b;
int n; 
int main()
{
	getline(cin,a);
	cin>>b;
	if(a.find(b)==-1)
	{
		cout<<-1;
		return 0;
	}
	for(int i=0;i<=a.size()-b.size();i++)
	{
		if(a.substr(i,b.size())==b)
		{
			cout<<i+1<<endl;
		}
	}
	return 0;
}
