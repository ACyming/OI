#include <string>
#include <iostream>
using namespace std;
bool ll(string a)
{
	int i,la;
	la=a.size();
	for(i=0;i<=la/2;i++)
	{
		if(a[i]!=a[la-1-i])
		{
			return 0; 
		}
	}
	return 1;
}
int main()
{
	int la;
    string a,i,b;
    cin>>a;
    la=a.size();
    while(la%2==0)
    {
    	if(ll(a))
    	{
    		a=a.substr(0,la/2);
    		la=la/2;
		}
		else    
		break;
	}
    cout<<la;
}
