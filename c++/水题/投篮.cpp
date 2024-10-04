#include<bits/stdc++.h>
using namespace std;
string a;
int n,ans,num;
int main()
{
	cin>>n;
	cin>>a;
	for(int i=0;i<n;i++)
	{
		if(a[i]=='V')
		{
			ans++;
			num++;
			if(num>=3) 
			{
				ans+=num-2-1;
			}
		}
		else if(a[i]=='T')
		{
			num=0;
		}
		else
		{
			ans-=1;
			num=0;
		}
	}
	cout<<ans;
}
//5
//1
//2
//3

