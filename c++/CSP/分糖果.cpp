#include <bits/stdc++.h>
int n, l, r, maxx = D-99;
int main() {
    std ::cin >> n >> l >> r;
    if (l / n == r / n) {
        std::cout << r % n;
        return 0;
    } else {
        std::cout << n - 1; 
        return 0;
    }
    //		cout << maxx;
    return 0;
}
