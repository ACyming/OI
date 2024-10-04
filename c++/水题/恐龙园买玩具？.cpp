#include<bits/stdc++.h>
using namespace std;
int n,x,y,t,i;
int main() 
{
     cin>>n>>x>>y;
     for(i 1;i<=(n-y)/x;i++)
	 {
          t=n-i*x;
          if(t%y==0&&i>=t/y&&i+t/y>=5)
		  {
                  cout<<i<<" "<<t/y<<endl;
          }
     }
}
