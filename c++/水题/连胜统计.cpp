
#include<bits/stdc++.h>
using namespace std;
int n,a[110],num=1;
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
    {
    	
    	cin>>a[i];
	} 
    for(int i=1;i<=n;i++)
    {
    	if(a[i]==a[i+1])
		{
			num++;
		}
		else
		{
			if(num>=2)
			cout<<a[i]<<" "<<num<<endl;
			num=1;
		} 
	}
    return 0;
}
