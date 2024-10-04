#include<bits/stdc++.h>
using namespace std;
int hs(int x,int y,int z)
{
	int i=x+1;
	while(1)
	{
		i--;
		if(x%i==0&&y%i==0&&z%i==0)
		{
			break;
		}
	}
	return i;
}
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	cout<<hs(a,b,c);
	return 0;
}
