#include <bits/stdc++.h>
#include <windows.h>
#define KD(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1 : 0)
using namespace std;
int xx, yy;
int cnt;
int x, y;
char mp[60][60];
void SETCO(int ForgC, int BackC)
{
    WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), wColor);
}
void qingping(long long x, long long y)
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos;
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(handle, pos);
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
    
}
void pr()
{
    cout << setw(8);
    for (int i = 1; i <= 19; i++)
        cout << i << setw(4);
    cout << endl;
    for (int i = 1; i <= 19; i++) {
        cout << i << setw(4);
        for (int j = 1; j <= 19; j++) {
            if (i == xx && j == yy) {
                SETCO(7, 6);
                cout << mp[i][j];
                SETCO(7, 0);
                cout << setw(4);
            } else {
                if (mp[i][j] == 'o')
                    cout << mp[i][j] << setw(4);
                else {
                    SETCO(4, 0);
                    cout << mp[i][j] << setw(4);
                    SETCO(7, 0);
                }
            }
        }
        cout << endl;
    }
}
void tc()
{
    xx = 1, yy = 1;
    while (!KD(' ')) {
        if (KD('W'))
            if (xx - 1 >= 1)
                xx--, qingping(0, 0), pr();
        if (KD('S'))
            if (xx + 1 <= 19)
                xx++, qingping(0, 0), pr();
        if (KD('D'))
            if (yy + 1 <= 19)
                yy++, qingping(0, 0), pr();
        if (KD('A'))
            if (yy - 1 >= 1)
                yy--, qingping(0, 0), pr();
        Sleep(100);
    }
    x = xx;
    y = yy;
}
int main()
{
    memset(mp, 'o', sizeof(mp));
    while (cnt <= 19 * 19) {
        system("CLS");
        mapp();
        if (pd() != 0)
            pd() == 1 ? cout << "a_win!" : cout << "b_win!", exit(0);
        if (cnt % 2 == 0)
            cout << "A:";
        else
            cout << "B:";
        // Sleep(3000);
        tc();
        if (x > 0 && x < 20 && y > 0 && y < 20 && mp[x][y] == 'o') {
            if (cnt % 2 == 0)
                mp[x][y] = 'a';
            else
                mp[x][y] = 'b';
            cnt++;
        } else {
            cout << "error";
        }
        Sleep(800);
    }

    return 0;
}
