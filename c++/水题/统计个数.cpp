#include<bits/stdc++.h>
using namespace std;
int hs(int x,int y)
{
	int cnt=0;
	for(int i=1;i<=x;i++)
	{
		int t=i;
		while(t>0)
		{
			if(t%10==y)
			{
				cnt++;
				break;
			}
			t=t/10;
		}
	}
	return cnt;
}
int main()
{
	long long n,m;
	cin>>n>>m;
	cout<<hs(n,m);
	return 0;
}
