#include<bits/stdc++.h>
using namespace std;
int n,m;
int main()
{
	scanf("%d",&n);
	for(int i=1;;i++)
	{
		if((i*i+i-2*n)%6==0)
		{
			m=(i*i+i-2*n)/6;
			if(m<=0)
			{
				continue;
			}
			else
			{
				printf("%d %d",m,i);
				break;
			}
		}
	}
	return 0;
}

