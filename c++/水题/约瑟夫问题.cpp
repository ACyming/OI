#include<bits/stdc++.h>
using namespace std;
int n,m,t,l,a[105];
int main()
{
    scanf("%d %d",&n,&m);
    int t=n,l=1;
    while(t){
    int s=0;
        for(int i=l;s!=m;i++)
		{
            if(i>n) 
			i%=n;
            if(a[i]==-1)
			continue;
            s++;
            if(s==m)
			{
             a[i]=-1;
              t--;
                l=i+1;
                printf("%d\n",i);
                break;
            }
        }
    }
    return 0;
}

