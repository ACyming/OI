#include <bits/stdc++.h>
using namespace std;
int n, m, len, ans;
string s;
int x[510], y[510];
char mp[600][600];
int main() {
	cin >> n >> m >> len;
	cin >> s;
	for (int i = 0; i < len; i++) {
		if (s[i] == 'L') y[i] = -1;
		if (s[i] == 'R') y[i] = 1;
		if (s[i] == 'U') x[i] = -1;
		if (s[i] == 'D') x[i] = 1;
	}
//	for (int i = 0; i < len; i++) {
//		cout<<x[i]<<" "<<y[i];
//		cout<<endl;
//	}
//	return 0;
	//左上左下右
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			cin >> mp[i][j];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (mp[i][j] == '.') {
				int xx = i, yy = j,blog=1;
				for(int k=0; k<len; k++) {
					xx+= x[k];
					yy+= y[k];
//					cout<<xx<<" "<<yy<<" "<<dx<<" "<<dy<<" "<<k<<endl;
					if(mp[xx][yy] != '.') {
						blog=0;
						break;
					}
				}
				if(blog==1) {
					ans++;
//					cout<<i<<" "<<j<<"dsakjlh";
				}
//				cout<<endl;
			}
//			cout << endl;
		}
	}
	cout << ans;
	return 0;
}
