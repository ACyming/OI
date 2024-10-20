//#include<bits/stdc++.h>
//using namespace std;
//int n,m,num;
//void pd(int n)
//{
//	int x=0;
//	int s=n;
//	while(s>0)
//	{
//		x=x*10+s%10;
//		s=s/10;
//	}
//	if(x==n)
//	{
//		cout<<n;
//		return ;
//	}
//	return ;
//}
//int main()
//{
//	cin>>n>>m;
//	for(int i=1;i<=n-m;i++)
//	{
//		if(i%4==0)
//		for(int j=1;j<=12;j++)
//		{
//			if(j==2)
//			{
//				for(int k=1;k<=29;k++)
//				{
//					if(k<10)
//					num=i*10000+j*100+k;
//					else
//					num=i*10000+j*100+k*10;
//					pd(num);
//				}
//			}
//			if(j==1||j==3||j==5||j==7||j==8||j==11)
//			{
//				for(int k=1;k<=31;k++)
//				{
//					if(k<10)
//					num=i*10000+j*100+k;
//					else
//					num=i*10000+j*100+k*10;
//					pd(num);
//				}
//			}
//			else
//			{
//				for(int k=1;k<=30;k++)
//				{
//					if(k<10)
//					num=i*10000+j*100+k;
//					else
//					num=i*10000+j*100+k*10;
//					pd(num);
//				}
//			}
//		}
//		else
//		for(int j=1;j<=12;j++)
//		{
//			if(j==2)
//			{
//				for(int k=1;k<=28;k++)
//				{
//					if(k<10)
//					num=i*10000+j*100+k;
//					else
//					num=i*10000+j*100+k*10;
//					pd(num);
//				}
//			}
//			if(j==1||j==3||j==5||j==7||j==8||j==11)
//			{
//				for(int k=1;k<=31;k++)
//				{
//					if(k<10)
//					num=i*10000+j*100+k;
//					else
//					num=i*10000+j*100+k*10;
//					pd(num);
//				}
//			}
//			else
//			{
//				for(int k=1;k<=30;k++)
//				{
//					if(k<10)
//					num=i*10000+j*100+k;
//					else
//					num=i*10000+j*100+k*10;
//					pd(num);
//				}
//			}
//		}
//	}
//	return 0;
//}
#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
	int m[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	int n1,n2,ans=0;
	scanf("%d%d",&n1,&n2);
	for(int i=1;i<=12;i++){//月 
		for(int j=1;j<=m[i];j++){//日 
			// 求出当前月份日期对应的年份(如果要成回文)
			// 如 10 月 31 日对应的年份应该是 1301 
			int y=j%10*1000+j/10*100+i%10*10+i/10;
			// 将这个回文日期算出来 
			// 如 10 月 31 日对应的日期应该是 13011031 
			int d=y*10000+i*100+j;
		//	printf("%d\n",d);
			if(d>=n1&&d<=n2){
				ans++;
			}
		}
	}
	printf("%d\n",ans);
	return 0;

