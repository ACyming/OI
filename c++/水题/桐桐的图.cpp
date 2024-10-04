#include<bits/stdc++.h>
using namespace std;
int n,a[10],ans[20],vis[10];
bool dfs(int step,int last){
    if(step==2*n+1)return true;
    for(int i=1;i<=n;i++){
        if(vis[i]<2&&(step-last-1==a[i]||last==0)){
            vis[i]++;
            ans[step]=a[i];
            if(dfs(step+1,step))return true;
            vis[i]--;
        }
    }
    return false;
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    sort(a+1,a+n+1);
    if(dfs(1,0)){
        for(int i=1;i<=2*n;i++)cout<<ans[i]<<" ";
    }
    else cout<<-1;
    return 0;
} 

