#include<bits/stdc++.h>
using namespace std;
double a[11]={28.9,32.7,45.6,78,35,86.2,27.8,43,56,65},n,ans;
int main()
{
	for(int i=0;i<=9;i++)
	{
		cin>>n;
		ans=ans+a[i]*n;
	
	}
	printf("%0.1lf",ans);
	return 0; 
}
