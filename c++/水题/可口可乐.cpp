#include<cstdio>
using namespace std;
int main()
{
 int x,n,t;//x==һ���Ŀ��֣�n==��ƿ�� 
 scanf("%d",&x);
 n=x;
 while(n>=3)
 {
	t=n/3;
	x+=t;
	n=n%3+t;
  } 
  printf("%d",x);
 return 0; 
}
