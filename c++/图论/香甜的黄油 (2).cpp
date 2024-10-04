#include<bits/stdc++.h>
using namespace std;
const int maxn=3000+10;
int g[maxn],n,m,d[maxn][maxn],to[maxn],cnt,first[maxn],p1,p[maxn],next[maxn],piao[maxn];
int w[maxn],dis[maxn];
/*void add(int u,int v,int l){
    ++cnt;
    to[cnt]=v;	
    next[cnt]=first[u];
    first[u]=cnt;	
    w[cnt]=l;
}*/
void dijkstra(int s){
    for(int i=1;i<=n;i++)dis[i]=10000;
    memset(piao,0,sizeof(piao));
    int u;
    int minn;
    for(int i=1;i<=n;i++)
        dis[i]=d[s][i];
    piao[s]=1;
    dis[s]=0;
    for(int i=2;i<=n;i++){
        minn=2147483647-1;
    for(int j=1;j<=n;j++)
        if(piao[j]==0&&dis[j]<minn)
            minn=dis[j],u=j;
    piao[u]=1;
    for(int j=1;j<=n;j++)
        if(dis[j]>dis[u]+d[u][j]&&!piao[j])
            dis[j]=dis[u]+d[u][j];
    		}
    	}
    
int main(){
    cin>>p1>>n>>m;
    memset(d,0x3f3f,sizeof(d));
    for(int i=1;i<=p1;i++)
    scanf("%d",&g[i]);
    for(int i=1;i<=m;i++){
        int x,y,z;
        cin>>x>>y>>z;
        d[x][y]=d[y][x]=z;
    }
    int minn=100000000;
    for(int i=1;i<=n;i++){
        dijkstra(i);
        int ans=0;
        for(int j=1;j<=p1;j++)
        ans+=dis[g[j]];
        minn=min(minn,ans);
    //	cout<<ans<<endl;
    }
    cout<<minn<<endl;
    return 0;
    }

