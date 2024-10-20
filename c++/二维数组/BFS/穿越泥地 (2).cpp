#include<iostream>
using namespace std;
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
int d[10001001][3],mp[1001][1001];
int x1,y1,a_i,b_i,n;
int bz[1001][1001]; 
void bfs(int x,int y)
{
	int head=0,tail=1;
	d[1][0]=x;
	d[1][1]=y;
	d[1][2]=0;
	mp[x][y]=1;
	do{
		head++;
		for(int i=0;i<=3;i++)
		{
			int xx=d[head][0]+dx[i];
			int yy=d[head][1]+dy[i];
			if(xx>=0 &&xx<=1000 &&yy>=0 &&yy<=1000 &&mp[xx][yy]==0)
			{
				tail++;
				d[tail][0]=xx;
				d[tail][1]=yy;
				d[tail][2]=d[head][2]+1;
				mp[xx][yy]=1;
				if(xx==x1 && yy==y1)
				{
					cout<<d[tail][2];
					return;
				}
			}
		}
	}while(head<tail);
}
int main()
{
	cin>>x1>>y1>>n;
	x1+=500;y1+=500;
	for(int i=1;i<=n;i++)
	{
		cin>>a_i>>b_i;
		mp[a_i+500][b_i+500]=1;
	}
	bfs(500,500);
}
