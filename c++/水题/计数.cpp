#include<bits/stdc++.h>
using namespace std;
int hs(int x)
{
	long long sum=0;
	for(int i=1;i<=x;i++)
	{
		int t=i;
		while(t>0)
		{
			sum=sum+i%10;
			t=t/10;
		}
	}
	return sum;
}
int main()
{
	long long n;
	cin>>n;
	cout<<hs(n);
	return 0;
}
