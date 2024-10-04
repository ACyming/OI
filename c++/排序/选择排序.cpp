#include<bits/stdc++.h>
using namespace std;
long long a[1000],n;
int main()
{
	cin>>n;
	for(long long i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(long long i=1;i<=n;i++)
	{
		long long xiabiao=i;
		for(long long j=i+1;j<=n;j++)
		{
			if(a[j]<a[xiabiao])	//xiabiaoÖØ¸´Ê¹ÓÃ 
			{
				xiabiao=j;
			}
		}
		if(xiabiao!=i)	swap(a[i],a[xiabiao]);
	}
	for(long long i=1;i<=n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
