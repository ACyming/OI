#include<iostream>
#include<stdlib.h>
using namespace std;
bool prime(int n)
{
    int i;
    if(n<2)
        return 0;
    for(i=2;i<n;i++)
        if(n%i==0)
            break;
    if(i==n)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    cout<<"请输入一个不为0的自然数:";
    cin>>n;
    if(prime(n))
        cout<<n<<"是素数!"<<endl;
    else
        cout<<n<<"不是素数!"<<endl;
    system("pause");
    return 0;
}
