#include <bits/stdc++.h>
#define MAX_ITERS 1000000
using namespace std;
double Rand(double L, double R)
{
    return L + (R - L) * rand() * 1.0 / RAND_MAX;
}
double GetPi()
{
    srand(time(NULL));
    int cnt = 0;
    for (int i = 0; i < MAX_ITERS; i++) {
        double x = Rand(-1, 1);
        double y = Rand(-1, 1);
        if (x * x + y * y <= 1)
            cnt++;
    }
    return cnt * 4.0 / MAX_ITERS;
}
int main()
{
    for (int i = 0;; i++)
        cout << GetPi() << endl;
    return 0;
}
