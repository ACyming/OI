#include<iostream>
using namespace std;
int n,m,t[10001],b,l,j;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
            cin>>j;
            for(int k=1;k<=j;k++)
            {
                    cin>>l;
                    t[l]++;
            }
    }
    int max=0;
    for (int i=1;i<=100;i++)
    {
        if(t[i]>max)   
       	{
       		b=i;
        	max=t[i];
        }
    }
    if (max<m) 
	cout<<'0';
    if (max>=m)
	cout<<b;
    return 0;
}

