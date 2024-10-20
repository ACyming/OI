#include <bits/stdc++.h>
#include <windows.h>
#define keydown(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? n : 0)
using namespace std;
int cnt;
char mp[20][20];
void SETCO(int ForgC, int BackC)
{
    WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), wColor);
}

void mapp()
{
    cout << setw(8);
    for (int i = 1; i <= 19; i++)
        cout << i << setw(4);
    cout << endl;
    for (int i = 1; i <= 19; i++) {
        cout << i << setw(4);
        for (int j = 1; j <= 19; j++) {
            if (mp[i][j] == 'o')
                cout << mp[i][j] << setw(4);
            else {
                SETCO(4, 0);
                cout << mp[i][j] << setw(4);
                SETCO(7, 0);
            }
        }
        cout << endl;
    }
}
int pd()
{
    int a = 0, b = 0;
    for (int i = 1; i <= 16; i++) {

        for (int j = 1; j <= 16; j++) {
            if (mp[i][j] == 'a')
                a++;
            if (mp[i][j] == 'b')
                b++;
        }
    }
    if (a == 5)
        return 1;
    if (b == 5)
        return 2;
    a = b = 0;
    for (int i = 1; i <= 16; i++) {
        for (int j = 1; j <= 16; j++) {
            if (mp[j][i] == 'a')
                a++;
            if (mp[j][i] == 'b')
                b++;
        }
    }
    if (a == 5 && b == 0)
        return 1;
    if (b == 5 && a == 0)
        return 2;
    a = b = 0;

    return 0;
}
int main()
{
    memset(mp, 'o', sizeof(mp));
    while (cnt <= 19 * 19) {
        system("CLS");
        mapp();
        if (pd() != 0)
            pd() == 1 ? cout << "a_win!" : cout << "b_win!", exit(0);
        int x, y;
        if (cnt % 2 == 0)
            cout << "A:";
        else
            cout << "B:";
        cin >> x >> y;
        if (x > 0 && x < 20 && y > 0 && y < 20 && mp[x][y] == 'o') {
            if (cnt % 2 == 0)
                mp[x][y] = 'a';
            else
                mp[x][y] = 'b';
            cnt++;
        } else {
            cout << "error";
            Sleep(1500);
        }
    }

    return 0;
}
