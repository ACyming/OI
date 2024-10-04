#include<bits/stdc++.h>
using namespace std;
long long n,f[10000];
void hs(long long x,char a,char b,char c,long long cnt)
{
	if(x==1)
	{
		cout<<cnt;
		return;
	}
	hs(x-1,a,c,b,cnt+1);
	cout<<a<<"->"<<f[a]<<"->"<<c<<endl;
	hs(x-1,b,a,c,cnt+1);
}
int main()
{
	char a,b,c;
	cin>>n>>a>>b>>c;
	f[a]=1,f[b]=2,f[c]=3;
	hs(n,a,b,c,0);
	return 0;
}
