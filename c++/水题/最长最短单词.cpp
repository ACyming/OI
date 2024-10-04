#include<bits/stdc++.h>
using namespace std;

int main() {
	char s[25000];
	int t=0,l,maxl=0,minl=101,maxi,mini;
	gets(s);
	l=strlen(s);
	s[l]=' ';
	for(int i=0;i<=l;i++)
	{
		 if(s[i]!=' '&&s[i]!=',')
		 {
		 	t++;
		}
		else if(t>0)
		{
			if(t>maxl)
			{
				maxl=t;
				maxi=i-t;
			}
			if(t<mini)
			{
				minl=t;
				mini=i-t;
			}
			t=0;
		}	
	} 
	for(int i=maxi;i<=maxi+maxl-1;i++)
	cout<<s[i];
	cout<<endl;
	for(int i=mini;i<=minl+mini-1;i++)
	{
			cout<<s[i];
	return 0;
	}


} 
