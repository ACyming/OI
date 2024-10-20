#include<bits/stdc++.h>
using namespace std;
string a;
int maxx;
int main()
{
	cin>>a;
	for(int i=0;i<a.size();i++)
	{
		if(a[i]%2==0)
		{
			maxx=max(maxx,int(a[i]));
		}
	}
	if(maxx>0)
	cout<<char(maxx);
	else
	cout<<"No";
	return 0;
 } 
