#include<bits/stdc++.h>
using namespace std;
int n,m;
char mp[1001][1001];
int d[100010][3];
int dy[5]={0,1,-1,0,0};
int dx[95]={0,0,0,1,-1} ;
int ans;
int bz[1001][1001];
void hs(int x,int y)
{
	bool pd=0; 
	int head=0,tail=1;
	d[1][0]=x;
	d[1][1]=y;
	bz[x][y]=0;
	while(head<tail)
	{
		head++;
		for(int i=1;i<=4;i++)
		{
			int xx=d[head][0]+dx[i];
			int yy=d[head][1]+dy[i];
			for(int j=1;j<=4;j++)
			{
				int xx2=xx+dx[j];
				int yy2=xx+dy[j];
				if(xx>=1 && xx<=n && yy>=1 && yy<=m && bz[xx][yy]!='0' && mp[xx2][yy2]<mp[xx][yy])
				{
					pd=1;
				}
			}
			if(pd==1)
			{
				mp[xx][yy]='0';
				d[tail][0]=xx;
				d[tail][1]=yy;
				tail++;
			}
		}
	}
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
		 if(mp[i][j]!='0')
		 {
		 	ans++;
		 }
}
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>mp[i][j];
		}
	}
	hs(1,1);
	cout<<ans;
	return 0;
} 
