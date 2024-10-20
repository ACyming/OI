#include<bits/stdc++.h>
using namespace std;
string s,s1;
char a,b,c;
/*
This is a book.
R o e
*/
int main()
{
	getline(cin,s);
	cin>>a>>b;
	if(s.find(b)==-1)
	{
        cout<<"Not exist";
        return 0;
    }
	if(a=='D')
	{
		s.erase(s.find(b),1);
		cout<<s;
		return 0;
	}

	if(a=='I')
	{
		cin>>c;
		for(int i=s.size()-1;i>=0;i--)
		{
			if(s[i]==b)
			{
				s1=c;
				s.insert(i,s1);
				cout<<s;
				return 0;
			}
		}	
	}
	int w;
	if(a=='R')
	{
		cin>>c;
		w=s.find(b);
		while(w!=-1)
		{
			s1=c;
			s.replace(w,1,s1);
			w=s.find(b,w+1);
		}
		cout<<s;
		return 0;
	}
} 
