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
	double a,b,c,d,e,f,g,sum=0;
	cin>>a>>b>>c>>d>>e>>f>>g;
	sum=sum+hs(a,e,f)+hs(b,f,g)+hs(c,d,g);
	cout<<fixed<<setprecision(3)<<sum;
	return 0;
}
