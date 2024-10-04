#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[10000],cnt,max;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]==a[i-1])
		{
			cnt++;
		}
		else
		{
			cnt=1;
		}
		if(max<cnt)
		{
			max=cnt;
			cnt=0;
		}
	}
	printf("%d",max); 
	return 0;
} 
