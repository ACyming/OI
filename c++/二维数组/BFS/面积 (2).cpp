#include<iostream>
#include<cstdio>
using namespace std;
int map[15][15],ans;
int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
void dfs(int x,int y) {
	int xx,yy;
	for(int i=0; i<4; i++) {
		xx=x+dx[i];
		yy=y+dy[i];
		if((xx>=0 && xx<=13 && yy>=0 && yy<=13) && map[xx][yy]==0) {
			map[xx][yy]=1;
			dfs(xx,yy);
		}
	}
}
int main() {
	for(int i=1; i<=10; i++) {
		for(int j=1; j<=10; j++)cin>>map[i][j];
	}
	dfs(0,0);
	for(int i=1; i<=10; i++) {
		for(int j=1; j<=10; j++) {
			if(map[i][j]==0)ans++;
		}
	}
	cout<<ans;
	return 0;
}
//#include <stdio.h>
//int a[100][100];
//int main() {
//	int i, j, k = 0;
//	for (i = 1; i <= 10; i++)
//		for (j = 1; j <= 10; j++)
//			scanf("%d", &a[i][j]);
//	for (i = 1; i <= 10; i++) {
//		j = 1;
//		while (a[i][j] != 1 && j <= 10) {
//			a[i][j] = 2;
//			j++;
//		}
//		j = 10;
//		while (a[i][j] != 1 && j >= 1) {
//			a[i][j] = 2;
//			j--;
//		}
//	}
//	for (i = 1; i <= 10; i++)
//		for (j = 1; j <= 10; j++)
//			if (a[i][j] == 0 && (a[i][j + 1] == 2 || a[i][j - 1] == 2 || a[i + 1][j] == 2 || a[i - 1][j] == 2))
//				a[i][j] = 2;
//	for (i = 1; i <= 10; i++)
//		for (j = 1; j <= 10; j++)
//			if (a[i][j] == 0)
//				k++;
//	printf("%d", k);
//	return 0;
//}
//#include<bits/stdc++.h>
//int a[100][100];
//int num,cnt;
//using namespace std;
//int main()
//{
//	int num=0,cnt=0;
//    for(int i=1;i<=10;i++)
//      for(int j=1;j<=10;j++)
//         scanf("%d",&a[i][j]);
//	for(int i=1;i<=10;i++){
//		for(int j=1;j<=10;j++){
//			if(a[i][j]==1)
//			{
//				cnt++;
//				if(a[i][j+1]==1)
//				{
//					for(int f=j;f>=1;f--)
//					{
//						a[i][f]=-1;
//					}
//				}
//				else
//				{
//					for(int f=j-cnt;f<=10;f++)
//					{
//						a[i][f]=-1;
//					}
//				}
//
//			}
//			num++;
//			if(num==10&&cnt==0)
//			{
//				for(int f=1;f<=10;f++)
//				{
//					a[i][f]=-1;
//
//				}
//			}
//		}
//	}
//	int ans=0;
//    for(int i=1;i<=10;i++)
//	{
//		for(int j=1;j<=10;j++)
//		{
//			if(a[i][j]==0)
//			{
//				ans++;
//			}
//		}
//	}
//	cout<<ans+5;
//    return 0;
//}
