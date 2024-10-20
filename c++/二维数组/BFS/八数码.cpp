#include<bits/stdc++.h>
using namespace std;
long long head,tail=1,d[362880][3],a[362880][4][4],b[4][4];
long long ax[5]={0,1,-1,0,0},ay[5]={0,0,0,1,-1};
bool bz[9][9][9][9][9][9][9][9];
bool hs(long long x)
{
	for(long long i=1;i<=3;i++)
	{
		for(long long j=1;j<=3;j++)
		{
			if(a[x][i][j]!=b[i][j])
			{
				return 0;
			}
		}
	}
	return 1;
}
int main()
{
	for(long long i=1;i<=3;i++)
	{
		for(long long j=1;j<=3;j++)
		{
			cin>>a[1][i][j];
			if(a[1][i][j]==0)
			{
				d[1][1]=i;
				d[1][2]=j;
			}
		}
	}
	for(long long i=1;i<=3;i++)
	{
		for(long long j=1;j<=3;j++)
		{
			cin>>b[i][j];
		}
	}
	bz[a[1][1][1]][a[1][1][2]][a[1][1][3]][a[1][2][1]][a[1][2][2]][a[1][2][3]][a[1][3][1]][a[1][3][2]]=1;
	while(head<tail)
	{
		head++;
		for(long long i=1;i<=4;i++)
		{
			long long xx=d[head][1]+ax[i];
			long long yy=d[head][2]+ay[i];
			if(xx>=1&&xx<=3&&yy>=1&&yy<=3)
			{
				tail++;
				for(long long i=1;i<=3;i++)
				{
					for(long long j=1;j<=3;j++)
					{
						a[tail][i][j]=a[head][i][j];
					}
				}
				swap(a[tail][xx][yy],a[tail][d[head][1]][d[head][2]]);
				d[tail][0]=d[head][0]+1,d[tail][1]=xx,d[tail][2]=yy;
				if(bz[a[tail][1][1]][a[tail][1][2]][a[tail][1][3]][a[tail][2][1]][a[tail][2][2]][a[tail][2][3]][a[tail][3][1]][a[tail][3][2]]==0)
				{
					bz[a[tail][1][1]][a[tail][1][2]][a[tail][1][3]][a[tail][2][1]][a[tail][2][2]][a[tail][2][3]][a[tail][3][1]][a[tail][3][2]]=1;
					if(hs(tail))
					{
						cout<<d[tail][0];
						return 0;
					}
				}
				else
				{
					tail--;
				}
			}
		}
	}
	cout<<-1; 
	return 0;
}
