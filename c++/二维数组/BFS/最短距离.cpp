#include<bits/stdc++.h>
using namespace std;
long long n,a[602][602],head,tail=1,d[100000][2],sc,minn=2000000;
bool hs()
int main()
{
	cin>>n;
	for(long long i=1;i<=n;i++)
	{
		d[1][n]=
		for(long long j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	d[1][0]=1;
	while(head<tail)
	{
		head++;
		for(long long i=1;i<=n;i++)
		{
			if(i!=d[head][0])
			{
				long long xx=d[head][1]+a[d[head][0]][i];
				if(xx<minn)
				{
					tail++;
					d[tail][0]=i;
					d[tail][1]=xx;
					if(hs())	minn=xx;
				}
			}
		}
	}
	cout<<minn;
	return 0;
}
