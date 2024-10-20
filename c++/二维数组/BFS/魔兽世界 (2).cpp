#include<bits/stdc++.h>
using namespace std;
int d[100190][5],n,a,sum=0,m,e,b,c,f,g,cs[256][3][2],pz[256];
char mp[199][199];
int dx[9]={-1,0,0,1};
int dy[9]={0,1,-1,0};
void lu(int x,int y)                    
{
     int h=0,t=1;
     d[1][0]=0;
     d[1][1]=x;
     d[1][2]=y;
     mp[x][y]='1';
     while(h<t)
     {
     	h++;
     	for(int i=0;i<=3;i++)
	     {
    	 	int xx=d[h][1]+dx[i];
     		int yy=d[h][2]+dy[i];
     		if(mp[xx][yy]!='1'&&xx<=n&&xx>=1&&yy<=m&&yy>=1&&pz[mp[xx][yy]]<2)
     		{
     			t++;
				d[t][0]=d[h][0]+1;
     			if(mp[xx][yy]=='0')
     			{
     				mp[xx][yy]='1';
     				d[t][1]=xx;
     				d[t][2]=yy;
				}
				else if(xx==cs[mp[xx][yy]][1][0]&&yy==cs[mp[xx][yy]][1][1])
				{
					d[t][1]=cs[mp[xx][yy]][2][0];
					d[t][2]=cs[mp[xx][yy]][2][1];
					pz[mp[xx][yy]]++;
				}
				else
				{
					d[t][1]=cs[mp[xx][yy]][1][0];
					d[t][2]=cs[mp[xx][yy]][1][1];
					pz[mp[xx][yy]]++;
				}
				if(d[t][1]==n&&d[t][2]==m)
				{
					printf("%d",d[t][0]);
					exit(0);
				} 
			}
		 }
	 }
     
 }
int main()
{
     scanf("%d%d",&n,&m);
     for(int i=1;i<=n;i++)
     {
     	for(int j=1;j<=m;j++)
     	{
            cin>>mp[i][j];
     		if(mp[i][j]>='A'&&mp[i][j]<='Z')
     		{
     			if(cs[mp[i][j]][1][0]==0)
     			{
     				cs[mp[i][j]][1][0]=i;
     				cs[mp[i][j]][1][1]=j;
				}
				 else
			   {
					cs[mp[i][j]][2][0]=i;
					cs[mp[i][j]][2][1]=j;
			   }
			}
		 }
	 }
     lu(1,1);
     printf("No Solution.");
}
