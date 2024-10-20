#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[100000],b,s;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		b+=a[i];
	}
	b=b/n;
	for(int i=1;i<=n;i++)
	{
		if(a[i]>b)
		{
			s++;
		}
	}
	cout<<s;
	return 0;
}
