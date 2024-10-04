#include<iostream>
using namespace std;
int main()
{
	int ans=0;
	for(int i=1;i<=1000000;i++)
	{
		if(ans<1000)
		{
			ans+=i;
		}
		else 
		{
			cout<<i;
			return 0;
		}
	}
	
}
