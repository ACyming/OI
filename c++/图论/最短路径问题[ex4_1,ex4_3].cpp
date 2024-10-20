#include <bits/stdc++.h>
using namespace std;
double n, m;
double g[120][120], dis[10000];
struct Node {
	double x, y;
} mp[120];
int main() {

	cin >> n;
	int x,y;
	for (int i = 1; i <= n; i++) {

		cin >> x >> y;
		mp[i] = {x, y};
	}
	cin >> m;

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			g[i][j] = g[j][i] = 999999999999;

	for (int i = 1; i <= m; i++) {
		int x, y;
		cin >> x >> y;
		int a=abs(mp[x].y-mp[y].y);
		int b=abs(mp[x].x-mp[y].x);
		a*=a,b*=b;
		g[x][y]=sqrt(a+b);


	}

//	for (int i = 1; i <= m; i++) {
//		for (int j = 1; j <= m; j++) printf("%.2lf ", g[i][j]);
//		cout << endl;
//	}
//
	for (int k = 1; k <= n; k++) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1 ; j <= n; j++) {
				if(g[i][k]+g[k][j]<g[i][j])
					g[i][j]=g[i][k]+g[k][j];
			}
		}
	}
	int s, e;
	cin >> s >> e;
	printf("%.2lf ", g[s][e]);
	return 0;
}
