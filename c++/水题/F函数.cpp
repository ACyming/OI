#include<bits/stdc++.h>
using namespace std;
double n,m;
double fun(int x,int j)
{
	if(j==1)
	{
		return sqrt(x+j);
	}
	else
	{
		return sqrt(fun(x,j-1)+j);
	}
}
int main()
{
	scanf("%lf%lf",&n,&m);
	printf("%.2lf",fun(n,m));
	return 0;
}
