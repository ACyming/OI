#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, m;
int ans = INT_MAX;
int a[1000001], b[1000001];
int x, y;
main() {
	freopen("toy.in", "r", stdin);
	freopen("toy.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i], x += a[i];//����
	for (int i = 1; i <= n; i++) {
		cin >> b[i], y += b[i];//����
		ans = min(ans, a[i] / b[i]);//���㲻���������ʱ����������װ�����
	}
	for (int i = 1; i <= n; i++) {
		a[i] -= ans * b[i];//a[]��ȥ�ù���
		x -= ans * b[i];//a[]�ܺ�Ҳ��ȥ�ù���
	}
	while (m > 0) {//����������������
		for (int i = 1; i <= n; i++) {
			if (a[i] >= b[i]) {//��a[i]��������һ��b[i]
				a[i] -= b[i];//ʹ����
				x -= a[i];
			} else if (b[i] - a[i] <= m) {//��a[i]ʹ���������ʱ��������һ��b[i]
				m -= (b[i] - a[i]);//ʹ����
				x -= a[i];
				a[i] = 0;
			} else {
				cout << ans;//���ǰ����ʽ�Ӷ������������
				return 0;
			}
		}
		ans++;//����++
		if (x == 0) {//���x�����ˣ�
			cout << ans + m / y;//����ҵ�ǰ����õ���������������������
			return 0;
		}
	}
	cout << ans;//���
	return 0;
}
