#include <bits/stdc++.h>
using namespace std;
long long n;
bool check(long long num)
{
    long long x = 0, nn = num;
    while (nn) {
        x = x * 10 + nn % 10;
        nn /= 10;
    }
    return x == num;
}
int main()
{
    cin >> n;
    for (long long i = 1000001; i >= 1; i--) {
        long long num = i * i * i;
        if (num <= n && check(num)) {
            cout << num;
            break;
        }
    }
    return 0;
}