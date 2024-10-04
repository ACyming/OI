#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<algorithm>
#include<stack>
using namespace std;
const int MAXN=2005;
int n,m,p,tot,ans,need[MAXN],provide[MAXN],sum[MAXN];
int waste;
bool dfs(int k,int sign)
{
    if(k==0)return 1;
    if(waste+sum[p]>tot) return 0;
    for(int i=sign;i<=n;i++){
        if(provide[i]>=need[k]){
            provide[i]-=need[k];
            if(provide[i]<need[1]) waste+=provide[i];
            if(need[k]==need[k-1]){
                if(dfs(k-1,i)){
                    if(provide[i]<need[1]) {
                        waste-=provide[i];
                    }
                    provide[i]+=need[k];return 1;//»ØËÝ
                }
            }
            else{
                if(dfs(k-1,1)){
                    if(provide[i]<need[1]) {
                        waste-=provide[i];
                    }
                    provide[i]+=need[k];return 1;
                }
            }
            if(provide[i]<need[1]) waste-=provide[i];
            provide[i]+=need[k];
        }
    }
    return false ;
}
bool pd(int x)
{
    p=x;waste=0;if(dfs(p,1)) return 1;
    return 0;
}
int main()
{
    scanf("%d",&n);tot=0;
    for(int i=1;i<=n;i++){
        scanf("%d",&provide[i]);
        tot+=provide[i];
    }
    scanf("%d",&m);
    int l=0,r=0;
    for(int i=1;i<=m;i++){
        scanf("%d",&need[i]);
    }
    sort(provide+1,provide+1+n);sort(need+1,need+1+m);
    for(int i=1;i<=m;i++){
        sum[i]=sum[i-1]+need[i];
        if(sum[i]>tot) r=min(r,sum[i]);if(provide[i]>need[i]) l++;
    }
    while(l<r-1){
        int mid=(l+r)>>1;
        if(pd(mid)) l=mid+1;
        else r=mid-1;
    }
    if(l==r) printf("%d\n",l);
    else if(pd(r)) printf("%d\n",r);
    else printf("%d\n",l);
    return 0;
}
