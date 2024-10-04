#include<cstdio>
#include<cstring>
using namespace std;
int a[100001],n,m;
bool check(int x){
int now=x,tot=0;
    for (int i=0;i<n;i++){
      if (x<a[i]) return false;
      if (now-a[i]<0){
        now=x;
        tot++;
        now-=a[i];
        if (tot==m) return false;
      }
      else
        now-=a[i];
    }
    return true;
}
int main(){
    int i,j,s,t,tot=0;
    scanf("%d%d",&n,&m);
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
        tot+=a[i];
    }
    int r=tot,l=0;
    while (l<=r){
        int mid=(l+r)>>1;
        if(check(mid)) r=mid-1;
                  else l=mid+1;
    }
    printf("%d",l);
    return 0;
}
