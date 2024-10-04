#include<bits/stdc++.h>
using namespace std;
void hs(int x)
{
	int a,d=0,t;
	while(d!=1)
	{
		int sum=0;
		x++;
		for(int i=1;i<=x;i++)
		{
			if(x%i==0&&i!=x)
			{
				sum=sum+i;
			}
		}
		t=sum;
		sum=0;
		for(int i=1;i<=t;i++)
		{
			
			if(t%i==0&&i!=t)
			{
				sum=sum+i;
			}
		}
		if(sum==x&&x!=t)
		{
			cout<<x<<" "<<t;
			d=1;
		}
	}
}
int main()
{
	hs(1);
	return 0;
}
