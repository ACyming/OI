#include<bits/stdc++.h>
using namespace std;
long long n,m,nx,ny,d[100003][4],head,tail=1,bz[1200][1200],zf[97][6];
long long ax[5]={0,1,0,-1,0},ay[5]={0,0,1,0,-1};
char a[1200][1200];
int main()
{
	cin>>n>>m;
	for(long long i=1;i<=n;i++)
	{
		for(long long j=1;j<=m;j++)
		{
			cin>>a[i][j];
			if(a[i][j]>='A'&&a[i][j]<='Z')
			{
				if(zf[a[i][j]][1]!=0&&zf[a[i][j]][2]!=0)
					zf[a[i][j]][3]=i,zf[a[i][j]][4]=j;
				else
					zf[a[i][j]][1]=i,zf[a[i][j]][2]=j;
			}
			if(a[i][j]=='0')a[i][j]='.';
			if(a[i][j]=='1')a[i][j]='#';
		}
	}
	a[n][m]='a';
	d[1][1]=1;
	d[1][2]=1;
	while(head<=tail)
	{
		head++;
		for(int i=1;i<=4;i++)
		{
			int xx=d[head][1]+ax[i],yy=d[head][2]+ay[i];
			if(xx>0&&xx<=n&&yy>0&&yy<=m&&bz[xx][yy]==0&&a[xx][yy]!='#')
			{
				if(a[xx][yy]>='A'&&a[xx][yy]<='Z'&&zf[a[xx][yy]][5]<2)
				{
					tail++;
					zf[a[xx][yy]][5]++;
					if(xx==zf[a[xx][yy]][1]&&yy==zf[a[xx][yy]][2])
					{
						d[tail][1]=zf[a[xx][yy]][3];
						d[tail][2]=zf[a[xx][yy]][4];
						d[tail][3]=d[head][3]+1;
					}
					else
					{
						d[tail][1]=zf[a[xx][yy]][1];
						d[tail][2]=zf[a[xx][yy]][2];
						d[tail][3]=d[head][3]+1;
					}
					continue;
				}
				tail++;
				d[tail][1]=xx;
				d[tail][2]=yy;
				d[tail][3]=d[head][3]+1;
				bz[xx][yy]=1;
				if(a[xx][yy]=='a')
				{
					cout<<d[tail][3];
					return 0;
				}
			}
		}
	}
	cout<<"No Solution.";
	return 0;
}
