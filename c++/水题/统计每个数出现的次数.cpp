#include<bits/stdc++.h>
using namespace std;
int n,a[1010],cnt;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	for(int i=1;i<=n;i++)
	{
		cnt++;
		if(i==n||a[i]!=a[i+1])
		{
			cout<<a[i]<<" "<<cnt<<endl;
			cnt=0;
		}
	}
	return 0;
 } 
