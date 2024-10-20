#include<bits/stdc++.h>
using namespace std;
int a[9999999],n;
int main()
{
	int maxx=-999,minn=9999999;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		maxx=max(a[i],maxx);
		minn=min(a[i],minn);
	}
//	for(int i=1;i<=n;i++)
//	{
//		if(a[i]>maxx)
//		{
//			maxx=a[i];
//		}
//		if(a[i]<minn)
//		{
//			minn=a[i];
//		}
//	}
	cout<<maxx<<" "<<minn;
	return 0;
}
