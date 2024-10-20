#include<iostream>
using namespace std;
int a=1,i,n,d=2;
int main()
{
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<a<<" ";	
		a=a+d;
		d=d*2;
	}
	return 0;
}

