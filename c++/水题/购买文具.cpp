#include <iostream>
using namespace std;
int n,i,j,x,y,c;
int main()
{
    
    cin>>n;
    n=n*10;
    for(i=1;i<=(n-2-1)/8;i++)
	{
        x=n-i*8; 
        for(j=1;j<=(x-1)/2;j++)
		{
            y=x-j*2;
            if(i+j+y>30)
			{
                c++;
            } 
        } 
    }
    cout<<c<<endl;
}
