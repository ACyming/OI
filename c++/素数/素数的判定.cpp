#include<cstdio>
int main()
{
	int n,i,r;
	scanf("%d",&n);
	i=2;
	while(i<=n-1)
	{
	 r = n % i;
	 if(r==0)
	 {
	 	printf("no");
	 	return 0;
	 }
	 i++;
	}
	printf("yes ");
	return 0;
 } 
 /*
#include<bits/stdc++.h>
using namespace std;
int sum,a[999999],b[999999],ans=0,maxx=0,num,maxa,maxb,a1[99999],b1[99999];
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		maxa=max(maxa,a[i]);
		a1[a[i]]++;
	}
	for(int i=1;i<=m;i++)
	{
		cin>>b[i];
		maxb=max(maxb,b[i]);
		b1[b[i]]++;
	}
	for(int i=1;i<=maxa;i++)
	{
		if(a1[i]>0) 
		for(int j=1;j<=maxb;j++)
		{	
			sum+=a1[i]*b1[j]*t*b1[t];
		}
	}
	
	cout<<sum;
	return 0;
}
*/
