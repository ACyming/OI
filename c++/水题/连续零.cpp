#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,ans,a,b,k;
	cin>>a>>b;
	for(int i=a;i<=b;i++)
	{
		ans+=i;
	}
	num=ans*1;
	int q; 
	while(k!=0)
	{
		k=num%10;
		q++;
		num/10;
	}
	cout<<q;
	return 0;
}
