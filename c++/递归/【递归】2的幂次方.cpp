#include<iostream>
using namespace std;
long long n,tmp;
void hs(int n)
{
	long long i=0,a=0,flag[20000];
    while(n!=0)
    {
        if(n%2)
        {
            flag[a]=i;
            a++;
        }
        n/=2;
        i++;
    }
    for(i=a-1;i>=0;i--)
    {
        if(flag[i]==0)
        {
            cout<<"2(0)";
        }
		else if(flag[i]==1)
        {
            cout<<"2";
        }
		else if(flag[i]==2)
        {
            cout<<"2(2)";
        }
		else
		{
            cout<<"2(";
			hs(flag[i]);
            cout<<")";
        }
        if(i!=0) cout<<"+";
    }
}
int main()
{
    cin>>n;
    hs(n);
    return 0;
}
