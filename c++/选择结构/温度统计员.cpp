#include<bits/stdc++.h>
using namespace std;
int n,a[110],num=1,maxn;
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
    {
    	
    	cin>>a[i];
	} 
    for(int i=1;i<=n;i++)
    {
    	if(a[i]<a[i+1])
		{
			num++;
		}
		else
		{
			maxn=max(maxn,num);
			num=1;
		} 
	}
	cout<<maxn; 
    return 0;
}
