#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int a[45]={0},b[21]={0},v[21]={0},n;
void init()
{
    int i,j;
    for(i=2; i<45; i++)
        a[i] = i;  
    for (i=2; i*i<45; i++)
    {
        if (a[i] != 0)
        for (j=i*2; j<45; j+=i)
        {
            a[j] = 0;
        }
    }
}
void dfs(int x)
{
    int i,j;
    if (x > 0 && b[0]!=1)
    {
        return ;
    }
    for (j=2; j<=x; j++)
    {
        if (!a[b[j-2]+b[j-1]])
        {
            return ;
        }
    }
    if (x == n)
    {
        if (a[b[0] + b[x-1]])
        {
            for (j=0; j<n; j++)
            {
                cout<<b[j]<<" "; 
            }
            cout<<endl;
            return ;    
        }
    }
    for (i=1; i<=n; i++)
    {
        if (!v[i])
        {
            b[x] = i;
            v[i] = 1;
            dfs(x+1);
            v[i] = 0;
        }
    }
} 
int main()
{
    init();
    int i,j,ca=1,T=0;
    cin>>n;
    if (n==0)
    {
    	return 0;
	}
    if (n==1)
    {
        cout<<1<<endl;
    }
    else if (n%2==0)
    {
        dfs(0);
    }
    else
    {
        cout<<"No Answer"<<endl;
    }
    return 0;
 }  
