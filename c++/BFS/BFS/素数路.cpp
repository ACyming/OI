#include<bits/stdc++.h>
using namespace std;
long long d[1000000][3],head,tail=1,k,a[5],minn=100000;
bool s[11][11][11][11];
bool pd(long long x)
{
	for(long long i=2;i*i<=x;i++)
	{
		if(x%i==0)	return 0;
	}
	return 1;
}
int main()
{
	cin>>d[1][1]>>k;
	a[1]=d[1][1]%10,a[2]=d[1][1]/10%10,a[3]=d[1][1]/100%10,a[4]=d[1][1]/1000;
	while(head<=tail)
	{
		head++;
		for(long long i=0;i<=9;i++)
		{
			for(long long j=4;j>=1;j--)
			{
				if(a[j]!=i)
				{
					a[1]=d[head][1]%10,a[2]=d[head][1]/10%10,a[3]=d[head][1]/100%10,a[4]=d[head][1]/1000;
					a[j]=i;
					long long shu=a[1]+a[2]*10+a[3]*100+a[4]*1000;
					if(shu<1000)	continue;
					if(pd(shu)&&s[a[1]][a[2]][a[3]][a[4]]==0)
					{
						tail++;
						d[tail][1]=shu;
						d[tail][2]=d[head][2]+1;
						s[a[1]][a[2]][a[3]][a[4]]=1;
						if(shu==k)
						{
							cout<<d[tail][2];
							return 0; 
						}
					}
				}
			}
		}
	}
	cout<<"Impossible";
	return 0;
}
