#include<bits/stdc++.h>
using namespace std;
long long n,a[10000],head,tail=1,sx,d[10000][3],ax[3]={0,1,-1},bz[10000];
int main()
{
	cin>>n>>d[1][1]>>sx;
	for(long long i=1;i<=n;i++)	cin>>a[i];
	if(d[1][1]==sx)
	{
		cout<<'0';
		return 0;
	}
	while(head<=tail)
	{
		head++;
		for(long long i=1;i<=2;i++)
		{
			long long xx=d[head][1]+a[d[head][1]]*ax[i];
			if(xx>=1&&bz[xx]==0)
			{
				tail++;
				d[tail][1]=xx;
				d[tail][2]=d[head][2]+1;
				bz[xx]=1;
				if(xx==sx)
				{
					cout<<d[tail][2];
					return 0;
				}
			}
		}
	}
	cout<<-1;
	return 0;
}
