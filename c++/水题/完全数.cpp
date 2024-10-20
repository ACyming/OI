#include<bits/stdc++.h>
using namespace std;
int hs(int x)
{
	int sum=0;
	for(int i=1;i<=x-1;i++)
	{
		if(x%i==0)
		{
			sum=sum+i;
		}
	}
	return sum;
}
int main()
{
	int n;
	cin>>n;
	for(int i=2;i<=n;i++)
	{
		if(i==hs(i))
		cout<<i<<endl;
	}
	return 0;
}
