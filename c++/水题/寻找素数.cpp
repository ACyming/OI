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
    cout<<"������һ����Ϊ0����Ȼ��:";
    cin>>n;
    if(prime(n))
        cout<<n<<"������!"<<endl;
    else
        cout<<n<<"��������!"<<endl;
    system("pause");
    return 0;
}
