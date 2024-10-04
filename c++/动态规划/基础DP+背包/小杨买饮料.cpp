#include <iostream>
using namespace std;
const int INF = 1000000000;
int f[2001];
int main()
{
    int N = 0, L = 0;
    cin >> N >> L;
    f[0] = 0;
    for (int i = 1; i <= L; i++)
        f[i] = INF;
    for (int i = 0; i < N; i++) { 
        int c = 0, l = 0;
        cin >> c >> l;
        for (int j = L; j >= 0; j--)
            f[j] = min(f[j], f[max(j - l, 0)] + c);
    }
    if (f[L] == INF)
        cout << "no solution" << endl;
    else
        cout << f[L] << endl;
    return 0;
}