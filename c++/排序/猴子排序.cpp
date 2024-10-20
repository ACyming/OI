#include <bits/stdc++.h>
using namespace std;
int source[10], flag[10], res[10];
int sort()
{
    memset(flag, 1, sizeof(flag));
    int num = 10, count = 0;
    while (num) {
        int t = rand() % 10;
        if (flag[t]) {
            res[count++] = source[t];
            num--;
        }
    }
    for (int i = 0; i < 9; i++) {
        if (res[i] > res[i + 1]) {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int count = 0;
    for (int i = 0; i < 10; i++) {
        cin >> source[i];
    }
    srand(unsigned(time(NULL)));
    while (sort() != 1) {
        count++;
    }
    for (int i = 0; i < 9; i++) {
        cout << res[i] << " ";
    }

    cout << count << endl;
    return 0;
}
