#pragma GCC optimize(1)
#pragma GCC optimize(2)
#pragma GCC optimize(3,"Ofast","inline")
#include <bits/stdc++.h>
using namespace std;
struct node {
	int num, mz;
} a[999999];
int n, m;
int ans[999999][5];
bool cmp(node a, node b) {
	return a.mz < b.mz;
}
int main() {
	cin >> n >> m;
	for (int i = 1; i <= m; ++i) {
		cin >> a[i].mz;
		a[i].num = i;
	}
	sort(a + 1, a + m + 1, cmp);
	for (int i = 1; i <= m; i++)
		for (int j = i + 1; j <= m; j++)
			for (int k = j + 1; k <= m; k++)
				for (int t = k + 1; t <= m; t++)
					if (a[i].mz < a[j].mz && a[j].mz < a[k].mz && a[k].mz < a[t].mz)
						if (a[j].mz - a[i].mz == 2 * (a[t].mz - a[k].mz))
							if (a[j].mz - a[i].mz < (a[k].mz - a[j].mz) / 3.0) {
								ans[a[i].num][1]++;
								ans[a[j].num][2]++;
								ans[a[k].num][3]++;
								ans[a[t].num][4]++;
							}
	for (int i = 1; i <= m; ++i) {
		for (int j = 1; j <= 4; ++j)
			cout << ans[i][j] << " ";
		cout << endl;
	}
	return 0;
}
