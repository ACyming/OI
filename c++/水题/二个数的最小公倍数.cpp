#include<bits/stdc++.h>
using namespace std;
int hs(int x,int y)
{
	int i=x+1;
	while(1)
	{
		i--;
		if(x%i==0&&y%i==0)
		{
			break;
		}
	}
	return i;
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<hs(a,b);
	return 0;
}
