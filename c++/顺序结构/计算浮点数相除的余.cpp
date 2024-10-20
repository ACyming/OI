#include <bits/stdc++.h>
using namespace std;
double a, b;

int main()
{
    cin >> a >> b;
    int k = int(a / b);
    printf("%.4lf", a - k * b);
    return 0;
}