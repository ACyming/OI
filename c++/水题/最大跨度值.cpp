#include <cstdio>
using namespace std;
int main()
{
	int n,i,x,max=-1000000,min=1000000;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		if(x>max)max=x;
		if(x<min)min=x;
		printf("%d\n",max-min);
	}
	return 0;
}
