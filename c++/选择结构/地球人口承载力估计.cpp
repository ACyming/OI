#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y,a,b;
	double z;
	cin>>x>>a>>y>>b;
	z=(y*b-x*a)/(b-a);
	printf("%0.2lf",z);
	return 0;
}
