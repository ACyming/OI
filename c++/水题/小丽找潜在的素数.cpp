#include<bits/stdc++.h>
using namespace std;
int n,c=0;
int s;
int r=0,t=1;
bool pdsushu (int n)
{
    for(int i=2;i<=sqrt(n);i++)
	{
        if(n%i==0)
		{
            return false;
        }
    }
    return true;
}
int jz(int n)
{
	int num=0;
	for(int i=0;;i++)
	{
		if(n==0)
		{
			return num;
		}
		else
		{
			num=num+n%10*pow(2,i);
			n/=10;
		}
	}
}
int a[101];
int  main() 
{
    cin>>n;
    int nm;
    for(int i=1; i<=n;i++) 
	{
        cin>>s;
		nm=jz(s);
        if(pdsushu(nm)) c++;
    }
    cout<<c;
}

