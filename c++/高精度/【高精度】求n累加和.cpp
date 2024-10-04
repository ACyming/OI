#include<bits/stdc++.h>
using namespace std;
int a[1000];
int main()
{
	int n,lena=1;
	cin>>n;
	for(int i=1;i<=n;i++) 
	{
		a[1]+=i;
		for(int j=1;j<=lena;j++)
		{
			a[j+1]+=a[j]/10;
			a[j]%=10;
			if(j==lena)
			{
				if(a[j+1]>0) lena++;
			}
		}
	}
	for(int i=lena;i>=1;i--) 
	{
		cout<<a[i];
	}
	return 0;
}
