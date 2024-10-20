#include <stdio.h>
#include <math.h>
int isprime(int n)
{
	int i,k;
	k=sqrt(n);
	for(i=2;i<=k;i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
int huiwen(int n)
{
	int a,b,c;
	a=n/100;
	b=n/10%10;
	c=n%10;
	if(a==c)
		return 1;
	else
		return 0;
}
int main()
{
	int i,b;
	for(i=100;i<=999;i++)
	{
		if(isprime(i) && huiwen(i))
			printf("%d\n",i);
	}
	return 0;
}

