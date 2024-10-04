#include<bits/stdc++.h>
using namespace std;
int hs(int x)
{
	int sum=1;
	for(int i=1;i<=x;i++)
	{
		sum=sum*i;
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
