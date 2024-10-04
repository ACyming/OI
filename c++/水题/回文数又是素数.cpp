#include<bits/stdc++.h>
using namespace std;
void hs(int x)
{
	int d;
	for(int i=2;i<=x;i++)
	{
		d=0;
		if(x/i==1||x%i!=0)
		{
			d=1;
		}
		else
		{
			d=0;
			break;
		}
	}
	if(d==1)
	{
		cout<<x<<endl;
	}
}
int main()
{
	for(int i=100;i<=999;i++)
	{
		if(i%10==i/100)
		{
			hs(i);
		}
	}
	return 0;
}
