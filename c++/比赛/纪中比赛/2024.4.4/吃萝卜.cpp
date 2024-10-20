#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[100005];
int main()
{
	// freopen("eat.in", "r", stdin);
	// freopen("eat.out", "w", stdout);
	cin >> n >> m;
	int l = 0, r = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		l = max(l, a[i]);
		r += a[i];
	}
	while (l <= r)
	{
		int mid = (l + r) / 2;
		int num = 0, sum = 0;
		for (int i = 1; i <= n; i++)
		{
			sum += a[i];
			if (sum > mid)
			{
				num++; // 再切一段
				sum = a[i];
			}
		}
		num++;
		if (num > m)
			l = mid + 1;
		else
			r = mid - 1;
	}
	cout << l;
	return 0;
}