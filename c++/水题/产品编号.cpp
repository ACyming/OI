#include<iostream>
using namespace std;
bool jt[10001];
long long n,m,t=0,s=0,f=0;
int main()
{
	
	cin>>n>>m;
	while(f<n-1)
	{
		t++;
		if(t>n) 
		{
			t=1;
		}
		if(jt[t]==0) 
		{
			s++;
		}
		if(s==m)
		{
			jt[t]=1;
			s=0;
			f++;
	    }
	}
	for(int i=1;i<=n;i++)
	{
		if(jt[i]==0)
		{
			cout<<i;
			return 0;
		}
	}
}
