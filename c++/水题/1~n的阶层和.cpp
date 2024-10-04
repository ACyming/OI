#include<bits/stdc++.h>
using namespace std;
int hs1(int y)
{
	int sum=1;
	for(int i=1;i<=y;i++)
	{
		sum=sum*i;
	}
	return sum;
}
int hs(int x)
{
	int sum=0;
	for(int i=1;i<=x;i++)
	{
		sum=sum+hs1(i);
	}
	return sum;
}
int main()
{
	int n;
	cin>>n;
	cout<<hs(n);
	return 0;
}
