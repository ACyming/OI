#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int n,k,t,x,w;
bool flag=0,ok;
long long d[11000],v[11000];
int main() {
	scanf("%d",&t);
	while(t--) {
		memset(v,0,sizeof(v));
		scanf("%d%d",&n,&k);
		for(int i=1; i<=n; i++)
			scanf("%lld",&d[i]);
		if(k==1)
		{
			printf("true\n");
			continue;
		}
		sort(d+1,d+n+1);
		flag=0;
		for(int i=1; i<=n; i++) {
			x=i,w=0,ok=0;
			if(!v[x])
			{
				v[x]=1;
				for(int j=i+1; j<=n; j++) 
				{
					if(!v[j]&&d[j]-d[x]==1) 
					{
						w++;
						v[j]=1;
						x=j;
						if(w==k-1)
						{
							ok=1;
							break;
						}
					}
				}
				if(!ok)
				{
					flag=1;
					printf("false\n");
					break;
				}
			}
		}
		if(!flag)printf("true\n");		
	}
}

