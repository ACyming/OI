#include<bits/stdc++.h>
using namespace std;
int n,m[20],cnt,ans;
string s1,s2[20];
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>s2[i]>>m[i];
	}
	cin>>s1;
	int f;
	for(int i=1;i<=n;i++)
	{
		f=s1.find(s2[i]);
		while(f!=-1)
		{
			cnt++;
			f=s1.find(s2[i],f+1);
		}
		ans+=cnt*m[i];
		cnt=0;
	}
	cout<<ans;
	return 0;
}
