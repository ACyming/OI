#include<bits/stdc++.h>
double sum; 
int n,m;
using namespace std;
struct baobao
{
	double num,s,v;
}a[100];
bool cmp(baobao x,baobao y)
{
	return x.v >y.v ;
}
int main()
{
	
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].num>>a[i].s;
		a[i].v=a[i].s/a[i].num;
	}
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;i++)
	{
		if(m>a[i].num)
		{
			sum+=a[i].s;
			m-=a[i].num;
		}
		else
		{
			sum+=a[i].v *m;
			break;
		}
	}
	printf("%0.2lf",sum);
	return 0; 
}
/*
3 21 
6 14 
10 8
18 20*/
