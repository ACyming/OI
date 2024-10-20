#include <bits/stdc++.h>
using namespace std;
double r;
int x;	
int n=0;
void pd(int x)
{
	int num,a[8];
	num=x;
	a[1]=num%10;
	a[2]=num/10%10;
	a[3]=num/100%10;
	a[4]=num/1000%10;
	a[5]=num/10000%10;
	a[6]=num/100000%10;
	a[7]=num/1000000;
	for(int i=1;i<=7;i++)
	{
        for(int j=i+1;j<=7;j++)
		{
            if (a[i]==a[j])
                return ; 
        }
    }
	if(n!=10)
	cout<<x<<" ";
	else
	{
		n=0;
		cout<<endl<<x<<" ";
	}
	n++;
}
int main()
{
	int n;
	for(int i=1000000;i<=9999999;i++)
	{
		x=sqrt(i);
		if(x*x==i)
		{
			pd(i);
		}
	}
	
}

