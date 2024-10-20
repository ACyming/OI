#include <cstdio>
using namespace std;
int n,i,a,b,c,x=0,y=0,z=0,s=0;
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;++i)
	{
		scanf("%d%d%d",&a,&b,&c);
		x+=a;y+=b;z+=c;
	}
	s=x+y+z;
	printf("%d %d %d %d\n",x,y,z,s);
	return 0;
 } 
