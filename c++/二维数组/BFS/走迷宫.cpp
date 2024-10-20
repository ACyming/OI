#include<cstdio>
#include<iostream>
using namespace std;
int r,c1,ans=1;
char a[100][100];
int b[100][100],c[10000][2],j[8]={1,0,0,1,-1,0,0,-1};
bool s[100][100];
void fun()
{
	int f=0,son=1,mi,ni,mc=1,nc=1,d;
	c[1][0]=1;
	c[1][1]=1;
	b[1][1]=0;
	s[1][1]=1;
	while(f<son);
	{
		f++;
		mc=c[f][0];
		nc=c[f][1];
		for(int i=0;i<=6;i+=2)
		{
			mi=mc+j[i];
			ni=nc+j[i+1];
			if(mi<=r && ni <=c1 &&mi >= 1&& ni>=1 && a[mi][ni]=='.' && s[mi][ni]==0)
			{
				son++;
				b[mi][ni]=f;
				c[son][0]=mi;
				c[son][1]=ni;
				s[mi][ni]=1;
				
			}
			if(mi==r && ni==c1)
			{
				d=b[mi][ni];
				while(d)
				{
					mi=c[d][0];
					ni=c[d][1];
					d=b[mi][ni];
					ans++;
				}
				printf("%d",ans);
				return;
			}
		}
	}
}
int main()
{
	scanf("%d%d",&r,&c1);
	for(int i=1;i<=r;i++)
	{
		for(int h=1;h<=c1;h++)
		{
			cin>>a[i][h];
		}
	}
	fun();
	return 0;
}
