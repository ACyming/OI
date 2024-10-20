#include<bits/stdc++.h>
using namespace std;
int n,num,a[10010],maxn;
int main() 
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		maxn=max(maxn,i);
		num=i;
		while(num!=0)
		{
			a[num%10]++;
			num/=10;
		}
	}
	for(int i=0;i<=9;i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}
