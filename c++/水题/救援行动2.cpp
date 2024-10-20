#include<cstdio>
#include<queue>
using namespace std;
const int dx[4]={1,-1,0,0};
const int dy[4]={0,0,1,-1};
struct node
{
   int x,y,t;
};
char mp[205][205];
bool vis[205][205];
int n,m,sx,sy;
void bfs(int sx,int sy)
{
     queue<node>q;
     node fre,nex;
     fre.x=sx;
     fre.y=sy;
     fre.t=0;
     q.push(fre);
     while(!q.empty())
     {
         fre=q.front();
         q.pop();
         if(mp[fre.x][fre.y]=='a')
         {
             printf("%d\n",fre.t);
             return ;
         }
         else if(mp[fre.x][fre.y]=='x')
         {
             fre.t++;
             mp[fre.x][fre.y]='.';
             q.push(fre);
             continue;
         }
         for(int i=0;i<4;i++)
         {
             int nx=fre.x+dx[i];
             int ny=fre.y+dy[i];
             if(mp[nx][ny]!='#'&&!vis[nx][ny]&&nx>=0&&nx<n&&ny>=0&&ny<m)
             {
                 vis[nx][ny]=1;
                 nex.x=nx;
                 nex.y=ny;
                 nex.t=fre.t+1;
                 q.push(nex);
             }
         }
     }
     printf("NO ANSWER\n");
     return ;
 }
 int main()
 {
	 freopen("save.in","r",stdin);
	 freopen("save.out","w",stdout);
     scanf("%d%d",&n,&m);
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<m;j++)
         {
             scanf(" %c",&mp[i][j]);
             vis[i][j]=0;
             if(mp[i][j]=='r')
             {
                 sx=i;
                 sy=j;
             }
         }
     }
     bfs(sx,sy);
     return 0;
}
