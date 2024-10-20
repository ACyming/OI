#include <bits/stdc++.h>
using namespace std;
int num1, num2;
int n, A[5], B[5];
bool pd() {
	int numa, numb, numc, numd;
	for (int a = 1; a <= 10; a++) {
		for (int b = 1; b <= 10; b++) {
			for (int c = 1; c <= 10; c++) {
				for (int d = 1; d <= 10; d++) {
					for (int i = 1; i <= n; i++) {
						if (a > A[i]) {
							numa++;
						}
						if (b > A[i]) {
							numa++;
						}
						if (c > A[i]) {
							numa++;
						}
						if (d > A[i]) {
							numa++;
						}
					}
					for (int i = 1; i <= n; i++) {
						if (a < A[i]) {
							numb++;
						}
						if (b < A[i]) {
							numb++;
						}
						if (c < A[i]) {
							numb++;
						}
						if (d < A[i]) {
							numb++;
						}
					}
					for (int i = 1; i <= n; i++) {
						if (a < B[i]) {
							numc++;
						}
						if (b < B[i]) {
							numc++;
						}
						if (c < B[i]) {
							numc++;
						}
						if (d < B[i]) {
							numc++;
						}
					}
					for (int i = 1; i <= n; i++) {
						if (a > B[i]) {
							numd++;
						}
						if (b > B[i]) {
							numd++;
						}
						if (c > B[i]) {
							numd++;
						}
						if (d > B[i]) {
							numd++;
						}
					}
					if ((numa > num1 && numc < num2) || (numb < num1 && numd > num2)) {
						return 1;
					}
				}
			}
		}
	}
	return 0;
}
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		num1 = 0, num2 = 0;
		for (int j = 1; j <= 4; j++) {
			cin >> A[j];
		}
		for (int j = 1; j <= 4; j++) {
			cin >> B[j];
		}
		for (int j = 1; j <= 4; j++) {
			for (int k = 1; k <= 4; k++) {
				if (A[j] > B[k]) {
					num1++;
				}
			}
		}
		for (int j = 1; j <= 4; j++) {
			for (int k = 1; k <= 4; k++) {
				if (B[j] > A[k]) {
					num2++;
				}
			}
		}
		if (pd()) {
			cout<<"yes";
		}else{
			cout<<"no";
		}
	}

	return 0;
}

