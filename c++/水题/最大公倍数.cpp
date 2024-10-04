#include<bits/stdc++.h>
using namespace std;
int hs(int x,int y)
{
	int i=x-1;
	while(1)
	{
		i++;
		if(i%x==0&&i%y==0)
		{
			return i;
		}
	}
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<hs(a,b);
	return 0;
}
