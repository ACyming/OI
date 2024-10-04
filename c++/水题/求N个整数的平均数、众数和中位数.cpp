#include<bits/stdc++.h>
using namespace std;
int n,a[10010],ans2,b[110],maxn;
double ans1,ans3,num,m;
bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		ans1+=a[i];
		b[a[i]]++;
		if(b[a[i]]>maxn)
		{
			ans2=a[i];
			maxn=b[a[i]];
		}
	}
	sort(a+1,a+n+1,cmp);
//	for(int i=1;i<=n;i++)
//	{
//		cout<<a[i]<<" ";
//	}
//	cout<<endl;
	if(n%2!=0)
	{
		num=a[(n-1)/2+1];
	}
	if(n%2==0)
	{
		num=(a[n/2]+a[n/2+1])/2.0;
	}
	ans3=num;
	ans1/=n;
	printf("%.2lf %d %.1lf",ans1,ans2,ans3);
//	cout<<ans1<<ans2<<ans3;
}
//6 5 4 3 2 2

