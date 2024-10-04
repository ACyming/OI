#include<bits/stdc++.h>
using namespace std;
long long n,s[3001]={1},s1[3001]={0};
int main()
{
	cin>>n;
	for(long long i=1;i<=n;i++)
	{
		for(long long j=0;j<3000;j++)
		{
			s[j]=s[j]*i;
		}
		for(long long j=0;j<3000;j++)
		{
			s[j+1]=s[j+1]+s[j]/10;
			s[j]=s[j]%10;
		}
		for(long long j=0;j<3000;j++)
		{
			s1[j]=s1[j]+s[j];
			if(s1[j]>9)
			{
				s1[j+1]=s1[j+1]+s1[j]/10;
				s1[j]=s1[j]%10;
			}
		}
	}
	for(long long i=3000;i>=0;i--)
	{
		if(s1[i]!=0)
		{
			for(long long j=i;j>=0;j--)
			{
				cout<<s1[j];
			}
			break;
		}
	}
	return 0;
}
