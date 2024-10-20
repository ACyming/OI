#include<bits/stdc++.h>
using namespace std;
int m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int r[20],r1=1;
int n;
int main()
{
	cin>>n;
	for(int i=1900;i<=1900+n-1;i++)
	{
		if(i%4==0&&i%100!=0||i%400==0)
		{
			m[2]=29; 
		}
		else
		{
			m[2]=28;
		}
		for(int j=1;j<=12;j++)
		{
			for(int k=1;k<=m[j];k++)
			{
				
				if(k==13)
				{
					r[r1]++;
				}
				r1++;
				if(r1==8)
				{
					r1=1;
				}
			}
		}
	}
	cout<<r[6]<<" "<<r[7]<<" ";
	for(int i=1;i<=5;i++)
	{
		cout<<r[i]<<" ";
	 } 
	return 0;
 } 
