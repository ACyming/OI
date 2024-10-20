#include <bits/stdc++.h>
#include <windows.h>
#define kd(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1 : 0)
using namespace std;

int mp[5][5];
void pr() {
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 4; j++)
            cout << mp[i][j] << " ";
        cout << endl;
    }
}
int main() {
    pr();
    srand((int)time(NULL));
    while (1) {
        int x = rand() % 4 + 1;
        int y = rand() % 4 + 1;
        int z = rand();
        mp[x][y] = z % 2 ? 4 : 2;
        pr();
        if (kd('W')) {
        }
    }
    return 0;
}