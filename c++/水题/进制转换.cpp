#include<bits/stdc++.h>
using namespace std;
void hs(long long x,long long y)
{
	long long r,c=1,i=0,v[1000];
	while(c!=0)
	{
		i++;
		v[i]=x%y;
		c=x/y;
		x=c;
	}
	for(i;i>=1;i--)
	{
		if(v[i]<=9)
		{
			cout<<v[i];
		}
		else
		{
			cout<<char(v[i]+55);
		}
	}
}
int main()
{
	long long a;
	cin>>a;
	hs(a,2);
	cout<<endl;
	hs(a,8);
	cout<<endl;
	hs(a,16);
	return 0;
}
