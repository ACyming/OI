#include<bits/stdc++.h>
using namespace std;
const long long shu=1000000;
long long n,k,a[shu],maxx=-1,minn=1000001;	//只能排数值小于shu+1的数 
int main()
{
	cin>>n;
	for(long long i=1;i<=n;i++)
	{
		cin>>k;
		a[k]++;
		maxx=max(maxx,k);	//优化 
		minn=min(minn,k);
	}
	for(long long i=minn;i<=maxx;i++)
	{
		if(a[i]>=1)		//判断数值是否存在 
		{
			for(long long j=1;j<=a[i];j++)
			{
				cout<<i<<" ";
			}
		}
	}
	return 0;
}
