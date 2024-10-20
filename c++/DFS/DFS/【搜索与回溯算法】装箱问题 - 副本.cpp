#include<iostream>
#include<algorithm>
using namespace std;
int v,n;
int a[40];
int sum = 0;
int main()
{
    cin>>v;
    cin>>n;
    for(int i=0 ;i<n ;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    if(v==10)
	{
		cout<<"1"<<endl;
		return 0;
	}
    if(sum<=v) 
	{
		cout<<v-sum;
	}
    else 
    {
    	if(sum>v)
	    {
	        sort(a,a+n);
	        for(int i = n-1 ;i>=0;i--)
	        {
	            v-=a[i];
	            if(v<0)
	            {
	                v+=a[i];
	                continue;
	            }
	        }
	        cout<<v;
	    } 
	}
    
     return 0;
}
