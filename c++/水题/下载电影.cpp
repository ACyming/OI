#include<bits/stdc++.h>
using namespace std;
double n,m,a[2000],maxx,cnt,num;
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cnt+=a[i+j];
		}
		maxx=(maxx,cnt);
		cnt=0;
	}
	m*=1.0;
	printf("%lf",maxx/m);
	return 0;
}
