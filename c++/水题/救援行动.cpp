#include<bits/stdc++.h> 
using namespace std;
int n,m,flag=0;
int dis[4][2]= {1,0,0,1,-1,0,0,-1};
int vis[205][205];
string w[205];
struct man
{
    int x,y,step;
};
queue<man>q;
void bfs(man s)
{
    q.push(s);
    while(!q.empty())
    {
        man t=q.front();
        if(w[t.x][t.y]=='a'){printf("%d\n",t.step);flag=1;return;}
        else if(w[t.x][t.y]=='x'){t.step++;q.pop();q.push(t);w[t.x][t.y]='.';continue;}
        q.pop();
        for(int i=0;i<4;i++)
        {
            int xx=t.x+dis[i][0];int yy=t.y+dis[i][1];
            if(xx>=0&&xx<n&&yy>=0&&yy<m&&vis[xx][yy]==0&&w[xx][yy]!='#')
            {
                man k;
                vis[xx][yy]=1;
                k.step=t.step+1;k.x=xx;k.y=yy;q.push(k);
            }
        }
    }
}
int main()
{
    freopen("save","r",stdin);
    freopen("save","w",stdout);
    scanf("%d%d",&n,&m);man s;
    for(int i=0;i<n;i++)cin>>w[i];
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
        {
            if(w[i][j]=='r')
            {
 
                s.x=i;
                s.y=j;
                s.step=0;
            }
        }
    bfs(s);
    if(flag==0)printf("NO ANSWER\n");
    return 0;
}
