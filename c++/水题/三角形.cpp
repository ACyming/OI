#include<bits/stdc++.h>
using namespace std;
double hs(double x,double y,double z)
{
	double s,p=(x+y+z)/2;
	s=sqrt(p*(p-x)*(p-y)*(p-z));
	return s;
}
int main()
{
	double n,a,b,c;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>b>>c;
		if(a+b>c&&a+c>b&&b+c>a)
		{
			cout<<fixed<<setprecision(2)<<hs(a,b,c)<<endl;
		}
		else
		{
			cout<<"error"<<endl;
		}
	}
	return 0;
}
