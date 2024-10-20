#include<bits/stdc++.h>
using namespace std;
int n,m,s,t,e;
double g[3000][3000];
double dis[3000];
bool st[3000];
int x,y,z,a,b;
int main()
{
	cin>>n>>m;
	memset(g,0x3f,sizeof(g)); 
	memset(dis,0x3f,sizeof(dis)); 
	for(int i=1;i<=m;i++)
	{
		cin>>x>>y>>z;
		g[x][y]=g[y][x]=1.0*(100-z)/100;
	}
	cin>>a>>b;
	dis[a]=1;
	for(int i=0;i<n-1;i++)
	{
		int t=-1;
		for(int j=1;j<=n;j++)
		{
			if(!st[j] && (t==-1||dis[j]>dis[t]))
			{
				t=j;
			} 
		}
		st[t]=true;
		for(int j=1;j<=n;j++)
		{
			if(dis[j]<dis[t]*g[t][j])
			dis[j]=dis[t]*g[t][j];
			
		}
	}
	printf("%.8lf",100/dis[b]);
}
