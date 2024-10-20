#include<bits/stdc++.h>
using namespace std;
int ans=1,n;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		ans*=n%10000007;
	} 
	cout<<ans%10000007;
	return 0;
}
