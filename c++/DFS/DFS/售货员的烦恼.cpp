#include<cstdio>
using namespace std;
int a[21000],n,n1,n2,s,ans;
void pd(int k)
{
    if(k>2*n)
	{
        ans++;
        return;
    }
    if(n1<n)
	{
        n1++;
        pd(k+1);
        n1--;
    }
    if(n2<n1)
	{
        n2++;
        pd(k+1);
        n2--;
    }
}  
int main()  
{   
    scanf("%d",&n);
    pd(1);
    printf("%d",ans);
    return 0;  
}
