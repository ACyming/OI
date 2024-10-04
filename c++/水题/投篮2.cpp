#include<bits/stdc++.h>
using namespace std;
string s;
int n;
int num=1,ans;
int main()
{
	cin>>n>>s;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='V')
		{
			if(num<3)
			{
				ans++;
			}
			else
			{
				ans+=(num-2);
			}
			num++;
		}
		else
		{
			num=1;
			if(s[i]=='X')
			{
				ans-=1; 
			}
		}
	} 
	cout<<ans;
	return 0;
}
