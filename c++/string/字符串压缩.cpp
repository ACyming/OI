#include<bits/stdc++.h>
using namespace std;
string a;
int main()
{
	cin>>a;
	int num=1;
	for(int i=1;i<=a.size();i++)
	{
		if(i==a.size()||a[i]!=a[i-1])
		{
			if(num>1)
			{
				cout<<num<<a[i-1];
				num=1;
			}
			else
			{
				cout<<a[i-1];
			}
		}
		else
		{
			num++;
		}
	}
	return 0;
}
