#include<bits/stdc++.h>
using namespace std;
int ans=0;
void pd(int x)
{
	int i,r;
	i=2;
	while(i<=x-1)
	{
	 r = x % i;
	 if(r==0)
	 {
	 	return ;
	 }
	 i++;
	}	
	ans++;
}
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		pd(i);	
	}
	cout<<ans-1;
 } 

