#include<bits/stdc++.h>
using namespace std;
int ans;
void hs(int n)
{
	ans=1;
	int num=n;
	while(num!=0)
	{
		if(num%10!=0)	
		{
			ans=ans*(num%10);
		}
//		cout<<num%10<<endl;
		num/=10;
	}
	if(ans>9)
	{
		hs(ans);
	}
}
int main()
{
	int n;
	cin>>n;
	hs(n);
	cout<<ans;
	return 0;
}
