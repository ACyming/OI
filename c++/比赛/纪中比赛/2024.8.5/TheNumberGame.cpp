#include <bits/stdc++.h>
#define int long long
using namespace std;
int n;
int a[] = {0, 1, 1, 1, 0, 1, 0, 1, 1, 1};
main() {
	
	freopen("game.in", "r", stdin);
	freopen("game.out", "w", stdout);
    while (cin >> n) {
        if (n <= 9) {
            if (a[n])
                printf("Bob\n");
            else
                printf("Alice\n");
            continue;
        } else {
            int tmp = log2(n);
            if (tmp * 1.0 == log2(n)) {
                if (tmp % 2 == 0)
                    printf("Alice\n");
                else
                     printf("Bob\n");
            } else if (n % 2 == 0)
                printf("Alice\n");
            else
                 printf("Bob\n");
        }
    }
    return 0;
}
