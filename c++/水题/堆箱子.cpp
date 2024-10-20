#include<bits/stdc++.h>
using namespace std; 
int n,dp[1001],maxn; 
struct node
{
	int x,y,z; 
}a[607]; 

int main()
{
	scanf("%d",&n); 
	int q,w,e,ww=0; 
	for(int i=1;i<n;i++)
	{
		scanf("%d%d%d",&q,&w,&e); 
		ww++; a[ww].x=q; a[ww].y=w; a[ww].z=e; 
		ww++; a[ww].x=q; a[ww].y=e; a[ww].z=w; 
		ww++; a[ww].x=w; a[ww].y=q; a[ww].z=e; 
		ww++; a[ww].x=w; a[ww].y=e; a[ww].z=q; 
		ww++; a[ww].x=e; a[ww].y=w; a[ww].z=q; 
		ww++; a[ww].x=e; a[ww].y=q; a[ww].z=w; 
	}
	n*=6;
	for(int i=1;i<n;i++) 
		for(int j=0;j<n-i;j++)
			if (a[j].x>a[j+1].x)
			{
				int q=0,w=0,e=0; 
				q=a[j].x; a[j].x=a[j+1].x; a[j+1].x=q; 
				w=a[j].y; a[j].y=a[j+1].y; a[j+1].y=w;
				e=a[j].z; a[j].z=a[j+1].z; a[j+1].z=e;
			}
	for(int i=1;i<n;i++)
	{
		dp[i]=a[i].z;
		for (int j=i-1;j>=0;j--)
			if (a[i].x>a[j].x&&a[i].y>a[j].y) dp[i]=max(dp[i],dp[j]+a[i].z);/
		maxn=max(dp[i],maxn);
	}
	printf("%d",maxn);
	return 0;  
}
