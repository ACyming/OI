//tolower
//toupper
#include<bits/stdc++.h>
using namespace std;
string a,b="aeiouAEIOU";
int main(){
	getline (cin,a);
	for(int i=0;i<a.size();i++)
	{
		if(b.find(a[i])!=-1)
		{
			a[i]=toupper(a[i]);
		} 
		else
		{
			a[i]=tolower(a[i]);
		}
	}
	cout<<a;
	return 0;
}
