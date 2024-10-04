#include<bits/stdc++.h>
using namespace std;
string a;
int b=true;
int main(){
	getline(cin,a);
	for(int i=0;i<a.size();i++)
	{
		if((isalpha(a[i]) || isdigit(a[i]) || a[i]=='_')==false)
		{
			b=false;
		} 
	}
	
	if(isdigit(a[0]))
	b=false;
	if(a=="int"||a=="cin"||a=="cout"||a=="double")
	b=false;
	if(b)
	cout<<"yes";
	else
	cout<<"no"; 
	return 0;
}
