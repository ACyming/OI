#include<bits/stdc++.h>
using namespace std;
int check(int x,int y)
{
	while(x>0)
	{
		if(x%10==y)
		{
			return 1;
		}
		x=x/10;
	}
	return 0;
}
int main()
{
	int n,d;
	cin>>n>>d;
	if(check(n,d)==1)
	{
		cout<<"true";
	}
	else
	{
		cout<<"false";
	}
	return 0;
}
