#include <bits/stdc++.h>

#include <cstdio>

#include <conio.h>

#include <cstdlib>

#include <cstring>

#include <fstream>

#include <iostream>

#include <windows.h>

#include <algorithm>

#include<sys/time.h>

#define REP(i,a,b) for (int i=(a);i<=(b);i++)

#define PER(i,a,b) for (int i=(a);i>=(b);i--)

#define max(x,y) ((x)<(y)?(y):(x))

#define min(y,x) ((x)<(y)?(x):(y))

#define MEM(a,b) memset(a,(b),sizeof(a))

#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0)//判断这个键是否按下

#define KEY_UP(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 0 : 1)//判断这个键是否弹起

#define KEY_EVERY(lpkeyState) GetKeyboardState(lpKeyState)//获得所有的256个键（键盘按键、鼠标按键等等）的状态，lpKeyState是指向一个256bit的数组，存放所有键的状态。

#define KEY_NOW(nVirtKey) GetKeyState(nVirtKey)//用于判断nVirtKey的状态。用返回值的最高位表示，最高位为1表示当前键处于down的状态；最高位为0当前键处于up状态。此函数从消息队列中读取消息进行处理。

#define setcolor(x) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),x)//设置颜色

#define getkey(x) GetAsyncKeyState(x)

#define GetWindow() GetForegroundWindow();//得到窗口信息

#define Nor if(B[b].x<5) B[b].x=5;

#define Out1 Bx1-Bvx1<=6||Bx1-Bvx1>=28||By1-Bvy1<=7||By1-Bvy1>=27

#define Out2 Bx2-Bvx2<=6||Bx2-Bvx2>=28||By2-Bvy2<=7||By2-Bvy2>=27

#define Chang1 {Bwhat1=0;Bvx1=Bvy1=0;memset(Bgo1,0,sizeof(Bgo1));}

#define Chang2 {Bwhat2=0;Bvx2=Bvy2=0;memset(Bgo2,0,sizeof(Bgo2));}

#define Chang3 {Bwhat3=0;Bvx3=Bvy3=0;memset(Bgo3,0,sizeof(Bgo3));}

#define MAXIMUS 15 //定义棋盘大小

int cs[8], dh[8], b[15], i[10], dg[8], bf[4], hh[10], j[9], ys1[20], ys2[20], zbcc[20], zbsx[20], yszb[20], drcf[8], cfzb[20], lb[20];

int daojvsx[11], daojvcc[11], cfdaojv[11], daojvlb[2];

using namespace std;

int brand();

void GOTO(int x, int y);

int brand() {
	return (rand() << 16) | (rand() << 1) | (rand() & 1);
}

void bsrand() {
	srand(GetTickCount());
}

void cls() {
	system("cls");
}

void retr() { //退出程序

	system("cls");

	return;

}

void Window_Hide(HWND hWnd) {
	ShowWindow(hWnd, 0);   //隐藏窗口
}

void Window_Show(HWND hWnd) {
	ShowWindow(hWnd, 1);   //显示窗口
}

int getmouse_y() { //获取鼠标在屏幕中x的位置

	POINT pt;

	GetCursorPos(&pt);

	return pt.x;

}

int getmouse_x() { //获取鼠标在屏幕中y的位置

	POINT pt;

	GetCursorPos(&pt);

	return pt.y;

}

void setmouse(int y, int x) {
	SetCursorPos(x, y);   //设置鼠标在屏幕中的位置
}

void click_left() { //鼠标左键点击

	mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);

	Sleep(5);//要留给某些应用的反应时间

	mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);

}

void click_right() { //鼠标右键点击

	mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);

	Sleep(5);

	mouse_event(MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);

}

void GOTO(int x, int y) { //将光标移动到屏幕中的位置

	CONSOLE_SCREEN_BUFFER_INFO csbiInfo;

	HANDLE hConsoleOut;

	hConsoleOut = GetStdHandle(STD_OUTPUT_HANDLE);

	GetConsoleScreenBufferInfo(hConsoleOut, &csbiInfo);

	csbiInfo.dwCursorPosition.Y = x;

	csbiInfo.dwCursorPosition.X = y;

	SetConsoleCursorPosition(hConsoleOut, csbiInfo.dwCursorPosition);

}

const int flg[4][2] = {{1, 0}, {0, 2}, {0, -2}, {-1, 0}};

int n = 28, m = 76, tim;

struct xcw {
	int x, y;
} ty[5][1000005], foodd[2];

int tot[5], f[5], score, food, ground = 0, ms, ans_len = 1e9;

bool vis[1005][1005];

void ret();

void result();

bool check();

void fnd();

void rand_food();

void draw();

int choose();

void stop();

int mods();

int ads();

int get_food();

int other();

void machine();

int change();

int main();

void Ending() {

	printf("E键退出，R键重来\n");

	char ch = getch();

	while (ch != 'E' && ch != 'e' && ch != 'R' && ch != 'r') ch = getch();

	if (ch == 'E' || ch == 'e') return;

	else {
		main();
		exit(0);
	}

}

void result(int t) {

	setcolor(7 + ground);
	cls();

	if (ms == 2) {

		if (t == 0) printf("Win!!!");
		else

			printf("Lose...\n");

		printf("机器人:%d\n你:%d\n", tot[2], tot[0]);

	} else

		if (ms == 3) if (t == 1) printf("White Lose\n");
			else printf("White win\n");
		else

			if (ms == 5) if (t == 1) printf("Player 2 win\n");
				else printf("Player 1 win\n");

	Ending();

}

bool check(int x, int y) {

	if (x < 1 || x > n || y < 2 || y > m) return 0;

	bool t = 1;

	if (ms != 3)

		for (int i = 1; i <= tot[0]; i++)

			if (x == ty[0][i].x && y == ty[0][i].y) {
				t = 0;
				break;
			}

	if (ms == 1 || ms == 4 || ms == 5)

		for (int i = 1; i <= tot[1]; i++)

			if (x == ty[1][i].x && y == ty[1][i].y) {
				t = 0;
				break;
			}

	if (ms == 2 || ms == 3)

		for (int i = 1; i <= tot[2]; i++)

			if (x == ty[2][i].x && y == ty[2][i].y) {
				t = 0;
				break;
			}

	if (ms == 3)

		for (int i = 1; i <= tot[3]; i++)

			if (x == ty[3][i].x && y == ty[3][i].y) {
				t = 0;
				break;
			}

	return t;

}

void fnd(int t, int x, int y) {

	if (check(x, y)) return;

	setcolor(7 + ground);
	cls();

	if (ms == 3) if (t == 3) printf("White lose\n");
		else printf("White win\n");
	else

		if (ms == 4 || ms == 5) if (t == 1) printf("Player 1 win\n");
			else printf("Player 2 win\n");

		else {

			if (t == 2) printf("Win!!!\n");
			else printf("Lose...\n");

			printf("分数:%d\n", score);
			score = 0;

		}

	Ending();

}

void rand_food() {

	if (!vis[foodd[0].x][foodd[0].y]) {

		setcolor(12 + ground);

		int x = brand() % (n + 1), y = (brand() % m / 2) * 2;

		while (!check(x, y)) x = brand() % (n + 1), y = (brand() % m / 2) * 2;

		GOTO(x, y);
		printf("▇");

		if (!vis[x][y]) food++;
		vis[x][y] = 1;
		foodd[0] = (xcw) {
			x, y
		};

	}

	if (!vis[foodd[1].x][foodd[1].y]) {

		setcolor(12 + ground);

		int x = brand() % (n + 1), y = (brand() % m / 2) * 2;

		while (!check(x, y)) x = brand() % (n + 1), y = (brand() % m / 2) * 2;

		GOTO(x, y);
		printf("▇");

		food++;
		vis[x][y] = 1;
		foodd[1] = (xcw) {
			x, y
		};

	}

}

void draw() {

	setcolor(14 + ground);

	for (int i = 0; i <= n + 1; i++) GOTO(i, m + 2), printf("▇"), GOTO(i, 0), printf("▇");

	for (int i = 1; i <= m / 2 + 1; i++) GOTO(n + 1, i * 2), printf("▇"), GOTO(0, i * 2), printf("▇");

}

int choose() {

	printf("0.退出\n");

	printf("1.单人模式\n");

	printf("2.双人模式\n");

	printf("3.人机对抗(谁先吃20个)\n");

	printf("4.机机对抗(谁先吃20个)\n");

	printf("5.对抗模式\n");

	printf("6.对抗模式(谁先吃20个)\n");

	printf("快捷键:\n");

	printf("P:暂停\n");

	printf("E:退出\n");

	char ch = getch();

	while (ch < '0' || ch > '6') ch = getch();

	if (ch == '0') return 48;
	else

		if (ch == '1') ms = 0;
		else

			if (ch == '2') ms = 1;
			else

				if (ch == '3') ms = 2;
				else

					if (ch == '4') ms = 3;
					else

						if (ch == '5') ms = 4;
						else

							if (ch == '6') ms = 5;

}

void stop() {

	char ch = getch();

	while (ch != 'P' && ch != 'p') ch = getch();

}

int mods() {

	setcolor(10 + ground);

	if (ms != 3) {

		ty[0][1] = (xcw) {
			1, 6
		};
		ty[0][2] = (xcw) {
			1, 4
		};
		ty[0][tot[0] = 3] = (xcw) {
			1, 2
		};
		f[0] = 1;

		for (int i = 1; i <= tot[0]; i++) GOTO(ty[0][i].x, ty[0][i].y), printf("▇");

	}

	if (ms == 1 || ms == 4 || ms == 5) {

		setcolor(7 + ground);

		ty[1][1] = (xcw) {
			n, m - 6
		};
		ty[1][2] = (xcw) {
			n, m - 4
		};
		ty[1][tot[1] = 3] = (xcw) {
			n, m - 2
		};
		f[1] = 2;

		for (int i = 1; i <= tot[1]; i++) GOTO(ty[1][i].x, ty[1][i].y), printf("▇");

	}

	if (ms == 2 || ms == 3) {

		setcolor(15 + ground);

		ty[2][1] = (xcw) {
			n, m - 6
		};
		ty[2][2] = (xcw) {
			n, m - 4
		};
		ty[2][tot[2] = 3] = (xcw) {
			n, m - 2
		};
		f[2] = 2;

		for (int i = 1; i <= tot[2]; i++) GOTO(ty[2][i].x, ty[2][i].y), printf("▇");

	}

	if (ms == 3) {

		setcolor(13 + ground);

		ty[3][1] = (xcw) {
			1, 6
		};
		ty[3][2] = (xcw) {
			1, 4
		};
		ty[3][tot[3] = 3] = (xcw) {
			1, 2
		};
		f[3] = 1;

		for (int i = 1; i <= tot[3]; i++) GOTO(ty[3][i].x, ty[3][i].y), printf("▇");

	}

}

int ads(int x) {
	return x < 0 ? -x : x;
}

int get_food(int x, int y, xcw z) {
	return ads(x - z.x) + ads(y - z.y);
}

int other(int x) {

	if (x == 0) return 3;
	else

		if (x == 1) return 2;
		else

			if (x == 2) return 1;
			else

				return 0;

}

void machine(int t, int x, int y) {

	bool tt = 0;
	int foodid, minn = 1e9, newf = f[t];

	if (get_food(x, y, foodd[0]) <= get_food(x, y, foodd[1]) && vis[foodd[0].x][foodd[0].y] || !vis[foodd[1].x][foodd[1].y]) foodid = 0;
	else foodid = 1;

	for (int i = 0; i < 4; i++)

		if (f[t]^other(i)) {

			if (check(x + flg[i][0], y + flg[i][1])) {

				int now = get_food(x + flg[i][0], y + flg[i][1], foodd[foodid]);

				if (now < minn) newf = i, tt = 1, minn = now;

				if (!tt) newf = i;

			}

		}

	f[t] = newf;

}

int change(int t) {

	if (t == 0) setcolor(10 + ground);
	else

		if (t == 1) setcolor(7 + ground);
		else

			if (t == 2) setcolor(15 + ground);
			else

				if (t == 3) setcolor(13 + ground);

	int x = ty[t][1].x, y = ty[t][1].y;

	if (t == 2 || t == 3) machine(t, x, y);

	x += flg[f[t]][0], y += flg[f[t]][1];

	for (int i = tot[t]; i; i--) ty[t][i + 1] = ty[t][i];

	GOTO(ty[t][tot[t] + 1].x, ty[t][tot[t] + 1].y);

	printf("  ");

	if (vis[x][y]) {

		vis[x][y] = 0, score += (t == 0 || t == 1), food--;

		if (++tot[t] >= 23 && (ms == 3 || ms == 5)) result(t);

		GOTO(ty[t][tot[t]].x, ty[t][tot[t]].y), printf("▇");

	}

	fnd(t, x, y);

	ty[t][1] = (xcw) {
		x, y
	};

	GOTO(ty[t][1].x, ty[t][1].y);

	printf("▇");

}

int tanchi() {

	bsrand();
	score = 0;

	system("title ");

	system("mode con cols=80 lines=31");

	if (choose() == 48)

	{

		system("cls");

		return 0;

	}

	cls();

	printf("设置速度(毫秒/格)(建议100):");

	cin >> tim;

	MEM(vis, 0);
	food = 0;
	MEM(ty, 0);

	cls();
	draw();
	mods();

	while (1) {

		while (!kbhit()) {

			Sleep(tim);

			rand_food();

			if (ms != 3) change(0);

			rand_food();

			if (ms == 1 || ms == 4 || ms == 5) change(1);
			else

				if (ms == 2) change(2);
				else

					if (ms == 3) change(2), change(3);

		}

		char ch = getch();

		bool t = 0;

		if (ch == 'E' || ch == 'e') return 0;
		else

			if (ch == 'P' || ch == 'p') stop();
			else

				if (ms == 0 || ms == 2) {

					if (ch == -32) ch = getch(), t = 1;

					if ((ch == 75 && t || ch == 'A' || ch == 'a') && f[0] ^ 1) f[0] = 2;
					else

						if ((ch == 77 && t || ch == 'D' || ch == 'd') && f[0] ^ 2) f[0] = 1;
						else

							if ((ch == 80 && t || ch == 'S' || ch == 's') && f[0] ^ 3) f[0] = 0;
							else

								if ((ch == 72 && t || ch == 'W' || ch == 'w') && f[0] ^ 0) f[0] = 3;

				} else

					if (ms == 1 || ms == 4 || ms == 5) {

						if ((ch == 'W' || ch == 'w') && f[0] ^ 0) f[0] = 3;
						else

							if ((ch == 'A' || ch == 'a') && f[0] ^ 1) f[0] = 2;
							else

								if ((ch == 'D' || ch == 'd') && f[0] ^ 2) f[0] = 1;
								else

									if ((ch == 'S' || ch == 's') && f[0] ^ 3) f[0] = 0;

						if (ch == -32) ch = getch(), t = 1;

						if (ch == 72 && t && f[1] ^ 0) f[1] = 3;
						else

							if (ch == 75 && t && f[1] ^ 1) f[1] = 2;
							else

								if (ch == 77 && t && f[1] ^ 2) f[1] = 1;
								else

									if (ch == 80 && t && f[1] ^ 3) f[1] = 0;

					}

	}

	system("cls");

	return 0;

}

int mbg() {

	for ( ; 1; )

	{

		int a, b, c, d = 9, e, f, g, h, i, j, k, l, m, n, s = 0;

		cout << "           --------狒狒大战2.15--------" << endl;

		cout << "欢迎来到狒狒大战2.15！\n";

		cout << "请选择狒狒（如不知规则则摁10)" << endl << "=======================================" << endl;

		cout << "1.年轻人\n";

		cout << "2.卢本伟\n";

		cout << "3.迪迦/盖亚\n";

		cout << "4.狒狒\n";

		cout << "5.SB\n";

		cout << "6.马保国（别摁！）\n";

		cout << "7.GAY\n";

		cout << "8.老狒狒\n";

		cout << "9.退出游戏\n";

		cout << "10.关于游戏\n" << "==========================================\n";

gamestart:
		cin >> a;

		if (a == 1) do {

				cout << "发现马保国！" << endl;

				cout << "1.攻击或搞事情！" << endl;

				cout << "2.走过去" << endl;

				cin >> b;

				if (b == 1) {

					m = 3;

					cout << "1.蹭右眼\n";

					cout << "2.不讲武德\n";

					cout << "3.踢隐私部位\n";

					cout << "4.太极神功（盗版）\n";

					cout << "5.耍赖\n";

					cout << "6.迪迦！！！！！\n";

					cout << "7.装逼\n";

					cout << "8.溜\n";

					cin >> e;

					if (e == 1) {

						cout << "你打肿了马老师的右眼" << endl;

						d = d + 1;

						s++;

					}

					if (e == 2) {

						cout << "马老师说你不讲武德，并把你的鼻子蹭了一下\n";

						d = d - 1;

					}

					if (e == 3) {

						cout << "你踢了一下马老师的隐私部位\n";

						d = d + 1;

						s += 5;

					}

					if (e == 4) {

						cout << "你使用了太极神功（盗版）\n";

						d = d + 1;

						s += 3;

					}

					if (e == 5) {

						cout << "马老师摸了摸你的头，笑了笑\n";

						d = d - 2;

						s += 1;

					}

					if (e == 6) {

						cout << "你变成了迪迦\n";

						d = d + 15;

						s += 3;

					}

					if (e == 7) {

						cout << "你在马老师面前装逼\n";

						d = d + 10;

						s += 4;

					}

					if (e == 8) {

						cout << "马老师不让你溜\n";

						d = d - 2;

					}

					if (s >= 11)

					{

						cout << "      win" << endl;

						cout << "      w n" << endl;

						cout << "      w n" << endl;

						cout << "      win" << endl;

						cout << "      win" << endl;

						cout << "      win" << endl;

						cout << "      win" << endl;

						cout << "      win" << endl;

						cout << "      win" << endl;

						cout << " inwinwinwinwi" << endl;

						cout << "winwinwinwinwin" << endl;

						cout << "winwinwinwinwin" << endl;

						cout << "winwinwinwinwin" << endl;

						cout << "winwinwinwinwin" << endl;

						cout << "winwinwinwinwin" << endl;

						cout << " inwinwinwinwi" << endl;

						return 0;

					}

				}

				if (b == 2) {

					cout << "不讲武德!" << endl;

				}

			} while (d != 0);

		if (a == 2) do {

				cout << "发现马保国！" << endl;

				cout << "1.攻击或搞事情！" << endl;

				cout << "2.走过去" << endl;

				cin >> b;

				if (b == 1) {

					m = 3;

					cout << "1.蹭右眼\n";

					cout << "2.不讲武德\n";

					cout << "3.踢隐私部位\n";

					cout << "4.太极神功（盗版）\n";

					cout << "5.耍赖\n";

					cout << "6.卢本伟牛逼\n";

					cout << "7.鄙视光线\n";

					cout << "8.溜\n";

					cin >> e;

					if (e == 1) {

						cout << "你打肿了马老师的右眼" << endl;

						d = d + 1;

						s++;

					}

					if (e == 2) {

						cout << "马老师说你不讲武德，并把你的鼻子蹭了一下\n";

						d = d - 1;

					}

					if (e == 3) {

						cout << "你踢了一下马老师的隐私部位\n";

						d = d + 1;

						s += 7;

					}

					if (e == 4) {

						cout << "你使用了太极神功（盗版）\n";

						d = d + 1;

						s += 3;

					}

					if (e == 5) {

						cout << "马老师摸了摸你的头，笑了笑\n";

						d = d - 2;

						s += 1;

					}

					if (e == 6) {

						cout << "你使用了卢本伟牛逼\n";

						d = d + 3;

						s += 3;

					}

					if (e == 7) {

						cout << "你使用了鄙视光线\n";

						d = d + 3;

						s += 5;

					}

					if (e == 8) {

						cout << "马老师不让你溜\n";

						d = d - 2;

					}

					if (s >= 15)

					{

						cout << "      win" << endl;

						cout << "      w n" << endl;

						cout << "      w n" << endl;

						cout << "      win" << endl;

						cout << "      win" << endl;

						cout << "      win" << endl;

						cout << "      win" << endl;

						cout << "      win" << endl;

						cout << "      win" << endl;

						cout << " inwinwinwinwi" << endl;

						cout << "winwinwinwinwin" << endl;

						cout << "winwinwinwinwin" << endl;

						cout << "winwinwinwinwin" << endl;

						cout << "winwinwinwinwin" << endl;

						cout << "winwinwinwinwin" << endl;

						cout << " inwinwinwinwi" << endl;

						return 0;

					}

				}

				if (b == 2) {

					cout << "不讲武德!" << endl;

				}

			} while (d != 0);

		if (a == 3) do {

				cout << "发现马保国！" << endl;

				cout << "1.攻击或搞事情！" << endl;

				cout << "2.走过去" << endl;

				cin >> b;

				if (b == 1) {

					m = 3;

					cout << "1.切割光轮\n";

					cout << "2.不讲武德\n";

					cout << "3.踢隐私部位\n";

					cout << "4.光线神功（盗版）\n";

					cout << "5.耍赖\n";

					cout << "6.鄙视光线\n";

					cout << "7.溜\n";

					cin >> e;

					if (e == 1) {

						cout << "你使用了切割光轮" << endl;

						d = d + 3;

						s += 5;

					}

					if (e == 2) {

						cout << "马老师说你不讲武德，并把你的鼻子蹭了一下\n";

						d = d - 1;

					}

					if (e == 3) {

						cout << "你踢了一下马老师的隐私部位\n";

						d = d + 1;

						s += 7;

					}

					if (e == 4) {

						cout << "你使用了激光神功（盗版）\n";

						d = d + 1;

						s += 3;

					}

					if (e == 5) {

						cout << "马老师摸了摸你的头，笑了笑\n";

						d = d - 2;

						s += 1;

					}

					if (e == 6) {

						cout << "你使用了鄙视光线\n";

						d = d + 3;

						s += 5;

					}

					if (e == 7) {

						cout << "马老师不让你溜\n";

						d = d - 2;

					}

					if (s >= 15)

					{

						cout << "      win" << endl;

						cout << "      w n" << endl;

						cout << "      w n" << endl;

						cout << "      win" << endl;

						cout << "      win" << endl;

						cout << "      win" << endl;

						cout << "      win" << endl;

						cout << "      win" << endl;

						cout << "      win" << endl;

						cout << " inwinwinwinwi" << endl;

						cout << "winwinwinwinwin" << endl;

						cout << "winwinwinwinwin" << endl;

						cout << "winwinwinwinwin" << endl;

						cout << "winwinwinwinwin" << endl;

						cout << "winwinwinwinwin" << endl;

						cout << " inwinwinwinwi" << endl;

						return 0;

					}

				}

				if (b == 2) {

					cout << "不讲武德!" << endl;

				}

			} while (d != 0);

		if (a == 4) do {

				cout << "发现马保国！" << endl;

				cout << "1.攻击或搞事情！" << endl;

				cout << "2.走过去" << endl;

				cin >> b;

				if (b == 1) {

					m = 3;

					cout << "1.狒狒光轮\n";

					cout << "2.不讲武德\n";

					cout << "3.踢隐私部位\n";

					cout << "4.狒狒神功（盗版）\n";

					cout << "5.耍赖\n";

					cout << "6.狒狒光线\n";

					cout << "7.狒狒拉稀\n";

					cout << "8.溜\n";

					cin >> e;

					if (e == 1) {

						cout << "你使用了狒狒光轮" << endl;

						d = d + 2;

						s += 3;

					}

					if (e == 2) {

						cout << "马老师说你不讲武德，并把你的鼻子蹭了一下\n";

						d = d - 2;

					}

					if (e == 3) {

						cout << "你踢了一下马老师的隐私部位\n";

						d = d + 2;

						s += 8;

					}

					if (e == 4) {

						cout << "你使用了狒狒神功（盗版）\n";

						d = d + 3;

						s += 4;

					}

					if (e == 5) {

						cout << "马老师摸了摸你的头，笑了笑\n";

						d = d - 2;

						s += 1;

					}

					if (e == 6) {

						cout << "你使用了狒狒光线\n";

						d = d + 3;

						s += 5;

					}

					if (e == 7) {

						cout << "你使用了狒狒拉稀\n";

						d = d + 1;

						s += 7;

					}

					if (e == 8) {

						cout << "马老师不让你溜\n";

						d = d - 2;

					}

					if (s >= 18)

					{

						cout << "      win" << endl;

						cout << "      w n" << endl;

						cout << "      w n" << endl;

						cout << "      win" << endl;

						cout << "      win" << endl;

						cout << "      win" << endl;

						cout << "      win" << endl;

						cout << "      win" << endl;

						cout << "      win" << endl;

						cout << " inwinwinwinwi" << endl;

						cout << "winwinwinwinwin" << endl;

						cout << "winwinwinwinwin" << endl;

						cout << "winwinwinwinwin" << endl;

						cout << "winwinwinwinwin" << endl;

						cout << "winwinwinwinwin" << endl;

						cout << " inwinwinwinwi" << endl;

						return 0;

					}

				}

				if (b == 2) {

					cout << "不讲武德!" << endl;

				}

			} while (d != 0);

		if (a == 5) do {

				cout << "发现马保国！" << endl;

				cout << "1.攻击或搞事情！" << endl;

				cout << "2.走过去" << endl;

				cin >> b;

				if (b == 1) {

					m = 3;

					cout << "1.SB激光\n";

					cout << "2.不讲武德\n";

					cout << "3.踢隐私部位\n";

					cout << "4.SB神功（盗版）\n";

					cout << "5.耍赖\n";

					cout << "6.变傻光线\n";

					cout << "7.叫爸爸！\n";

					cout << "8.溜\n";

					cin >> e;

					if (e == 1) {

						cout << "你使用了SB激光" << endl;

						d = d + 4;

						s += 2;

					}

					if (e == 2) {

						cout << "马老师说你不讲武德，并把你的鼻子蹭了一下\n";

						d = d - 2;

					}

					if (e == 3) {

						cout << "你踢了一下马老师的隐私部位\n";

						d = d + 3;

						s += 8;

					}

					if (e == 4) {

						cout << "你使用了SB神功（盗版）\n";

						d = d + 1;

						s += 4;

					}

					if (e == 5) {

						cout << "马老师摸了摸你的头，笑了笑\n";

						d = d - 2;

						s--;

					}

					if (e == 6) {

						cout << "你使用了变傻光线\n";

						d = d + 5;

						s += 6;

					}

					if (e == 7) {

						cout << "你叫了马保国一声爸爸\n";

						d = d - 3;

						s += 3;

					}

					if (e == 8) {

						cout << "马老师不让你溜\n";

						d = d - 2;

					}

					if (s >= 20)

					{

						cout << "      win" << endl;

						cout << "      w n" << endl;

						cout << "      w n" << endl;

						cout << "      win" << endl;

						cout << "      win" << endl;

						cout << "      win" << endl;

						cout << "      win" << endl;

						cout << "      win" << endl;

						cout << "      win" << endl;

						cout << " inwinwinwinwi" << endl;

						cout << "winwinwinwinwin" << endl;

						cout << "winwinwinwinwin" << endl;

						cout << "winwinwinwinwin" << endl;

						cout << "winwinwinwinwin" << endl;

						cout << "winwinwinwinwin" << endl;

						cout << " inwinwinwinwi" << endl;

						return 0;

					}

				}

				if (b == 2) {

					cout << "不讲武德!" << endl;

				}

			} while (d != 0);

		if (a == 6) do {

				cout << "1.用闪电五连鞭！" << endl;

				cout << "2.打他鼻梁骨" << endl;

				cout << "3.太极神功（盗版）\n";

				cout << "4.盖亚！！！！！\n";

				cout << "5.斥责年轻人不讲武德\n";

				cout << "6.闪电十连鞭\n";

				cin >> j;

				if (j == 1)cout << "一鞭，两鞭，三鞭，四鞭，五鞭！" << endl << "=================================" << endl;

				{

					cout << "         os\n";

					cout << "        l  e\n";

					cout << "        l  e\n";

					cout << "        lose\n";

					cout << "        lose\n";

					cout << "        lose\n";

					cout << "        lose\n";

					cout << "        lose\n";

					cout << "        lose\n";

					cout << "  eloseloseloselos\n";

					cout << " loseloseloseloselo\n";

					cout << "eloseloseloseloselos\n";

					cout << "eloseloseloseloselos\n";

					cout << "eloseloseloseloselos\n";

					cout << "eloseloseloseloselos\n";

					cout << " loseloseloseloselo\n";

					cout << "=======================================\n";

					for (int i = 1; i <= 1000; i++) cout << "lose lose 哈哈！     ";

					return 0;

				}

				if (j == 2) cout << "中国功夫，讲究点到为止，于是你笑了一下，准备收拳，谁知这个年轻人他不讲武德，偏来偷袭我69岁的老年人，你劝年轻人耗子尾汁适可而止好好反思。" << endl << "=========================================" << endl << "lose！" << endl;

				{

					cout << "         os\n";

					cout << "        l  e\n";

					cout << "        l  e\n";

					cout << "        lose\n";

					cout << "        lose\n";

					cout << "        lose\n";

					cout << "        lose\n";

					cout << "        lose\n";

					cout << "        lose\n";

					cout << "  eloseloseloselos\n";

					cout << " loseloseloseloselo\n";

					cout << "eloseloseloseloselos\n";

					cout << "eloseloseloseloselos\n";

					cout << "eloseloseloseloselos\n";

					cout << "eloseloseloseloselos\n";

					cout << " loseloseloseloselo\n";

					cout << "=======================================\n";

					for (int i = 1; i <= 1000; i++) cout << "lose lose 哈哈！    ";

					return 0;

				}

				if (j == 3) cout << "你使用了太极神功（盗版）" << endl << "=========================================" << endl << "lose！" << endl;

				{

					d = d + 3;

					s += 5;

				}

				if (j == 4) cout << "你变身成了盖亚" << endl << "=========================================" << endl << "lose！" << endl;

				{

					d = d + 12;

					s += 2;

				}

				if (j == 5) cout << "你骂年轻人不讲武德" << endl;

				{

					d = d + 5;

					s += 2;

				}

				if (j == 6) cout << "你使用了闪电十连鞭" << endl;

				{

					d = d + 2;

					s += 7;

				}

			} while (d <= 0 || s >= 4);

		if (a == 7) do {

				cout << "发现马保国！" << endl;

				cout << "1.攻击或搞事情！" << endl;

				cout << "2.走过去" << endl;

				cin >> b;

				if (b == 1) {

					m = 3;

					cout << "1.GAY之光轮\n";

					cout << "2.不讲武德\n";

					cout << "3.踢隐私部位\n";

					cout << "4.GAY神功（盗版）\n";

					cout << "5.耍赖\n";

					cout << "6.鄙视光线\n";

					cout << "7.奥利给！\n";

					cout << "8.溜\n";

					cin >> e;

					if (e == 1) {

						cout << "你使用了GAY之光轮" << endl;

						d = d + 4;

						s += 3;

					}

					if (e == 2) {

						cout << "马老师说你不讲武德，并把你的鼻子蹭了一下\n";

						d = d - 3;

					}

					if (e == 3) {

						cout << "你踢了一下马老师的隐私部位\n";

						d = d + 16;

						s += 12;

					}

					if (e == 4) {

						cout << "你使用了GAY神功（盗版）\n";

						d = d + 3;

						s += 4;

					}

					if (e == 5) {

						cout << "马老师摸了摸你的头，笑了笑\n";

						d = d - 3;

						s += 2;

					}

					if (e == 6) {

						cout << "你使用了鄙视光线\n";

						d = d + 3;

						s += 5;

					}

					if (e == 7) {

						cout << "奥利给！\n";

						d = d + 30;

						s += 1;

					}

					if (e == 8) {

						cout << "马老师不让你溜\n";

						d = d - 2;

					}

					if (s >= 19)

					{

						cout << "      win" << endl;

						cout << "      w n" << endl;

						cout << "      w n" << endl;

						cout << "      win" << endl;

						cout << "      win" << endl;

						cout << "      win" << endl;

						cout << "      win" << endl;

						cout << "      win" << endl;

						cout << "      win" << endl;

						cout << " inwinwinwinwi" << endl;

						cout << "winwinwinwinwin" << endl;

						cout << "winwinwinwinwin" << endl;

						cout << "winwinwinwinwin" << endl;

						cout << "winwinwinwinwin" << endl;

						cout << "winwinwinwinwin" << endl;

						cout << " inwinwinwinwi" << endl;

						return 0;

					}

				}

				if (b == 2) {

					cout << "不讲武德!" << endl;

				}

			} while (d != 0);

		if (a == 8) do {

				cout << "发现马保国！" << endl;

				cout << "1.攻击或搞事情！" << endl;

				cout << "2.走过去" << endl;

				cin >> b;

				if (b == 1) {

					m = 3;

					cout << "1.蹭右眼\n";

					cout << "2.不讲武德\n";

					cout << "3.踢隐私部位\n";

					cout << "4.NB神功（盗版）\n";

					cout << "5.耍赖\n";

					cout << "6.迪迦！！！！！\n";

					cout << "7.溜\n";

					cin >> e;

					if (e == 1) {

						cout << "你打肿了马老师的右眼" << endl;

						d = d + 1;

						s++;

					}

					if (e == 2) {

						cout << "马老师说你不讲武德，并把你的鼻子蹭了一下\n";

						d = d - 1;

					}

					if (e == 3) {

						cout << "你踢了一下马老师的隐私部位\n";

						d = d + 1;

						s += 5;

					}

					if (e == 4) {

						cout << "你使用了NB神功（盗版）\n";

						d = d + 1;

						s += 3;

					}

					if (e == 5) {

						cout << "马老师摸了摸你的头，笑了笑\n";

						d = d - 2;

						s += 1;

					}

					if (e == 6) {

						cout << "你变成了迪迦\n";

						d = d + 15;

						s += 3;

					}

					if (e == 7) {

						cout << "马老师不让你溜\n";

						d = d - 2;

					}

					if (s >= 11)

					{

						cout << "      win" << endl;

						cout << "      w n" << endl;

						cout << "      w n" << endl;

						cout << "      win" << endl;

						cout << "      win" << endl;

						cout << "      win" << endl;

						cout << "      win" << endl;

						cout << "      win" << endl;

						cout << "      win" << endl;

						cout << " inwinwinwinwi" << endl;

						cout << "winwinwinwinwin" << endl;

						cout << "winwinwinwinwin" << endl;

						cout << "winwinwinwinwin" << endl;

						cout << "winwinwinwinwin" << endl;

						cout << "winwinwinwinwin" << endl;

						cout << " inwinwinwinwi" << endl;

						return 0;

					}

				}

				if (b == 2) {

					cout << "不讲武德!" << endl;

				}

			} while (d != 0);

		if (a == 10) {

			cout << "  欢迎您来玩本游戏，本游戏是由狒狒教育有限公司娱乐部出版的，可通过数字键来选择人物、技能及运动。此版本（2.15）在2.12的基础上修改了一个bug！祝您玩得不愉快！谢谢！(っ*ω*)っ\n";

			cout << "选择狒狒" << endl << "==========================================" << endl;

			cout << "1.年轻人\n";

			cout << "2.卢本伟\n";

			cout << "3.迪迦/盖亚\n";

			cout << "4.狒狒\n";

			cout << "5.SB\n";

			cout << "6.马保国\n";

			cout << "7.GAY\n";

			cout << "8.老狒狒\n";

			cout << "9.关于游戏\n" << "==========================================\n";

			goto gamestart;

		}

		if (a == 9) {

			system("cls");

			return 0;

		}

	}

}

void eyes(int a)

{

	cout << "SB";

	for (int i = 1; i <= a; i++)

	{

		cout << "*#";

	}

	cout << endl;

}

int eye()

{

sb:
	system("cls");

	cout << "设置强度（建议200-2000，最好是1000）";

	int a;

	cin >> a;

	system("cls");

	cout << "\n\n\n\n\n\n\n\n\n\n\n                              准备好了吗？";

	Sleep(1000);

	system("cls");

	cout << "\n\n\n\n\n\n\n\n\n\n\n                              要开始了！";

	Sleep(2000);

	system("cls");

	for (int i = 1; i <= a; i++)

	{

		eyes(a - i);

	}

	Sleep(1000);

	system("cls");

	cout << "还想再玩吗？（y/n）" ;

	char ch;

	cin >> ch;

	if (ch == 'y' || ch == 'Y')goto sb;

	system("cls");

	return 0;

}

int NUM;

const unsigned long long shorttime = 4, longtime = 6, longlong = 8; //单位为秒

unsigned long long start = 0;

double total = 0.0;

unsigned long long getCurrentTime()      //直接调用这个函数就行了，返回值最好是int64_t，long long应该也可以

{

	struct timeval tv;

	gettimeofday(&tv, NULL);   //该函数在sys/time.h头文件中

	return tv.tv_sec * 1000 + tv.tv_usec / 1000;

}

int suiji(int min, int max, unsigned long long seed)

{

	srand(seed);

	int a = (rand() % (max - min + 1)) + min;

	return a;

}

bool jisuan()

{

	int min = 1, max = 9;

	bool flag = true;

	int a, b, c, d;

	unsigned long long seed;

	max = 99;

	seed = (unsigned)time(NULL);

	a = suiji(min, max, seed);

	b = (suiji(min, max, seed + 17) * suiji(min, max, seed + 7) * suiji(min, max, seed - 1)) % 100;

	c = suiji(0, 1, seed);

	cout << a;

	if (c == 0)

	{

		cout << "+";

		cout << b << "=";

		cin >> d;

		if (d == (a + b))

		{

			cout << "Correct！" << endl;

		}

		else

		{

			flag = false;

		}

	}

	else

	{

		cout << "-";

		cout << b << "=";

		cin >> d;

		if (d == (a - b))

		{

			cout << "Correct!" << endl;

		}

		else

		{

			flag = false;

		}

	}

	return flag;

}

int susuan()

{

	int min = 1, max = 9, s = 0;

	int a, b, c, d;

	unsigned long long seed;

start:
	cout << "欢迎来到速算王者!" << endl;

	cout << "请选择:" << endl;

	cout << "1.简单模式" << endl;

	cout << "2.中等模式" << endl;

	cout << "3.困难模式" << endl;

	cout << "4.终极模式（新）" << endl;

	cout << "5.关于本游戏" << endl;

	int n, i = 0;

	cin >> n;

	if (n != 1 && n != 2 && n != 3 && n != 4 && n != 5)

	{

		cout << "你输错了!" << endl;

		goto start;

	}

	if (n == 1)

	{

		cout << "准备开始！每题限时" << longlong << "秒" << endl;

		total = shorttime;

		Sleep(1.5 * 1000);

		for (;;)

		{

			start = getCurrentTime();

			total = longlong - (getCurrentTime() - start) / 1000.0;

			if (jisuan() == true)

			{

				//cout<<"本题用时"<<(getCurrentTime()-start)/1000.0<<"秒"<<endl;

				if ((getCurrentTime() - start) / 1000.0 > longlong)

				{

					cout << "答题超时......" << endl;

					cout << "得分：" << s << endl;

					cout << "输q退出,其他字符重来";

					char ch;

					cin >> ch;

					if (ch == 'q')

					{

						return 0;

					}

					else

					{

						system("cls");

						s = 0;

						goto start;

					}

				}

				else

				{

					s++;

				}

			}

			else

			{

				cout << "错误......" << endl;

				cout << "得分:" << s << endl;

				cout << "输q退出,其他字符重来";

				char ch;

				cin >> ch;

				if (ch == 'q')

				{

					return 0;

				}

				else

				{

					system("cls");

					s = 0;

					goto start;

				}

			}

		}

	}

	else if (n == 2)

	{

		cout << "准备开始！限时" << longtime << "秒" << endl;

		total = shorttime;

		Sleep(1.5 * 1000);

		for (;;)

		{

			start = getCurrentTime();

			total = longlong - (getCurrentTime() - start) / 1000.0;

			if (jisuan() == true)

			{

				//cout<<"本题用时"<<(getCurrentTime()-start)/1000.0<<"秒"<<endl;

				if ((getCurrentTime() - start) / 1000.0 > longtime)

				{

					cout << "答题超时......" << endl;

					cout << "得分：" << s << endl;

					cout << "输q退出,其他字符重来";

					char ch;

					cin >> ch;

					if (ch == 'q')

					{

						return 0;

					}

					else

					{

						system("cls");

						s = 0;

						goto start;

					}

				}

				else

				{

					s++;

				}

			}

			else

			{

				cout << "错误......" << endl;

				cout << "得分:" << s << endl;

				cout << "输q退出,其他字符重来";

				char ch;

				cin >> ch;

				if (ch == 'q')

				{

					return 0;

				}

				else

				{

					system("cls");

					s = 0;

					goto start;

				}

			}

		}

	}

	else if (n == 3)

	{

		cout << "准备开始！限时" << shorttime << "秒" << endl;

		total = shorttime;

		Sleep(1.5 * 1000);

		for (;;)

		{

			start = getCurrentTime();

			total = longlong - (getCurrentTime() - start) / 1000.0;

			if (jisuan() == true)

			{

				//cout<<"本题用时"<<(getCurrentTime()-start)/1000.0<<"秒"<<endl;

				if ((getCurrentTime() - start) / 1000.0 > shorttime)

				{

					cout << "答题超时......" << endl;

					cout << "得分：" << s << endl;

					cout << "输q退出,其他字符重来";

					char ch;

					cin >> ch;

					if (ch == 'q')

					{

						return 0;

					}

					else

					{

						system("cls");

						s = 0;

						goto start;

					}

				}

				else

				{

					s++;

				}

			}

			else

			{

				cout << "错误......" << endl;

				cout << "得分:" << s << endl;

				cout << "输q退出,其他字符重来";

				char ch;

				cin >> ch;

				if (ch == 'q')

				{

					return 0;

				}

				else

				{

					system("cls");

					s = 0;

					goto start;

				}

			}

		}

	}

	else if (n == 4)

	{

		cout << "准备开始！时间会越来越少！" << endl;

		total = shorttime;

		Sleep(1.5 * 1000);

		for (;;)

		{

			start = getCurrentTime();

			total = longlong - (getCurrentTime() - start) / 1000.0;

			if (jisuan() == true)

			{

				//cout<<"本题用时"<<(getCurrentTime()-start)/1000.0<<"秒"<<endl;

				if (s == 35)

				{

					cout << "恭喜恭喜，你胜利了！！！" << "\n" << "称号：举世无双的大师" << endl;

					cout << "输q退出,其他字符重来";

					char ch;

					cin >> ch;

					if (ch == 'q')

					{

						return 0;

					}

					else

					{

						system("cls");

						s = 0;

						goto start;

					}

				}

				if ((getCurrentTime() - start) / 1000.0 > longtime - s / 10)

				{

					cout << "答题超时......" << endl;

					cout << "得分：" << s << endl;

					if (s < 8)

					{

						cout << "称号：初级玩家" << endl;

					}

					if (s >= 8 && s < 15)

					{

						cout << "称号：中级玩家" << endl;

					}

					if (s >= 16 && s < 25)

					{

						cout << "称号：高级玩家" << endl;

					}

					if (s >= 25 && s < 35)

					{

						cout << "称号：超一流玩家" << endl;

					}

					cout << "输q退出,其他字符重来";

					char ch;

					cin >> ch;

					if (ch == 'q')

					{

						return 0;

					}

					else

					{

						system("cls");

						s = 0;

						goto start;

					}

				}

				else

				{

					s++;

				}

			}

			else

			{

				cout << "错误......" << endl;

				cout << "得分:" << s << endl;

				if (s < 8)

				{

					cout << "称号：初级玩家" << endl;

				}

				if (s >= 8 && s < 15)

				{

					cout << "称号：中级玩家" << endl;

				}

				if (s >= 16 && s < 25)

				{

					cout << "称号：高级玩家" << endl;

				}

				if (s >= 25 && s < 35)

				{

					cout << "称号：超一流玩家" << endl;

				}

				cout << "输q退出,其他字符重来";

				char ch;

				cin >> ch;

				if (ch == 'q')

				{

					return 0;

				}

				else

				{

					system("cls");

					s = 0;

					goto start;

				}

			}

		}

	}

	else

	{

		cout << "本游戏由“SB”c++游戏制作有限公司出品" << "\n";

		cout << "游戏版本号：v2.4" << "\n";

		s = 0;

		goto start;

	}

}

struct player

{

	string name;

	int money;

	bool flag;

};

player p1, p2, p3, p4;

int suiji(int n)

{

	return rand() % n;

}

int lunpan(player m)

{

	int zhu, a, b, c, fen = 0, a1, b1, c1;

	cout << m.name << "下注（元）：" << endl;

	cin >> zhu;

	m.money -= zhu;

	cout << "赌点数（0~9，输入三个数）:";

	cin >> a >> b >> c;

	cout << "开奖中......\n";

	Sleep(5000);

	srand((int)time(0));

	a1 = suiji(10);

	b1 = suiji(10);

	c1 = suiji(10);

	if (a == a1)fen++;

	if (b == b1)fen++;

	if (c == c1)fen++;

	cout << "中奖号码：" << a1 << " " << b1 << " " << c1 << endl;

	if (fen == 0)

	{

		cout << "很遗憾，没中奖!\n" << endl;

		fen = 0;

	}

	if (fen == 1)

	{

		cout << "恭喜中出三等奖\n" << endl;

		m.money += 3 * zhu;

		fen = 0;

	}

	if (fen == 2)

	{

		cout << "恭喜中出二等奖\n" << endl;

		m.money += 15 * zhu;

		fen = 0;

	}

	if (fen == 3)

	{

		cout << "恭喜中出一等奖\n" << endl;

		m.money += 100 * zhu;

		fen = 0;

	}

	return m.money;

}

void quming()

{

	cout << "请输入四人名字\n";

	cin >> p1.name >> p2.name >> p3.name >> p4.name;

}

bool paduan(player n)

{

	if (n.money <= 0)return false;

	else return true;

}

int du()

{

	p1.money = p2.money = p3.money = p4.money = 100;

	p1.flag = p2.flag = p3.flag = p4.flag = true;

	quming();

	system("cls");

	while (1)

	{

		if (paduan(p1) == false && paduan(p2) == false && paduan(p3) == false && paduan(p4) == false)

		{

			cout << "所有玩家全部破产！";

			Sleep(1888);

			return 0;

		}

		if (paduan(p1) == false)

		{

			cout << p1.name << "破产！\n";

			p1.flag = false;

		}

		if (paduan(p2) == false)

		{

			cout << p2.name << "破产！\n";

			p2.flag = false;

		}

		if (paduan(p3) == false)

		{

			cout << p3.name << "破产！\n";

			p3.flag = false;

		}

		if (paduan(p4) == false)

		{

			cout << p4.name << "破产！\n";

			p4.flag = false;

		}

		cout << p1.name << "有" << p1.money << "元\n";

		cout << p2.name << "有" << p2.money << "元\n";

		cout << p3.name << "有" << p3.money << "元\n";

		cout << p4.name << "有" << p4.money << "元\n";

		if (p1.flag)p1.money = lunpan(p1);

		if (p2.flag)p2.money = lunpan(p2);

		if (p3.flag)p3.money = lunpan(p3);

		if (p4.flag)p4.money = lunpan(p4);

		system("cls");

	}

	return 0;

}

int ti(float a) {

	return ((int)(a * 10 + 5)) / 10;

}

void Setpos(float x, float y) {

	COORD pos;

	pos.X = ti(y * 4) / 2;

	pos.Y = ti(x);

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}

void Color(int a) {

	if (a == 0) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

	if (a == 1) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);

	if (a == 2) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);

	if (a == 3) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE);

	if (a == 4) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);

	if (a == 5) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);

	if (a == 6) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);

	if (a == 7) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

	if (a == 8) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);

	if (a == 9) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_BLUE);

	if (a == 10) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_BLUE);

	if (a == 11) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE);

	if (a == 12) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN);

	if (a == 13) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);

	if (a == 14) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_BLUE);

}

int Blomax, Ren, Exp, Expmax, Lv, Lvl, Ice, Drug, ar1, ar2, Tar1, Tar2, bl, br, Win, T, Tb, Sy, Up, Upt, Down, u1, u2, Kill, Killb, L, Ll[4], Li, D, Gd[10], Biao, Fire, Fir, Water, Thun, Wind, Magne, I[20][2], ib, Dis, Disb, Dis1, Disb1, Boss, Bblo, Bblomax, Bwhat1, Bwhat2, Bwhat3, Bgo1[10], Bgo2[10], Bgo3[10], Bbr, Bbl, Bl[4];

float X, Y, Vx, Vy, Ding, Blo, Hui, Bx1, By1, Bx2, By2, Bx3, By3, Bvx1, Bvy1, Bvx2, Bvy2, Bvx3, Bvy3, Bway[1001][2];

struct bullet {

	float x, y, vx, vy;

	int what;

	int a, t, How;

	int life;

	bool kill;

} B[100001];

void Map(int a, int b);

void Pan(int a, float x, float y, int b) {

	float Nox[4], Noy[4];

	Nox[0] = X, Noy[0] = Y;

	if (Down == 1 && X == 22) Nox[1] = X + 1, Noy[1] = Y - 0.5, Nox[2] = X - 1, Noy[2] = Y - 0.5;

	else if (Down == 2) Nox[1] = X + 1, Noy[1] = Y - 0.5, Nox[2] = -10, Noy[2] = -10;

	else if (Down == 1 || X < 18) Nox[1] = X - 1, Noy[1] = Y - 0.5, Nox[2] = -10, Noy[2] = -10;

	else Nox[1] = X + 1, Noy[1] = Y - 0.5, Nox[2] = X - 1, Noy[2] = Y - 0.5;

	for (int i = 0; i < 3; i++) {

		if (a == -1) {

			if (abs(x - Nox[i]) + abs(y - Noy[i]) < 1.5) {

				if (B[b].what == -10)Exp += 2;

				if (B[b].what == -11)Exp += 1;

				B[b].life = 0;

				if (B[b].life == 0 && b == bl) bl++;

				Map(3, b);

				break;

			}

		}

		if (a == -2) {

			if (abs(x - Nox[i]) + abs(y - Noy[i]) < 2.5) {

				if (B[b].what == -2)Exp += 20, Biao += 20;

				if (B[b].what == -3)Fire = 1000000, Ice = 10000000, Fir = 10000000;

				if (B[b].what == -4)Water = 10000000;

				if (B[b].what == -5) {

					Wind = 10;

					Ding = 10000000;

					Ice = 10000000;

					if (Y < Ding - 1)Vy = 5;

					else Vy = 0;

					if (Up >= 1) Vx = -5;

					if (Down == 2) Vx = 5;

				}

				if (B[b].what == -6) {

					Thun = 200;

					system("color 1F");

					Sleep(20);

					system("color 6F");

					Sleep(10);

					system("color 0F");

				}

				if (B[b].what == -7)Magne = 300;

				if (B[b].what == -8)Ice = 0, Drug = 0, Blo = fmin((float)Blomax, Blo + 20);

				if (B[b].what == -9)Exp = fmin((float)Expmax, Exp + 20);

				B[b].life = 0;

				if (B[b].life == 0 && b == bl) bl++;

				Map(3, b);

				break;

			}

		}

	}

	if (Wind == 0 && Thun == 0 && (B[b].kill != 0 || Killb >= 15 || Ren == 1 && Killb > 0)) return;

	for (int i = 0; i < 3; i++) {

		if ((Wind >= 1 || Thun >= 1) && abs(x - Nox[i]) + abs(y - Noy[i]) < 2.5) {

			if (B[b].what < 98)Exp += 2;

			B[b].life = 0;

			Map(3, b);

			break;

		}

		if (a == 1) {

			if (abs(x - Nox[i]) < 0.5 && abs(y - Noy[i]) < 1) {

				if (B[b].what >= 99)Blo -= 10;

				if (B[b].what == 14)Blo -= 15, Ice = 100, B[b].life = 0;

				else if (B[b].what == 15)Blo -= 20, Ice = 0, B[b].life = 0;

				else if (B[b].what == 17)Blo -= 5, Drug = 100, B[b].life = 0;

				else if (B[b].what >= 13 && B[b].what <= 17)Blo -= 10, B[b].life = 0;

				else Blo -= 15;

				B[b].kill = 1, Killb = 20;

				Kill = 1;

				Map(3, b);

				break;

			}

		}

		if (a == 2 || a == 6 || a == 8 || a == 9 || a == 10 || a == 11 || a == 12) {

			if (abs(x - Nox[i]) + abs(y - Noy[i]) < 1.5) {

				if (a == 2)Blo -= 20;

				else if (a == 8)Blo -= 10;

				else Blo -= 15;

				B[b].kill = 1, Killb = 20;

				Kill = 1;

				if (a != 2) {

					B[b].life = 0;

					if (B[b].life == 0 && b == bl) bl++;

					Map(3, b);

					break;

				}

			}

		}

		if (a == 4) {

			if ((Wind >= 1 || Thun >= 1) && abs(x - Nox[i]) < 1.5 && Noy[i] - y <= 0 && Noy[i] - y >= -8) {

				if (B[b].what < 98)Exp += 2;

				B[b].life = 0;

				Map(3, b);

				break;

			}

			if (abs(x - Nox[i]) < 1 && Noy[i] - y <= 0 && Noy[i] - y >= -8) {

				Blo -= 25, B[b].kill = 1, Killb = 20;

				Kill = 1;

				Vy = -1;

				Y -= 0.5;

				break;

			}

		}

	}

}

void Map(int a, int b) {

	Color(0);

	if (a == -1) {

		if (Boss == 1 || Boss == 6) {

			if (Bwhat1 == 5) {

				if (ti(Bx1) == 20)Setpos(Bx1, By1), cout << "==";

				else Setpos(Bx1, By1), cout << "  ";

			} else {

				Setpos(Bx1 - 1, By1 - 0.5), cout << "    ";

				Setpos(Bx1, By1 - 1), cout << "      ";

				Setpos(Bx1 + 1, By1 - 0.5), cout << "    ";

				if (abs(ti(Bx1) - 20) <= 1)Setpos(20, By1 - 1), cout << "======";

			}

		}

		if (Boss == 2 || Boss == 6) {

			Setpos(Bx2 - 1, By2 - 1);

			cout << "    ";

			Setpos(Bx2, By2 - 1);

			cout << "      ";

			Setpos(Bx2 + 1, By2 - 1), cout << "      ";

			Color(0);

			if (abs(ti(Bx2) - 20) <= 1)Setpos(20, By2 - 1), cout << "======";

		}

		if (Boss == 3 || Boss == 6) {

			Setpos(Bx3 - 1, By3 - 0.5);

			cout << "     ";

			Setpos(Bx3, By3);

			cout << "  ";

			Setpos(Bx3 + 1, By3 - 1), cout << "      ";

			Color(0);

			if (abs(ti(Bx3) - 20) <= 1)Setpos(20, By3 - 1), cout << "=======";

		}

		if (X < 0)return;

		if (X >= 17 && X <= 19) {

			Setpos(X - 1, Y);

			cout << "  ";

			Setpos(X, Y - 1);

			cout << "   ";

			Setpos(X + 1, Y - 1), cout << "   ";

		} else if (X <= 23 && X >= 21) {

			Setpos(X + 1, Y);

			cout << "  ";

			Setpos(X, Y - 1);

			cout << "   ";

			Setpos(X - 1, Y - 1), cout << "    ";

		} else if (X > 23) {

			Setpos(X, Y - 1);

			cout << "    ";

			Setpos(X - 1, Y - 0.5), cout << "   ";

		} else if (X < 17 && Upt != 0) {

			Setpos(X, Y - 1);

			cout << "    ";

			Setpos(X + 1, Y - 1.5), cout << "    ";

		} else if (X < 17) {

			Setpos(X, Y - 1);

			cout << "    ";

			Setpos(X + 1, Y - 0.5), cout << "   ";

		}

		if (Thun > 0) {

			Setpos(X - 2, Y - 1), cout << "    ";

			Setpos(X + 2, Y - 1), cout << "    ";

			Setpos(X, Y + 2), cout << "  ";

			Setpos(X, Y - 2.5), cout << "  ";

			Setpos(X - 1, Y + 1), cout << "  ";

			Setpos(X + 1, Y + 1), cout << "  ";

			Setpos(X - 1, Y - 2), cout << "  ";

			Setpos(X + 1, Y - 2), cout << "  ";

			Setpos(20, Y - 2.5), cout << "============";

		}

		if (Wind != 0) {

			Setpos(X + 1, Y - 5);

			cout << "        ";

			Setpos(X, Y - 5);

			cout << "        ";

			Setpos(X - 1, Y - 5);

			cout << "        ";

			Setpos(20, Y - 5), cout << "========";

		}

		if (Water != 0) {

			Setpos(X, Y - 4);

			cout << "       ";

			Setpos(X + 2, Y - 3.5);

			cout << "     ";

			Setpos(X - 2, Y - 3.5);

			cout << "     ";

			Setpos(X + 1, Y - 3.5);

			cout << "     ";

			Setpos(X - 1, Y - 3.5);

			cout << "     ";

			Setpos(20, Y - 5), cout << "========";

		}

		if (Fire != 0) {

			Setpos(X, Y + 1), cout << "  ";

			Setpos(X + 1, Y), cout << "  ";

			Setpos(X - 1, Y - 1), cout << "  ";

			Setpos(20, Y - 1);

			cout << "======";

		}

	}

	if (a == 0) {

		if (Boss == 1 || Boss == 6) {

			if (Bwhat1 == 5)Color(5), Setpos(Bx1, By1), cout << "█", Color(0);

			else if (Bwhat1 == 4 && Bgo1[1] > 6 && Bgo1[1] < 11)Color(4), Setpos(Bgo1[5] - 1, Bgo1[6]), cout << "︻", Setpos(Bgo1[5], Bgo1[6] - 1), cout << "【", Setpos(Bgo1[5], Bgo1[6] + 1), cout << "】", Setpos(Bgo1[5] + 1, Bgo1[6]), cout << "︼", Color(0);

			else {

				Setpos(Bx1 - 1, By1 - 0.5), Color(0), cout << "●●";

				Setpos(Bx1, By1 - 1);

				if (Bwhat1 == 2 && Bgo1[1] <= 5)Color(1);

				else if (Bwhat1 == 3 && Bgo1[1] <= 5)Color(5);

				else if (Bwhat1 == 6 && Bgo1[1] <= 5)Color(8);

				else Color(4);

				if (Bwhat1 == 4) Setpos(Bx1, By1 - 0.5), cout << "██(";

				else cout << ")██(";

				Setpos(Bx1 + 1, By1 - 0.5), cout << "……";

				Color(0);

			}

		}

		if (Boss == 2 || Boss == 6) {

			Setpos(Bx2 - 1, By2 - 1);

			Color(0), cout << "\\ ";

			Color(0);

			cout << "●";

			Setpos(Bx2, By2 - 1);

			Color(3);

			cout << "◥";

			Color(5), cout << "JJJ";

			Color(0), cout << ">";

			Color(3);

			Setpos(Bx2 + 1, By2 - 1), cout << "◢█◣";

			Color(0);

		}

		if (Boss == 3 || Boss == 6) {

			Setpos(Bx3 - 1, By3 - 0.5);

			if (Bwhat3 == 3 || Bwhat3 == 9) Color(1);

			else if (Bwhat3 == 4 || Bwhat3 == 10) Color(4);

			else if (Bwhat3 == 5 || Bwhat3 == 11) Color(5);

			if (Bwhat3 == 11)cout << ' ';

			else if (Bwhat3 == 6) Color(3);

			else Color(2);

			cout << "●-";

			Setpos(Bx3, By3);

			if (Bwhat3 == 11)cout << "/";

			else cout << "┃";

			Color(0);

			Setpos(Bx3 + 1, By3 - 1), cout << "●●●";

		}

		if (X < 0)return;

		if (Ren == 2) Color(12);

		if (Ren == 3) Color(1);

		if (Ren == 4) Color(3);

		if (Ren == 5) Color(4);

		if (Ren == 6) Color(2);

		if (Drug != 0 && T % 5 != 0) Color(11);

		if (Drug != 0 && T % 5 == 0) Color(11);

		if (Ice != 0) Color(6);

		if (b == 1) Color(8);

		if (Li != 0) Color(5);

		if (Ren == 1 && Killb > 0 && T % 4 < 2) Color(13);

		if (Wind > 0 && T % 4 <= 1) Color(1);

		if (Wind > 0 && T % 4 >= 2) Color(0);

		if (Thun > 0 && T % 4 <= 1) Color(1);

		if (Thun > 0 && T % 4 >= 2) Color(6);

		if (X >= 17 && X <= 19) {

			Setpos(X - 1, Y);

			cout << "●";

			Setpos(X, Y - 1);

			cout << "━/";

			if (T % 10 < 3) Setpos(X + 1, Y - 1), cout << "┛╲";

			else if (T % 10 < 6) Setpos(X + 1, Y - 1), cout << "┦ ";

			else Setpos(X + 1, Y - 1), cout << "╯>";

			if (Wind > 0 && T % 3 == 0) Setpos(X + 1, Y - 1), cout << "┛╲";

			else if (Wind > 0 && T % 3 == 1) Setpos(X + 1, Y - 1), cout << "┦ ";

			else if (Wind > 0 && T % 3 == 2)Setpos(X + 1, Y - 1), cout << "╯>";

		} else if (X <= 23 && X >= 21) {

			Setpos(X + 1, Y);

			cout << "●";

			Setpos(X, Y - 1);

			cout << "━\\";

			if (T % 10 < 3) Setpos(X - 1, Y - 1), cout << "┓╱";

			else if (T % 10 < 6) Setpos(X - 1, Y - 1), cout << "┪ ";

			else Setpos(X - 1, Y - 1), cout << "╮>";

			if (Wind > 0 && T % 3 == 0) Setpos(X - 1, Y - 1), cout << "┓╱";

			else if (Wind > 0 && T % 3 == 1) Setpos(X - 1, Y - 1), cout << "┪ ";

			else if (Wind > 0 && T % 3 == 2)Setpos(X - 1, Y - 1), cout << "╮>";

		} else if (X > 23) {

			Setpos(X, Y - 1);

			cout << "━ ●";

			Setpos(X - 1, Y - 0.5), cout << "│>";

		} else if (X < 17 && Upt != 0) {

			Setpos(X, Y - 1);

			cout << "━ ●";

			Setpos(X + 1, Y - 1.5), cout << "╱ >";

		} else if (X < 17) {

			Setpos(X, Y - 1);

			cout << "━ ●";

			Setpos(X + 1, Y - 0.5), cout << "│>";

		}

		if (Thun > 0) {

			Setpos(X - 2, Y - 1), cout << "▄▄";

			Setpos(X + 2, Y - 1), cout << "▄▄";

			Setpos(X, Y + 2), cout << "▌";

			Setpos(X, Y - 2.5), cout << "▌";

			Setpos(X - 1, Y + 1), cout << "█";

			Setpos(X + 1, Y + 1), cout << "█";

			Setpos(X - 1, Y - 2), cout << "█";

			Setpos(X + 1, Y - 2), cout << "█";

		}

		if (Magne > 0 && T % 7 < 2)Setpos(X, Y), Color(5), cout << "★";

		if (Wind > 1) {

			if (T % 6 < 2)Color(1);

			else Color(0);

			if (T % 8 <= 1) {

				Setpos(X + 1, Y - 5);

				cout << "----  --";

				Setpos(X, Y - 5);

				cout << "-  --- -";

				Setpos(X - 1, Y - 5);

				cout << "--- - --";

			} else if (T % 8 <= 3) {

				Setpos(X + 1, Y - 5);

				cout << "------  ";

				Setpos(X, Y - 5);

				cout << " --  ---";

				Setpos(X - 1, Y - 5);

				cout << "----- - ";

			} else if (T % 8 <= 5) {

				Setpos(X + 1, Y - 5);

				cout << "  ------";

				Setpos(X, Y - 5);

				cout << "-- --  -";

				Setpos(X - 1, Y - 5);

				cout << "- ----- ";

			} else if (T % 8 <= 7) {

				Setpos(X + 1, Y - 5);

				cout << "--  ----";

				Setpos(X, Y - 5);

				cout << " --- -- ";

				Setpos(X - 1, Y - 5);

				cout << "- - ----";

			}

		}

		if (Water != 0) {

			Color(1);

			if (T % 20 < 5) {

				Setpos(X + 2, Y - 3);

				cout << "■";

				Setpos(X + 1, Y - 3.5);

				cout << "■";

				Setpos(X - 1, Y - 2.5);

				cout << "■";

				Setpos(X - 2, Y - 3);

				cout << "■";

			} else if (T % 20 < 10 || T % 20 >= 15) {

				Setpos(X + 2, Y - 3);

				cout << "■";

				Setpos(X, Y - 4);

				cout << "■■";

				Setpos(X - 2, Y - 3);

				cout << "■";

			} else if (T % 20 < 15) {

				Setpos(X + 2, Y - 3.5);

				cout << "■";

				Setpos(X + 1, Y - 3);

				cout << "■";

				Setpos(X - 1, Y - 3.5);

				cout << "■";

				Setpos(X - 2, Y - 3);

				cout << "■";

			}

		}

		if (Fire != 0) {

			if (T % 6 < 3)Color(4);

			else Color(5);

			if (Fir >= 1)Setpos(X, Y + 1), cout << "●";

			if (Fir >= 2)Setpos(X + 1, Y), cout << "●";

			if (Fir >= 3)Setpos(X - 1, Y - 1), cout << "●";

		}

	}

	if (a == 1 || a == 3) {

		if (B[b].what == 1) {

			Nor;

			Setpos(B[b].x, B[b].y - 1);

			if (ti(B[b].x) == 20)cout << "======";

			else cout << "      ";

			if (B[b].life != 0) {

				B[b].y -= B[b].vy;

				Setpos(B[b].x, B[b].y);

				if (B[b].How <= 1) Color(13);

				else Color(4);

				cout << "●";

				if (a == 1) Pan(1, B[b].x, B[b].y, b);

			}

		}

		if (B[b].what == 2) {

			Nor;

			Setpos(B[b].x - 1, B[b].y - 1);

			if (ti(B[b].x - 1) == 20)cout << "======";

			else cout << "      ";

			Setpos(B[b].x, B[b].y - 1);

			if (ti(B[b].x) == 20)cout << "======";

			else cout << "      ";

			Setpos(B[b].x + 1, B[b].y - 1);

			if (ti(B[b].x + 1) == 20)cout << "======";

			else cout << "      ";

			if (B[b].life != 0) {

				B[b].y -= B[b].vy;

				Setpos(B[b].x, B[b].y);

				Color(5);

				if (B[b].How == 0) {

					Setpos(B[b].x - 1, B[b].y), cout << "↑";

					Setpos(B[b].x, B[b].y - 1), cout << "←┼ →";

					Setpos(B[b].x + 1, B[b].y), cout << "↓";

				} else if (B[b].How == 1) {

					Setpos(B[b].x - 1, B[b].y - 1), cout << "↖  ↗";

					Setpos(B[b].x, B[b].y), cout << "╳";

					Setpos(B[b].x + 1, B[b].y - 1), cout << "↙  ↘";

				}

				if (a == 1) Pan(2, B[b].x, B[b].y, b);

			}

		}

		if (B[b].what == 3 || B[b].what == 5) {

			Nor;

			Setpos(B[b].x, B[b].y);

			if (ti(B[b].x) == 20)cout << "==";

			else cout << "  ";

			if (B[b].life != 0) {

				B[b].y -= B[b].vy;

				B[b].x -= B[b].vx;

				Setpos(B[b].x, B[b].y);

				if (B[b].How == 1) Color(5);

				else Color(4);

				cout << "◎";

			}

		}

		if (B[b].what == 4) {

			Nor;

			Setpos(B[b].x, fmax((float)0, B[b].y - 8));

			if (ti(B[b].x) == 20) {

				for (int i = max(0, (int)B[b].y - 8); i <= B[b].y; i++)cout << "==";

			} else {

				for (int i = max(0, (int)B[b].y - 8); i <= B[b].y; i++)cout << "  ";

			}

			if (B[b].life != 0) {

				B[b].y -= B[b].vy;

				Setpos(B[b].x, fmax((float)0, B[b].y - 8));

				Color(6);

				for (int i = max(0, (int)B[b].y - 8); i <= B[b].y; i++)cout << "═";

				if (a == 1) Pan(4, B[b].x, B[b].y, b);

			}

		}

		if (B[b].what == 6 || B[b].what == 8 || B[b].what == 9) {

			Nor;

			Setpos(B[b].x - 1, B[b].y);

			if (ti(B[b].x) - 1 == 20)cout << "==";

			else cout << "  ";

			Setpos(B[b].x + 1, B[b].y);

			if (ti(B[b].x) + 1 == 20)cout << "==";

			else cout << "  ";

			Setpos(B[b].x, B[b].y - 1);

			if (ti(B[b].x) == 20)cout << "======";

			else cout << "      ";

			if (B[b].life != 0) {

				B[b].y -= B[b].vy;

				B[b].x -= B[b].vx;

				Setpos(B[b].x, B[b].y - 1);

				if (B[b].what == 6) {

					if (B[b].How <= 1) Color(1);

					else Color(6);

				}

				if (B[b].what == 9) {

					if (B[b].How <= 1) Color(4);

					else Color(8);

				}

				if (B[b].what == 8)Color(5);

				Setpos(B[b].x - 1, B[b].y);

				cout << "︹";

				Setpos(B[b].x + 1, B[b].y);

				cout << "︺";

				Setpos(B[b].x, B[b].y - 1);

				if (B[b].How % 2 == 1) cout << "〔●〕";

				else cout << "﹝○﹞";

				if (a == 1) Pan(6, B[b].x, B[b].y, b);

			}

		}

		if (B[b].what == 7) {

			Nor;

			Setpos(B[b].x, B[b].y);

			if (B[b].How < 0) for (int i = 19; i >= 20 + B[b].How; i--) {

					Setpos(i, B[b].y);

					cout << "  ";

				}

			if (B[b].How > 0) for (int i = 21; i <= 20 + B[b].How; i++) {

					Setpos(i, B[b].y);

					cout << "  ";

				}

			if (B[b].life != 0) {

				B[b].y -= B[b].vy;

				if (B[b].How < 0) for (int i = 19; i >= 20 + B[b].How; i--) {

						Setpos(i, B[b].y);

						cout << "║";

						if (a == 1) Pan(7, i, B[b].y, b);

					}

				if (B[b].How > 0) for (int i = 21; i <= 20 + B[b].How; i++) {

						Setpos(i, B[b].y);

						cout << "║";

						if (a == 1) Pan(7, i, B[b].y, b);

					}

			}

		}

		if (B[b].what == 10 || B[b].what == 11 || B[b].what == 12) {

			Nor;

			Setpos(B[b].x, B[b].y);

			if (ti(B[b].x) == 20)cout << "==";

			else cout << "  ";

			if (B[b].life != 0) {

				B[b].x -= B[b].vx;

				B[b].y -= B[b].vy;

				if (B[b].How == 1) {

					B[b].vy -= 0.2;

				} else B[b].vx -= 0.35;

				if (B[b].x >= 25) B[b].x = 25, B[b].vx *= -0.8;

				if (B[b].what == 11 && B[b].y <= 1) B[b].y = 1, B[b].vy *= -1;

				if (B[b].what == 12 && B[b].y <= 1) B[b].y = 1, B[b].vx = 0, B[b].vy = -0.5, B[b].How = 1;

				Setpos(B[b].x, B[b].y);

				if (B[b].what == 11)Color(1);

				else if (B[b].what == 12)Color(5);

				else Color(0);

				if (B[b].t % 4 < 2)cout << "▃";

				else cout << "▍";

				if (a == 1) Pan(B[b].what, B[b].x, B[b].y, b);

			}

		}

		if (B[b].what >= 13 && B[b].what <= 17) {

			Nor;

			Setpos(B[b].x, B[b].y);

			if (ti(B[b].x) == 20)cout << "====";

			else cout << "    ";

			if (B[b].life != 0) {

				B[b].x -= B[b].vx;

				B[b].y -= B[b].vy;

				Setpos(B[b].x, B[b].y);

				if (B[b].what == 14) Color(1);

				else if (B[b].what == 15) Color(4);

				else if (B[b].what == 16) Color(5);

				else if (B[b].what == 17) Color(3);

				else Color(2);

				cout << "●";

				if (B[b].what == 14)cout << "*";

				if (B[b].what == 15)cout << "";

				if (B[b].what == 16)cout << "<";

				if (B[b].what == 17)cout << "X";

			}

			if (a == 1) Pan(1, B[b].x, B[b].y, b);

		}

		if (B[b].what == 98 && B[b].life != 0) {

			B[b].y -= B[b].vy;

			Setpos(B[b].x, B[b].y);

			if (ti(B[b].x == 20))cout << "==";

			else cout << "  ";

			if (B[b].y <= 3)B[b].life = 0;

		}

		if (B[b].what >= 99) {

			if (B[b].y <= 3)B[b].life = 0;

			if (B[b].life != 0) {

				B[b].y -= B[b].vy;

				Setpos(B[b].x, B[b].y);

				Color(5);

				if (B[b].what == 99)cout << "█";

				if (B[b].what >= 100 && B[b].what < 200) {

					if (B[b].what % 5 == 0)cout << "ZYR";

					if (B[b].what % 5 == 1)cout << "0821";

					if (B[b].what % 5 == 2)cout << "太";

					if (B[b].what % 5 == 3)cout << "帅";

					if (B[b].what % 5 == 4)cout << "了";

				}

				if (B[b].what >= 200 && B[b].what < 300) {

					if (B[b].what % 6 == 0)cout << "神";

					if (B[b].what % 6 == 1)cout << "级";

					if (B[b].what % 6 == 2)cout << "ZYR";

					if (B[b].what % 6 == 3)cout << "0821";

					if (B[b].what % 6 == 4)cout << "之";

					if (B[b].what % 6 == 5)cout << "光";

				}

				if (B[b].what >= 300 && B[b].what < 400) {

					if (B[b].what % 8 == 0)cout << "颤";

					if (B[b].what % 8 == 1)cout << "抖";

					if (B[b].what % 8 == 2)cout << "吧";

					if (B[b].what % 8 == 3)cout << "无";

					if (B[b].what % 8 == 4)cout << "能";

					if (B[b].what % 8 == 5)cout << "的";

					if (B[b].what % 8 == 6)cout << "人";

					if (B[b].what % 8 == 7)cout << "类";

				}

				if (B[b].what >= 400 && B[b].what < 500) {

					if (B[b].what % 8 == 0)cout << "还";

					if (B[b].what % 8 == 1)cout << "不";

					if (B[b].what % 8 == 2)cout << "快";

					if (B[b].what % 8 == 3)cout << "跪";

					if (B[b].what % 8 == 4)cout << "倒";

					if (B[b].what % 8 == 5)cout << "在";

					if (B[b].what % 8 == 6)cout << "朕";

					if (B[b].what % 8 == 7)cout << "前";

				}

				if (B[b].what >= 500 && B[b].what < 600) {

					if (B[b].what % 8 == 0)cout << "看";

					if (B[b].what % 8 == 1)cout << "懂";

					if (B[b].what % 8 == 2)cout << "这";

					if (B[b].what % 8 == 3)cout << "句";

					if (B[b].what % 8 == 4)cout << "话";

					if (B[b].what % 8 == 5)cout << "的";

					if (B[b].what % 8 == 6)cout << "是";

					if (B[b].what % 8 == 7)cout << "猪";

				}

				if (a == 1) Pan(1, B[b].x, B[b].y, b);

			}

		}

		if (B[b].what == -1) {

			Nor;

			Setpos(B[b].x, B[b].y);

			if (ti(B[b].x) == 20)cout << "==";

			else cout << "  ";

			if (Boss == 0) B[b].life = 0;

			else if (((Boss == 1 && abs(B[b].x - Bx1) + abs(B[b].y - By1) < 1.5) || (Boss == 2 && abs(B[b].x - Bx2) + abs(B[b].y - By2) < 1.5) || (Boss == 3 && abs(B[b].x - Bx3) + abs(B[b].y - By3) < 1.5) || (B[b].t == 10)) && B[b].life == 1) Bblo -= 8 + Lv * 2, B[b].life = 0;

			if (B[b].life != 0) {

				if (Boss == 1)B[b].x = B[b].x + (Bx1 - B[b].x) / (10 - B[b].t) * 1.0, B[b].y = B[b].y + (By1 - B[b].y) / (10 - B[b].t) * 1.0;

				if (Boss == 2)B[b].x = B[b].x + (Bx2 - B[b].x) / (10 - B[b].t) * 1.0, B[b].y = B[b].y + (By2 - B[b].y) / (10 - B[b].t) * 1.0;

				if (Boss == 3)B[b].x = B[b].x + (Bx3 - B[b].x) / (10 - B[b].t) * 1.0, B[b].y = B[b].y + (By3 - B[b].y) / (10 - B[b].t) * 1.0;

				Setpos(B[b].x, B[b].y);

				Color(7);

				if (B[b].t % 2 == 0) cout << "＋";

				else cout << "×";

			}

		}

		if (B[b].what <= -2 && B[b].what >= -9) {

			Nor;

			Setpos(B[b].x - 1, B[b].y);

			if (ti(B[b].x) - 1 == 20)cout << "==";

			else cout << "  ";

			Setpos(B[b].x + 1, B[b].y);

			if (ti(B[b].x) + 1 == 20)cout << "==";

			else cout << "  ";

			Setpos(B[b].x, B[b].y - 1);

			if (ti(B[b].x) == 20)cout << "======";

			else cout << "      ";

			if (B[b].life != 0) {

				B[b].y -= B[b].vy;

				B[b].x -= B[b].vx;

				if (B[b].what <= -3 && B[b].what >= -7) {

					if (B[b].x <= 7)B[b].x = 7;

					if (B[b].x >= 28)B[b].x = 28;

					else if (B[b].x >= B[b].a + 1 && B[b].How == 1)B[b].How = 0;

					else if (B[b].x <= B[b].a - 1 && B[b].How == 0)B[b].How = 1;

					if (B[b].How == 1 && B[b].vx >= -1)B[b].vx -= 0.2;

					if (B[b].How == 0 && B[b].vx <= 1)B[b].vx += 0.2;

				}

				if (B[b].what == -2) Color(3);

				if (B[b].what == -3) Color(4);

				if (B[b].what == -4) Color(1);

				if (B[b].what == -5) Color(0);

				if (B[b].what == -6) Color(6);

				if (B[b].what == -7) Color(5);

				if (B[b].what == -8) Color(2);

				if (B[b].what == -9) Color(14);

				if (T % 7 <= 1 && B[b].what == -5)Color(1);

				else if (T % 7 <= 1)Color(0);

				Setpos(B[b].x - 1, B[b].y);

				cout << "︹";

				Setpos(B[b].x + 1, B[b].y);

				cout << "︺";

				Setpos(B[b].x, B[b].y - 1);

				if (B[b].what == -2) cout << "﹝镖﹞";

				if (B[b].what == -3) cout << "﹝火﹞";

				if (B[b].what == -4) cout << "﹝水﹞";

				if (B[b].what == -5) cout << "﹝风﹞";

				if (B[b].what == -6) cout << "﹝雷﹞";

				if (B[b].what == -7) cout << "﹝磁﹞";

				if (B[b].what == -8) cout << "﹝血﹞";

				if (B[b].what == -9) cout << "﹝忍﹞";

				if (a == 1) Pan(-2, B[b].x, B[b].y, b);

			}

		}

		if (B[b].what == -11 || B[b].what == -12) {

			Nor;

			Setpos(B[b].x, B[b].y);

			if (ti(B[b].x) == 20)cout << "==";

			else cout << "  ";

			if (B[b].life != 0) {

				if (Magne > 0)B[b].How++, B[b].x = B[b].x + (X - B[b].x) / (10 - B[b].How) * 1.0, B[b].y = B[b].y + (Y - B[b].y) / (10 - B[b].How) * 1.0;

				B[b].y -= B[b].vy;

				Setpos(B[b].x, B[b].y);

				if (B[b].what == -10) Color(5);

				if (B[b].what == -11) Color(7);

				if (T % 7 <= 1)Color(0);

				cout << "◆";

				if (a == 1) Pan(-1, B[b].x, B[b].y, b);

			}

		}

		if (B[b].what == -13) {

			Nor;

			Setpos(B[b].x, B[b].y - 0.5);

			if (ti(B[b].x) == 20)cout << "===";

			else cout << "   ";

			if (B[b].life != 0) {

				if (B[b].a == 13880086) {

					if (Boss == 0) B[b].life = 0;

					else if (((Boss == 1 && abs(B[b].x - Bx1) + abs(B[b].y - By1) < 1.5) || (Boss == 2 && abs(B[b].x - Bx2) + abs(B[b].y - By2) < 1.5) || (Boss == 3 && abs(B[b].x - Bx3) + abs(B[b].y - By3) < 1.5) || (B[b].t == 5)) && B[b].life == 1) Bblo -= 8 + Lv * 2, B[b].life = 0;

					if (B[b].life != 0) {

						if (Boss == 1)B[b].x = B[b].x + (Bx1 - B[b].x) / (5 - B[b].t) * 1.0, B[b].y = B[b].y + (By1 - B[b].y) / (5 - B[b].t) * 1.0;

						if (Boss == 2)B[b].x = B[b].x + (Bx2 - B[b].x) / (5 - B[b].t) * 1.0, B[b].y = B[b].y + (By2 - B[b].y) / (5 - B[b].t) * 1.0;

						if (Boss == 3)B[b].x = B[b].x + (Bx3 - B[b].x) / (5 - B[b].t) * 1.0, B[b].y = B[b].y + (By3 - B[b].y) / (5 - B[b].t) * 1.0;

					}

				} else {

					if (B[B[b].a].life == 0) B[b].life = 0;

					else if ((abs(B[b].x - B[B[b].a].x) + abs(B[b].y - B[B[b].a].y) < 1.5 || (B[b].t == 5)) && B[b].life == 1) Exp += 2, B[B[b].a].life = B[b].life = 0;

					if (B[b].life != 0) {

						B[b].x = B[b].x + (B[B[b].a].x - B[b].x) / (5 - B[b].t) * 1.0, B[b].y = B[b].y + (B[B[b].a].y - B[b].y) / (5 - B[b].t) * 1.0;

					}

				}

				Setpos(B[b].x, B[b].y - 0.5);

				if (T % 6 < 3)Color(5);

				else Color(4);

				cout << "●";

			}

		}

	}

	if (br < bl) {

		br = -1, bl = 0;

		memset(B, 0, sizeof(B));

	}

	Color(0);

}

void Move() {

	if (X < 3) X = 3;

	if (Y < 1) Y = 1, Vy = 0;

	if (Y > 29) Y = 29, Vy = 0;

	if (Ice != 0) {

		X -= Vx / 2.0;

		Y += Vy / 2.0;

		Vy = fmax(Vy - 0.025, (float)0);

		if (T % 6 == 0 && Up == 0 && Y < Ding) Y += 0.25;

		if (T % 6 == 3 && Up == 0 && Y >= Ding) Y -= 0.25;

		if (Up == 0 && Y <= Ding - 1.25) Vy = 0.25;

		if (Up == 0 && Y >= Ding + 1.25 && Wind == 0) Vy = -0.25;

		if (Up == 0 && Down == 0 && Vx > 0 && X <= 18) Up = 0, Down = 0, Vx = 0, Vy = 0, X = 18, Setpos(20, Y - 2.5), cout << "==========";

		else if (Down == 2 && X <= 22) Up = 0, Down = 1, Vx = 0, Vy = 0, X = 22, Setpos(20, Y - 2.5), cout << "==========";

		else if (Up == 0 && Down == 1 && Vx < 0 && X >= 22) Up = 0, Down = 1, Vx = 0, Vy = 0, X = 22, Setpos(20, Y - 2.5), cout << "==========";

		else if (Up > 0 && Down == 0 && X > 18) Up = 0, Vx = 0, Vy = 0, X = 18, Setpos(20, Y - 2.5), cout << "==========";

		else if (Down == 2) Vx += 0.175;

		else if (Up > 0 && Upt == 0) Vx -= 0.175;

		else if (Up > 0 && Upt > 0) {

			Vx = fmax(Vx - 0.125, (float)0);

			if (Upt == 1 && T % 2 == 0)Map(-1, 0);

			if (T % 2 == 0)Upt--;

		}

	} else {

		X -= Vx;

		Y += Vy;

		Vy = fmax(Vy - 0.05, (float)0);

		if (Wind == 0) {

			if (T % 6 == 0 && Up == 0 && Y < Ding) Y += 0.5;

			if (T % 6 == 3 && Up == 0 && Y >= Ding) Y -= 0.5;

		} else {

			if (T % 2 == 0 && Up == 0 && Y < Ding) Y += 0.5;

			if (T % 2 == 1 && Up == 0 && Y >= Ding) Y -= 0.5;

		}

		if (Up == 0 && Y <= Ding - 1.25) Vy = 0.5;

		if (Up == 0 && Y >= Ding + 1.25 && Wind == 0) Vy = -0.5;

		if (Up == 0 && Down == 0 && Vx > 0 && X <= 18) Up = 0, Down = 0, Vx = 0, Vy = 0, X = 18, Setpos(20, Y - 2.5), cout << "==========";

		else if (Down == 2 && X <= 22) Up = 0, Down = 1, Vx = 0, Vy = 0, X = 22, Setpos(20, Y - 2.5), cout << "==========";

		else if (Up == 0 && Down == 1 && Vx < 0 && X >= 22) Up = 0, Down = 1, Vx = 0, Vy = 0, X = 22, Setpos(20, Y - 2.5), cout << "==========";

		else if (Up > 0 && Down == 0 && X > 18) Up = 0, Vx = 0, Vy = 0, X = 18, Setpos(20, Y - 2.5), cout << "==========";

		else if (Down == 2) Vx += 0.35;

		else if (Up > 0 && Upt == 0) Vx -= 0.35;

		else if (Up > 0 && Upt > 0) {

			Vx = fmax(Vx - 0.25, (float)0);

			if (Upt == 1)Map(-1, 0);

			Upt--;

		}

	}

	for (int i = bl; i <= br; i++) {

		if (B[i].what < 98)if (B[i].x - B[i].vx <= 5 || B[i].x - B[i].vx >= 30 || B[i].y - B[i].vy <= 0 || B[i].y - B[i].vy >= 30) {

				B[i].life = 0;

				Map(1, i);

			}

		for (int j = 0; j < 20; j++)if (B[i].what > 0 && B[i].life != 0 && abs(B[i].x - I[j][0]) < 2 && B[i].y - I[j][1] <= 2) {

				Setpos(I[j][0], I[j][1]);

				if (I[j][0] == 20) cout << "===";

				else cout << "   ";

				I[j][0] = I[j][1] = -1;

				B[i].life = 0;

				Exp += 2;

			}

		if (B[i].t >= 100)B[i].life = 0;

		if (B[i].life == 0 && i == bl) bl++;

		Map(1, i);

		if (B[i].life == 0) continue;

		else {

			B[i].t++;

			if (B[i].what == 1) {

				if (B[i].y <= 25 && B[i].How == 0) B[i].vy = 0, B[i].How = 1;

				if (B[i].t == 30) B[i].y += 1.5, B[i].How = 2;

				if (B[i].t == 35) B[i].vy = 1.5, B[i].How = 3;

			}

			if (B[i].what == 2) {

				if (B[i].t % 3 == 0) B[i].How = !B[i].How;

			}

			if (B[i].what == 3 || B[i].what == 5) {

				if (B[i].what == 3 && B[i].y <= 20) B[i].vy = 0;

				if (B[i].what == 5 && B[i].y <= 21) B[i].vy = 0;

				if (B[i].t > 30 && B[i].t % 2 == 0) B[i].How = !B[i].How;

				if (B[i].what == 5 && B[i].t <= 30 && B[i].x < X) B[i].vx = -0.2;

				else if (B[i].what == 5 && B[i].t <= 70 && B[i].x > X) B[i].vx = 0.2;

				else B[i].vx = 0;

				if (B[i].t == 45) {

					B[i].life = 0;

					br++;

					B[br].what = 4;

					B[br].x = B[i].x;

					B[br].y = 32;

					B[br].vy = 3;

					B[br].life = 1;

				}

			}

			if (B[i].what == 6 || B[i].what == 8 || B[i].what == 9) {

				if (B[i].vx < 0.25 && B[i].vy < 0.25 && B[i].t >= 50) {

					B[i].life = 0;

					if (B[i].life == 0 && i == bl) bl++;

					Map(1, i);

					break;

				}

				if (B[i].t % 5 == 0) B[i].How = rand() % 4;

				if (B[i].what == 9) {

					if (B[i].t == 7) {

X9:

						float xx = (rand() % 41) / 40.0, yy = (rand() % 41) / 40.0;

						if (xx <= 0.5 && yy <= 0.5) goto X9;

						for (int j = 1; j <= 4; j++) {

							br++, B[br].what = 9;

							B[br].t = 11;

							B[br].x = B[i].x, B[br].y = B[i].y, B[br].vx = xx, B[br].vy = yy;

							if (j % 2 == 0)swap(B[br].vx, B[br].vy), B[br].vy *= -1;

							if (j <= 2)B[br].vx *= -1, B[br].vy *= -1;

							B[br].life = 1;

						}

						B[i].life = 0;

					}

				}

				if (B[i].what == 8) {

					if (B[i].x > X && B[i].vx < 1.2) B[i].vx += fmax((float)0, 0.2 - B[i].t / 25);

					if (B[i].x < X && B[i].vx > -1.2) B[i].vx -= fmax((float)0, 0.2 - B[i].t / 25);

					if (B[i].y > Y && B[i].vy < 1.2) B[i].vy += fmax((float)0, 0.2 - B[i].t / 25);

					if (B[i].y < Y && B[i].vy > -1.2) B[i].vy -= fmax((float)0, 0.2 - B[i].t / 25);

				}

			}

			if (B[i].what >= 13 && B[i].what <= 15 && B[i].How != 0) {

				if (B[i].x == B[i].How)B[i].vx = 0, B[i].How = 0;

			}

			if (B[i].what == 16) {

				if (B[i].x < X && B[i].vx >= -1) B[i].vx -= 0.2;

				else if (B[i].x > X && B[i].vx <= 1) B[i].vx += 0.2;

			}

		}

		if (B[i].life == 1 && B[i].a == 0 && B[i].what > 0) {

			if (B[i].y > Y && abs(B[i].x - X) <= 3 && ((B[i].x - X) * (B[i].x - X) + (B[i].y - Y) * (B[i].y - Y)) < Dis) Dis = (B[i].x - X) * (B[i].x - X) + (B[i].y - Y) * (B[i].y - Y), Disb = i;

			else if (((B[i].x - X) * (B[i].x - X) + (B[i].y - Y) * (B[i].y - Y)) < Dis1) Dis1 = (B[i].x - X) * (B[i].x - X) + (B[i].y - Y) * (B[i].y - Y), Disb1 = i;

		}

	}

}

void Guai(int R, int r) {

	if (R == -1) {

		br++;

		B[br].what = -1;

		B[br].x = X + rand() % 3 - 1;

		B[br].y = Y + rand() % 3 - 1;

		B[br].life = 1;

	}

	if (R <= -2 && R >= -11) {

		br++;

		B[br].what = R;

		B[br].x = B[br].a = r;

		B[br].y = 29;

		if (R <= -3 && R >= -7)B[br].vx = -1;

		B[br].vy = 1;

		B[br].life = 1;

	}

	if (R == 0) {

		br++;

		B[br].what = 1;

		B[br].x = r;

		B[br].y = 29;

		B[br].vy = 1;

		B[br].life = 1;

	}

	if (R == 1) {

		br++;

		B[br].what = 2;

		B[br].x = r;

		B[br].y = 29;

		B[br].vy = 1;

		B[br].life = 1;

	}

	if (R == 2 || R == 3) {

		br++;

		B[br].what = 2 * R - 1;

		B[br].x = r;

		B[br].y = 29;

		B[br].vy = 1;

		B[br].life = 1;

	}

	if (R == 4) {

		br++;

		B[br].what = 6;

		if (r < 5)r = 5;

		if (r > 30)r = 30;

		B[br].x = r;

		if (r == 11 || r == 25) B[br].y = 29 - (rand() % 20);

		else B[br].y = 29;

X4:

		B[br].vx = (rand() % 21 - 10) / 30.0;

		B[br].vy = (rand() % 25) / 30.0;

		if (B[br].vx <= 0.8 && B[br].vy <= 0.8)goto X4;

		int rx = rand() % 50;

		if (rx == 0) B[br].vx = 0;

		B[br].life = 1;

	}

	if (R == 5) {

		br++;

		B[br].How = r;

		B[br].what = 7;

		if (B[br].How < 0) B[br].x = 19;

		if (B[br].How > 0) B[br].x = 21;

		B[br].y = 29;

		B[br].vy = 1;

		B[br].life = 1;

	}

}

void CpGuai(int R, float x, float y, float xx, float yy) {

	if (R == 4) {

		br++;

		B[br].what = 6;

		B[br].x = x;

		B[br].y = y;

		B[br].vx = xx;

		B[br].vy = yy;

		B[br].life = 1;

	}

	if (R == 6 || R == 7 || R == 8) {

		br++;

		B[br].what = 4 + R;

		B[br].x = x;

		B[br].y = y;

		B[br].vx = xx;

		B[br].vy = yy;

		B[br].life = 1;

	}

}

void MesGuai(int a, int rr) {

	int R = rand() % rr, r = -10086;

	if (R == 0) {

		if (a == 1) r = (5 + rand() % 8) * 2;

		if (a <= 3 && a != 1) r = 10 + rand() % 16;

		if (a == 4) r = rand() % 75 - 20;

		if (a == 5) r = 2 + rand() % 4;

		if (r != -10086) Guai(a, r);

	}

}

void NorGuai(int a, int b) {

	if (a == 1) {

		if (b == 1 || b == 41) Guai(0, 15), Guai(0, 17), Guai(0, 19);

		if (b == 21 || b == 61) Guai(0, 21), Guai(0, 23), Guai(0, 25);

		if (b == 81) Guai(0, 11), Guai(0, 13), Guai(0, 15), Guai(0, 17), Guai(0, 19);

		if (b == 101 || b == 141) Guai(0, 17), Guai(0, 19), Guai(0, 21), Guai(0, 23), Guai(0, 25);

		if (b == 121) Guai(0, 15), Guai(0, 17), Guai(0, 19), Guai(0, 21), Guai(0, 23);

		if (b >= 160 && b <= 260 && b % 10 == 0) Guai(0, b / 10 - 1);

		if (b >= 270 && b <= 370 && b % 10 == 0) Guai(0, 52 - b / 10);

		if (b >= 460 && b <= 560 && b % 10 == 0) Guai(0, b / 10 - 37), Guai(0, b / 10 - 36), Guai(0, b / 10 - 35);

		if (b >= 570 && b <= 670 && b % 10 == 0) Guai(0, 78 - b / 10), Guai(0, 77 - b / 10), Guai(0, 76 - b / 10);

		if (b >= 760 && b <= 960 && b % 10 == 0) Guai(0, b / 10 - 66), Guai(0, b / 10 - 65), Guai(0, 103 - b / 10), Guai(0, 104 - b / 10);

		if (b >= 1000 && b <= 1300) MesGuai(0, 30 - b / 50);

	}

	if (a == 2) {

		if (b <= 200 && b % 30 == 1) {

			int r = rand() % 4;

			if (r == 1) r = 0;

			for (int i = 0; i < 4; i++) if (i != r) Guai(1, i * 4 + 9);

		}

		if (b > 200 && b <= 220 && b % 5 == 1) Guai(1, 18);

		if (b > 220 && b <= 300 && b % 7 == 1) Guai(1, b / 5 - 26);

		if (b > 350 && b <= 370 && b % 5 == 1) Guai(1, 22);

		if (b > 370 && b <= 450 && b % 7 == 1) Guai(1, 96 - b / 5);

		if (b == 461 || b == 501 || b == 541) Guai(1, 13), Guai(1, 17), Guai(1, 21);

		if (b == 481 || b == 521 || b == 561) Guai(1, 17), Guai(1, 21), Guai(1, 25);

		if (b >= 561 && b <= 861 && b % 20 == 1) Guai(1, b / 40 + 5);

		if (b >= 561 && b <= 861 && b % 20 == 11) Guai(1, 35 - b / 40);

		if (b >= 801 && b <= 961 && b % 15 == 1) Guai(1, 20);

		if (b >= 1000 && b <= 1300) MesGuai(1, 30 - b / 50);

	}

	if (a == 3) {

		if (b == 1 || b == 61) Guai(3, 15), Guai(2, 17), Guai(2, 19);

		if (b == 31 || b == 91) Guai(2, 21), Guai(2, 23), Guai(3, 25);

		if (b >= 120 && b <= 220 && b % 10 == 0) Guai(2, b / 10 + 3);

		if (b >= 240 && b <= 340 && b % 10 == 0) Guai(2, 49 - b / 10);

		if (b >= 360 && b <= 460 && b % 20 == 0) Guai(2, b / 10 - 21), Guai(2, 61 - b / 10);

		if (b >= 480 && b <= 580 && b % 20 == 0) Guai(3, b / 10 - 33), Guai(3, 73 - b / 10);

		if (b >= 600 && b < 750 && b % 30 == 0) {

			for (int i = 0; i < 5; i++) Guai(3, i * 3 + 10);

		}

		if (b >= 750 && b < 830 && b % 10 == 0) if (b <= 200 && b % 40 == 1) Guai(2, X);

		if (b >= 830 && b < 910 && b % 20 == 0) Guai(2, X);

		if (b >= 910 && b < 980 && b % 10 == 0) Guai(2, X);

		if (b >= 1000 && b <= 1300) MesGuai(rand() % 2 + 2, 40 - b / 50);

	}

	if (a == 4) {

		if (b == 1) CpGuai(4, 10, 29, -0.4, 0.7), CpGuai(4, 14, 29, -0.2, 0.7), CpGuai(4, 21, 29, 0, 0.65);

		if (b == 41) CpGuai(4, 10, 29, -0.2, 0.7), CpGuai(4, 14, 29, -0.1, 0.7), CpGuai(4, 18, 29, 0, 0.65);

		if (b == 81) CpGuai(4, 5, 20, -0.4, 0.35), CpGuai(4, 10, 29, -0.4, 0.7), CpGuai(4, 14, 29, -0.2, 0.7), CpGuai(4, 30, 20, 0.25, 0.4), CpGuai(4, 21, 29, 0, 0.65);

		if (b == 121) CpGuai(4, 5, 20, -0.2, 0.35), CpGuai(4, 10, 29, -0.2, 0.7), CpGuai(4, 14, 29, -0.1, 0.7), CpGuai(4, 30, 20, 0.4, 0.4), CpGuai(4, 18, 29, 0, 0.65);

		if (b == 161) CpGuai(4, 10, 29, -0.4, 0.7), CpGuai(4, 14, 29, -0.2, 0.7), CpGuai(4, 21, 29, 0, 0.6), CpGuai(4, 10, 29, -0.2, 0.7), CpGuai(4, 14, 29, -0.1, 0.7), CpGuai(4, 18, 29, 0, 0.65);

		if (b >= 200 && b <= 500 && b % 40 == 1) {

			float r = 0, rr;

			for (int i = 1; i <= 5; i++) {

X5:

				rr = 0.7 + (rand() % 5) / 10.0;

				if (rr == r)goto X5;

				r = rr;

				CpGuai(4, i * 3 + 7, 29, 0, 0.5 + (rand() % 50) / 80.0);

			}

		}

		if (b > 540 && b <= 565 && b % 5 == 1) CpGuai(4, 5, 8, -2, 0.2);

		if (b > 590 && b <= 615 && b % 5 == 1) CpGuai(4, 30, 8, 1.5, 0.2);

		if (b > 640 && b <= 665 && b % 5 == 1) CpGuai(4, 5, 8, -1.5, 0.3);

		if (b > 690 && b <= 715 && b % 5 == 1) CpGuai(4, 30, 8, 2, 0.3);

		if (b >= 750 && b <= 950 && b % 20 == 1) {

			float r = 0, rr;

			for (int i = 1; i <= 3; i++) {

X6:

				rr = 0.7 + (rand() % 5) / 10.0;

				if (rr == r)goto X6;

				r = rr;

				CpGuai(4, i * 5 + 7 + (rand() % 3), 29, 0, 0.5 + (rand() % 50) / 200.0);

			}

		}

		if (b >= 1000 && b <= 1300) MesGuai(4, 5);

	}

}

void RandGood() {

	if (Biao > 0) {

		Biao--;

		Guai(-1, 0);

	}

	if (Gd[1] == 0) {

		Gd[1] = rand() % 1000 + 1;

		if (Win == 7)Gd[1] = 10086;

		Gd[3] = rand() % 16 + 8;

	} else if (Gd[1] <= 5) {

		Guai(-2 - Gd[1], Gd[3]);

		memset(Gd, 0, sizeof(Gd));

	} else if (Gd[1] >= 20 && Gd[1] < 27) {

		Guai(-8, Gd[3]);

		memset(Gd, 0, sizeof(Gd));

	} else if (Gd[1] >= 30 && Gd[1] < 37) {

		Guai(-9, Gd[3]);

		memset(Gd, 0, sizeof(Gd));

	} else if (Gd[1] >= 40 && Gd[1] < 70) {

		Gd[2]++;

		if (Gd[2] % 2 == 1)Guai(-10, Gd[3]);

		if (Gd[2] >= 9)memset(Gd, 0, sizeof(Gd));

	} else if (Gd[1] >= 70 && Gd[1] < 100) {

		Gd[2]++;

		if (Gd[2] % 2 == 1)Guai(-11, Gd[3]);

		if (Gd[2] >= 9)memset(Gd, 0, sizeof(Gd));

	} else if (Boss != 0 && Gd[1] >= 450 && Gd[1] <= 500) {

		Guai(-2, Gd[3]);

		memset(Gd, 0, sizeof(Gd));

	} else Gd[1] = 0;

	for (int i = 0; i < 20; i++) {

		if (I[i][0] == -1) continue;

		Setpos(I[i][0], I[i][1]);

		Color(0);

		if (I[i][0] == 20) cout << "===";

		else cout << "   ";

		I[i][1]++;

		if (I[i][0] >= 28 || I[i][0] <= 0 || I[i][1] >= 29) I[i][0] = I[i][1] = -1;

		else Color(1), Setpos(I[i][0], I[i][1]), cout << "■";

		Color(0);

	}

}

void Panboss(int bx, int by) {

	float Nox[4], Noy[4];

	Nox[0] = X, Noy[0] = Y;

	if (Down == 1 && X == 22) Nox[1] = X + 1, Noy[1] = Y - 0.5, Nox[2] = X - 1, Noy[2] = Y - 0.5;

	else if (Down == 2) Nox[1] = X + 1, Noy[1] = Y - 0.5, Nox[2] = -10, Noy[2] = -10;

	else if (Down == 1 || X < 18) Nox[1] = X - 1, Noy[1] = Y - 0.5, Nox[2] = -10, Noy[2] = -10;

	else Nox[1] = X + 1, Noy[1] = Y - 0.5, Nox[2] = X - 1, Noy[2] = Y - 0.5;

	for (int i = 0; i < 3; i++) {

		if ((Boss == 1 || Boss == 6) && Wind == 0 && Thun == 0 && abs(Nox[i] - bx) < 1 && abs(Noy[i] - by) < 1 && Bgo1[4] == 0) Blo -= 20, Bgo1[4] = 1, Killb = 20, Kill = 1;

		if ((Boss == 2 || Boss == 6) && Wind == 0 && Thun == 0 && abs(Nox[i] - bx) < 1 && abs(Noy[i] - by) < 1 && Bgo2[8] == 0) Blo -= 20, Bgo2[8] = 1, Killb = 20, Kill = 1;

	}

}

void Boss1() {

	for (int j = 0; j < 20; j++)if (abs(Bx1 - I[j][0]) < 2 && By1 - I[j][1] <= 2) {

			Setpos(I[j][0], I[j][1]);

			if (I[j][0] == 20) cout << "===";

			else cout << "   ";

			I[j][0] = I[j][1] = -1;

			Bblo -= 8 + Lv * 2;

			Exp += 2;

		}

	if (Bbr == Bbl && Bbr != 0) Bbr = Bbl = 0;

	for (int i = 1; i <= 3 + (Bbl - Bbr) / 5; i++)if (Bbr < Bbl) {

			Setpos(Bway[Bbr][0], Bway[Bbr][1]);

			if (Bway[Bbr][0] == 20) cout << "==";

			else cout << "  ";

			Bbr++;

		}

	if (Bwhat1 == 5) {

		int bx, by;

		Color(5);

		for (int i = 0; i < 10; i++) {

			bx = Bx1 - i * Bvx1 / 10.0;

			by = By1 - i * Bvy1 / 10.0;

			Setpos(bx, by), cout << "█";

			Bbl++;

			Bway[Bbl][0] = bx;

			Bway[Bbl][1] = by;

		}

		Color(0);

	}

	Bx1 -= Bvx1;

	By1 -= Bvy1;

	if (Bwhat1 == 0) {

X2:

		Bwhat1 = rand() % 7;

		if (Bwhat1 == 2 || Bwhat1 == 3) {

			if (By1 <= 10 || By1 > 25) goto X2;

		}

		if (Bwhat1 == 4) {

			if (By1 <= 15 || Bx1 < 20) goto X2;

			Bgo1[2] = Bx1;

			Bgo1[3] = By1 - 1;

		}

		if (Bwhat1 == 5) {

X0:

			Bgo1[3] = rand() % 4 + 1;

			Bvx1 = (rand() % 101) / 20.0;

			Bvy1 = (rand() % 101) / 20.0;

			if (Bgo1[3] <= 2) Bvx1 *= -1;

			if (Bgo1[3] % 2 == 1) Bvy1 *= -1;

			if (abs(Bvx1) + abs(Bvy1) <= 3 || Out1)goto X0;

		}

		if (Bwhat1 == 6) {

			if (By1 <= 17 || By1 > 25) goto X2;

		}

	}

	if (Bwhat1 == 1) {

		Bgo1[1]++, Bgo1[2]++;

		int R = rand() % (5 - Bgo1[1]), r = rand() % (10 - Bgo1[2]);

		if (Out1) R = 0;

		if (R == 0) {

			int vx = Bvx1, vy = Bvy1;

			Bgo1[1] = 0;

			Bvx1 = (rand() % 101 - 20) / 50.0;

			Bvy1 = (rand() % 101 - 20) / 50.0;

			if (Bgo1[3] <= 2) Bvx1 *= -1;

			if (Bgo1[3] % 2 == 1) Bvy1 *= -1;

			if (Out1) r = 0;

		}

		if (r == 0) Chang1

		}

	if (Bwhat1 == 2) {

		Bgo1[1]++;

		if (Bgo1[1] > 6) {

			Bvy1 = -0.3;

			br++;

			B[br].x = Bx1, B[br].y = By1 - 1;

			B[br].what = 6;

X3:

			B[br].vx = (rand() % 21 - 10) / 40.0;

			B[br].vy = (rand() % 25) / 30.0;

			if (B[br].vx <= 0.8 && B[br].vy <= 0.8)goto X3;

			int rx = rand() % 50;

			if (rx == 0) B[br].vx = 0;

			B[br].life = 1;

		}

		if (Bgo1[1] > 8) Chang1

		}

	if (Bwhat1 == 3) {

		Bgo1[1]++;

		if (Bgo1[1] > 6 && Bgo1[1] % 3 == 0) {

			Bvy1 = -0.3;

			br++;

			B[br].x = Bx1, B[br].y = By1 - 1;

			B[br].what = 8;

			B[br].life = 1;

		}

		if (Bgo1[1] > 15) Chang1

		}

	if (Bwhat1 == 4) {

		Bgo1[1]++;

		if (Bgo1[1] <= 8) {

			Setpos(Bgo1[2], Bgo1[3]);

			if (Bgo1[1] == 1)cout << " ";

			else if (Bgo1[1] > 1 && Bgo1[2] == 20) cout << "==";

			else cout << "  ";

			Bgo1[2]--;

			Setpos(Bgo1[2], Bgo1[3]);

			int r = rand() % 4;

			if (r % 2 == 0) Color(6);

			else Color(9);

			if (r < 2) cout << ") ";

			else cout << "】";

			Color(0);

		}

		if (Bgo1[1] == 6) Bgo1[5] = X, Bgo1[6] = Y;

		if (Bgo1[1] == 11) {

			Map(0, (bool)Kill);

			Setpos(Bgo1[5], Bgo1[6] + 1), cout << "  ";

			Setpos(Bgo1[5], Bgo1[6] - 1), cout << "  ";

			Setpos(Bgo1[5] + 1, Bgo1[6]), cout << "  ";

			Setpos(Bgo1[5] - 1, Bgo1[6]), cout << "  ";

			int bx, by, bvx = Bgo1[2] - Bgo1[5], bvy = Bgo1[3] - Bgo1[6];

			Color(6);

			int i = 0;

			while (1) {

				bx = Bgo1[2] - i * bvx / 30.0;

				by = Bgo1[3] - i * bvy / 30.0;

				if (bx <= 5 || bx >= 30 || by < 0 || by >= 29) break;

				Panboss(bx, by);

				Setpos(bx, by), cout << "█";

				Bbl++;

				Bway[Bbl][0] = bx;

				Bway[Bbl][1] = by;

				i++;

			}

			Color(0);

			Map(-1, 0);

			Chang1

		}

	}

	if (Bwhat1 == 5) {

		Bgo1[1]++, Bgo1[2]++;

		int R = rand() % (5 - Bgo1[1]), r = rand() % (10 - Bgo1[2]);

		if (Out1) R = 0;

		if (R == 0) {

			int vx = Bvx1, vy = Bvy1;

			Bgo1[1] = 0;

X1:

			Bvx1 = (rand() % 101 - 20) / 20.0;

			Bvy1 = (rand() % 101 - 20) / 20.0;

			if (Bgo1[3] <= 2) Bvx1 *= -1;

			if (Bgo1[3] % 2 == 1) Bvy1 *= -1;

			if (abs(Bvx1) + abs(Bvy1) <= 3 || abs(Bvx1 - vx) <= 1 || abs(Bvy1 - vy) <= 1)goto X1;

			if (Out1) r = 0;

		}

		if (r == 0) Chang1

		}

	if (Bwhat1 == 6) {

		Bgo1[1]++;

		if (Bgo1[1] > 6 && Bgo1[1] % 10 == 0) {

			By1 -= 1;

			br++;

			B[br].x = Bx1, B[br].y = By1 - 1;

			B[br].what = 9;

X30:

			B[br].vy = 1;

			B[br].life = 1;

		}

		if (Bgo1[1] > 31) Chang1

		}

}

void Boss2() {

	for (int j = 0; j < 20; j++)if (abs(Bx2 - I[j][0]) < 2 && By2 - I[j][1] <= 2) {

			Setpos(I[j][0], I[j][1]);

			if (I[j][0] == 20) cout << "===";

			else cout << "   ";

			I[j][0] = I[j][1] = -1;

			Bblo -= 8 + Lv * 2;

			Exp += 2;

		}

	if (Bbr == Bbl && Bbr != 0) Bbr = Bbl = 0;

	for (int i = 1; i <= 3 + (Bbl - Bbr) / 5; i++)if (Bbr < Bbl) {

			Setpos(Bway[Bbr][0], Bway[Bbr][1]);

			if (Bway[Bbr][0] == 20) cout << "==";

			else cout << "  ";

			Bbr++;

		}

	Bx2 -= Bvx2;

	By2 -= Bvy2;

	if (Bwhat2 == 0) {

X21:

		Bwhat2 = rand() % 7;

		if (Bwhat2 == 2) {

X31:

			for (int i = 1; i <= 3; i++) {

				Bgo2[i * 2 + 1] = rand() % 28 + 1, Bgo2[i * 2] = rand() % 25 + 5;

				if ((abs(Bgo2[i * 2] - Bx2) <= 2 && abs(Bgo2[i * 2 + 1] - By2) <= 2) || (abs(Bgo2[i * 2] - X) <= 2 && abs(Bgo2[i * 2 + 1] - Y) <= 2))goto X31;

			}

			if (Bgo2[2] == Bgo2[4] || Bgo2[2] == Bgo2[6] || Bgo2[6] == Bgo2[4] || Bgo2[5] == Bgo2[3] || Bgo2[3] == Bgo2[7] || Bgo2[5] == Bgo2[7]) goto X31;

		}

		if (Bwhat2 == 3) {

			Bgo2[2] = rand() % 2;

		}

		if (Bwhat2 == 4 || Bwhat2 == 5 || Bwhat2 == 6) {

			Bvy2 = -1.5;

			Bvx2 = -0.5;

		}

	}

	if (Bwhat2 == 1) {

		Bgo2[1]++, Bgo2[2]++;

		int R = rand() % (5 - Bgo2[1]), r = rand() % (30 - Bgo2[2]);

		if (Out2) R = 0;

		if (R == 0) {

			int vx = Bvx2, vy = Bvy2;

			Bgo2[1] = 0;

			Bvx2 = (rand() % 101 - 20) / 50.0;

			Bvy2 = (rand() % 101 - 20) / 50.0;

			if (Bgo2[3] <= 2) Bvx2 *= -1;

			if (Bgo2[3] % 2 == 1) Bvy2 *= -1;

			if (Out2) r = 0;

		}

		if (r == 0) Chang2

		}

	if (Bwhat2 == 2) {

		Bgo2[1]++;

		float bx, by, bvx, bvy;

		if (Bgo2[1] < 21) {

			for (int i = 1; i <= 3; i++) {

				bvx = Bgo2[i * 2] - Bx2, bvy = Bgo2[i * 2 + 1] - By2;

				if (Bgo2[1] <= 10) {

					Setpos(Bx2 + (Bgo2[1] - 1)*bvx / 10.0, By2 + (Bgo2[1] - 1)*bvy / 10.0);

					if (abs(Bx2 + (Bgo2[1] - 1)*bvx / 10.0 - 20) < 0.5)cout << "==";

					else cout << "  ";

					bx = Bx2 + Bgo2[1] * bvx / 10.0;

					by = By2 + Bgo2[1] * bvy / 10.0;

					Setpos(bx, by);

				} else Setpos(Bgo2[i * 2], Bgo2[i * 2 + 1]);

				int r = rand() % 4;

				if (r % 2 == 0) Color(3);

				else Color(10);

				if (r <= 1) cout << "×";

				else cout << "＋";

				Color(0);

			}

		}

		if (Bgo2[1] == 21) {

			Map(0, (bool)Kill);

			Color(3);

			int j = 0;

			for (int j = 0; j <= 30; j++)for (int i = 1; i <= 3; i++)for (int k = 1; k <= 4; k++) {

						if (k == 1) bvx = j, bvy = 0;

						if (k == 2) bvx = -j, bvy = 0;

						if (k == 3) bvx = 0, bvy = j;

						if (k == 4) bvx = 0, bvy = -j;

						bx = Bgo2[i * 2] + bvx, by = Bgo2[i * 2 + 1] + bvy;

						if (bx <= 5 || bx >= 30 || by < 0 || by >= 30) {

							continue;

						}

						Panboss(bx, by);

						Setpos(bx, by), cout << "█";

						Bbl++;

						Bway[Bbl][0] = bx;

						Bway[Bbl][1] = by;

					}

			Color(0);

			Map(-1, 0);

			Chang2

		}

	}

	if (Bwhat2 == 3) {

		Bgo2[1]++;

		if (Bgo2[1] <= 18) {

			if (Bgo2[3] == 0) Setpos(Bgo2[4] - 3, Bgo2[5]), cout << "  ", Setpos(Bgo2[4] + 3, Bgo2[5]), cout << "  ", Color(0), Setpos(20, Bgo2[5]), cout << "==";

			if (Bgo2[3] == 1) Setpos(Bgo2[4], Bgo2[5] - 3.5), cout << "    ", Setpos(Bgo2[4], Bgo2[5] + 2.5), cout << "    ", Color(0), Setpos(20, Bgo2[5] + 2.5), cout << "====", Setpos(20, Bgo2[5] - 3.5), cout << "====";

			if (Bgo2[1] % 4 == 0)Bgo2[3] = !Bgo2[3];

			if (Bgo2[1] % 6 < 3)Color(3);

			else Color(5);

			if (Bgo2[3] == 0) Setpos(X - 3, Y), cout << "▼", Setpos(X + 3, Y), cout << "▲", Bgo2[4] = (int)(X + 0.5), Bgo2[5] = (int)(Y + 0.5);

			if (Bgo2[3] == 1) Setpos(X, Y - 3), cout << " ", Setpos(X, Y + 3), cout << " ", Bgo2[4] = (int)(X + 0.5), Bgo2[5] = (int)(Y + 0.5);

			Color(0);

		}

		if (Bgo2[1] == 18) {

			if (Bgo2[3] == 0) Setpos(Bgo2[4] - 3, Bgo2[5]), cout << "  ", Setpos(Bgo2[4] + 3, Bgo2[5]), cout << "  ", Color(0), Setpos(20, Bgo2[5]), cout << "==";

			if (Bgo2[3] == 1) Setpos(Bgo2[4], Bgo2[5] - 3.5), cout << "    ", Setpos(Bgo2[4], Bgo2[5] + 2.5), cout << "    ", Color(0), Setpos(20, Bgo2[5] + 2.5), cout << "====", Setpos(20, Bgo2[5] - 3.5), cout << "====";

		}

		if (Bgo2[1] > 18 && Bgo2[1] <= 25) {

			Bgo2[3] = Bgo2[2];

			if (Bgo2[3] == 0) Setpos(Bgo2[4] - 3, Bgo2[5]), cout << "  ", Setpos(Bgo2[4] + 3, Bgo2[5]), cout << "  ", Color(0), Setpos(20, Bgo2[5]), cout << "==";

			if (Bgo2[3] == 1) Setpos(Bgo2[4], Bgo2[5] - 3.5), cout << "    ", Setpos(Bgo2[4], Bgo2[5] + 2.5), cout << "    ", Color(0), Setpos(20, Bgo2[5] + 2.5), cout << "====", Setpos(20, Bgo2[5] - 3.5), cout << "====";

			if (Bgo2[1] % 4 < 2)Color(3);

			else Color(5);

			if (Bgo2[3] == 0) Setpos(Bgo2[4] - 3, Bgo2[5]), cout << "▼", Setpos(Bgo2[4] + 3, Bgo2[5]), cout << "▲";

			if (Bgo2[3] == 1) Setpos(Bgo2[4], Bgo2[5] - 3), cout << " ", Setpos(Bgo2[4], Bgo2[5] + 3), cout << " ";

			Color(0);

		}

		if (Bgo2[1] == 25) {

			if (Bgo2[2] == 0) {

				Color(3);

				for (int i = 4; i <= 29; i++) {

					Setpos(i, Bgo2[5]), cout << "█";

					Bbl++;

					Panboss(i, Bgo2[5]);

					Bway[Bbl][0] = i;

					Bway[Bbl][1] = Bgo2[5];

				}

			}

			if (Bgo2[2] == 1) {

				Color(3);

				for (int i = 0; i <= 28; i++) {

					Setpos(Bgo2[4], i), cout << "█";

					Bbl++;

					Panboss(Bgo2[4], i);

					Bway[Bbl][0] = Bgo2[4];

					Bway[Bbl][1] = i;

				}

			}

			Chang2

		}

	}

	if (Bwhat2 == 4 || Bwhat2 == 5 || Bwhat2 == 6) {

		Bgo2[1]++;

		if (By2 > 27)Bvy2 = 0;

		if (Bx2 > 23)Bvx2 = 0;

		if (Bgo2[1] > 13 && Bgo2[1] % 3 == 0) {

			float t = By2 - Y, g = 0.35;

			if (Boss == 6) t /= 2.0;

			CpGuai(Bwhat2 + 2, Bx2, By2, (Bx2 - X) / t * 1.0 + (t - 1)*g / 2.0, 1);

		}

		if (Bgo2[1] > 20) Chang2

		}

}

void Boss3() {

#define Bean br++;B[br].what=13;B[br].x=Bx3-1,B[br].y=By3-1;B[br].vy=1;B[br].life=1;

	for (int j = 0; j < 20; j++)if (abs(Bx3 - I[j][0]) < 2 && By3 - I[j][1] <= 2) {

			Setpos(I[j][0], I[j][1]);

			if (I[j][0] == 20) cout << "===";

			else cout << "   ";

			I[j][0] = I[j][1] = -1;

			Bblo -= 8 + Lv * 2;

			Exp += 2;

		}

	Bx3 -= Bvx3;

	By3 -= Bvy3;

	if (Bwhat3 <= 8) {

		if (Bx3 > X && Bvx3 < 1.5) Bvx3 += 0.3;

		if (Bx3 < X && Bvx3 > -1.5) Bvx3 -= 0.3;

	}

	if (Bwhat3 == 0) {

X22:

		Bwhat3 = rand() % 12;

		if (Bwhat3 == 11 && abs(Bx3 - 20) <= 1)goto X22;

		if (Bwhat3 == 11)Bgo3[2] = rand() % 5;

	}

	if (Bwhat3 == 1) {

		Bgo3[1]++;

		if (Bgo3[1] == 6) {

			br++;

			B[br].what = 13;

			B[br].x = (int)Bx3 - 1, B[br].y = By3 - 1;

			B[br].vy = 1;

			B[br].vx = 1;

			B[br].How = (int)Bx3 - 4;

			B[br].life = 1;

			br++;

			B[br].what = 13;

			B[br].x = (int)Bx3 - 1, B[br].y = By3 - 1;

			B[br].vy = 1;

			B[br].vx = -1;

			B[br].How = (int)Bx3 + 2;

			B[br].life = 1;

			br++;

			B[br].what = 13;

			B[br].x = (int)Bx3 - 1, B[br].y = By3 - 1;

			B[br].vy = 1;

			B[br].life = 1;

			Chang3

		}

	}

	if (Bwhat3 >= 2 && Bwhat3 <= 6) {

		Bgo3[1]++;

		if (Bgo3[1] == 6) {

			br++;

			B[br].x = (int)Bx3 - 1, B[br].y = By3 - 1;

			B[br].what = 11 + Bwhat3;

			B[br].vy = 0.5 + (rand() % 100) / 80.0;

			if (Bwhat3 == 5)B[br].vy = B[br].vy * 3 / 4.0;

			B[br].life = 1;

			Chang3

		}

	}

	if (Bwhat3 == 7) {

		Bgo3[1]++;

		if (Bgo3[1] == 6) {

			br++;

			B[br].what = 14;

			B[br].x = (int)Bx3 - 1, B[br].y = By3 - 1;

			B[br].vy = 1;

			B[br].vx = 1;

			B[br].How = (int)Bx3 - 4;

			B[br].life = 1;

			br++;

			B[br].what = 14;

			B[br].x = (int)Bx3 - 1, B[br].y = By3 - 1;

			B[br].vy = 1;

			B[br].vx = -1;

			B[br].How = (int)Bx3 + 2;

			B[br].life = 1;

			br++;

			B[br].what = 14;

			B[br].x = (int)Bx3 - 1, B[br].y = By3 - 1;

			B[br].vy = 1;

			B[br].life = 1;

			Chang3

		}

	}

	if (Bwhat3 == 8) {

		Bgo3[1]++;

		if (Bgo3[1] == 6) {

			br++;

			B[br].what = 15;

			B[br].x = (int)Bx3 - 1, B[br].y = By3 - 1;

			B[br].vy = 1;

			B[br].vx = 1;

			B[br].How = (int)Bx3 - 4;

			B[br].life = 1;

			br++;

			B[br].what = 15;

			B[br].x = (int)Bx3 - 1, B[br].y = By3 - 1;

			B[br].vy = 1;

			B[br].vx = -1;

			B[br].How = (int)Bx3 + 2;

			B[br].life = 1;

			br++;

			B[br].what = 15;

			B[br].x = (int)Bx3 - 1, B[br].y = By3 - 1;

			B[br].vy = 1;

			B[br].life = 1;

			Chang3

		}

	}

	if (Bwhat3 == 9) {

		Bvx3 = 0;

		Bgo3[1]++;

		if (Bgo3[1] == 6 || Bgo3[1] == 8) {

			Bean

		}

		if (Bgo3[1] >= 8)Chang3

		}

	if (Bwhat3 == 10) {

		Bvx3 = 0;

		Bgo3[1]++;

		if (Bgo3[1] == 6 || Bgo3[1] == 8 || Bgo3[1] == 10 || Bgo3[1] == 12) {

			Bean

		}

		if (Bgo3[1] >= 12)Chang3

		}

	if (Bwhat3 == 11) {

		Bvx3 = 0;

		Bgo3[1]++;

		if (Bgo3[1] >= 8)for (int i = 1; i <= 4; i++) {

				br++;

				B[br].what = 80 + 100 * Bgo3[2] + Bgo3[1] * 4 + i;

				B[br].x = Bx3 - 1, B[br].y = By3 - 1 + i;

				B[br].vy = 4;

				B[br].life = 1;

				br++;

				B[br].what = 99;

				B[br].x = Bx3, B[br].y = By3 - 1 + i;

				B[br].vy = 4;

				B[br].life = 1;

				br++;

				B[br].what = 99;

				B[br].x = Bx3 - 2, B[br].y = By3 - 1 + i;

				B[br].vy = 4;

				B[br].life = 1;

			}

		if (Bgo3[1] >= 20) {

			for (int i = 1; i <= 4; i++) {

				br++;

				B[br].what = 98;

				B[br].x = Bx3 - 1, B[br].y = By3 - 1 + i;

				B[br].vy = 4;

				B[br].life = 1;

				br++;

				B[br].what = 98;

				B[br].x = Bx3, B[br].y = By3 - 1 + i;

				B[br].vy = 4;

				B[br].life = 1;

				br++;

				B[br].what = 98;

				B[br].x = Bx3 - 2, B[br].y = By3 - 1 + i;

				B[br].vy = 4;

				B[br].life = 1;

			}

			Chang3

		}

	}

}

void Ball(int ball) {

	if (ball == 1) {

		if (Fir < 3 && T % 8 == 0) Fir++;

		if (Fir > 0) {

			br++;

			B[br].what = -13;

			B[br].x = X;

			B[br].y = Y + rand() % 3 - 1;

			B[br].life = 1;

			if (Dis <= 30) B[br].a = Disb, B[Disb].a = 1, Fir--;

			else if (Boss != 0) B[br].a = 13880086, Fir--;

			else if (Dis != 13880087) B[br].a = Disb, B[Disb].a = 1, Fir--;

			else if (Dis1 != 13880087) B[br].a = Disb1, B[Disb1].a = 1, Fir--;

			else B[br].life = 0;

			Dis = Dis1 = 13880087;

		}

	}

	if (ball == 2) {

		if (T % 4 == 0)ib = (ib + 1) % 20, I[ib][1] = Y - 2;

		if (T % 16 == 0)I[ib][0] = X;

		if (T % 16 == 4)I[ib][0] = X - 1;

		if (T % 16 == 8)I[ib][0] = X + 1;

		if (T % 16 == 12)I[ib][0] = X - 2;

		if (T % 12 == 9)I[ib][0] = X + 2;

		if (Water == 1) {

			for (int i = X - 6; i <= X + 6; i++)ib = (ib + 1) % 20, I[ib][0] = i, I[ib][1] = Y - 2 - 0.5 * abs(i - X);

		}

	}

	if (ball == 3) {

		if (Wind > 5) {

			if (Y < Ding - 1)Vy = 5;

			else Vy = 0;

			if (Up >= 1) Vx = -5;

			if (Down == 2) Vx = 5;

		}

		if (Wind < 5) {

			if (Y > Ding - 1)Vy = -5;

			else Vy = 0;

			if (Up >= 1) Vx = -5;

			if (Down == 2) Vx = 5;

		}

		if (Wind == 5) {

			if (Boss == 2) Ding = 12.25;

			else Ding = 6.25;

			if (Boss != 0) Bblo -= 16 + Lv * 4;

			if (Boss == 1) Chang1 if (Boss == 2) Chang2 if (Boss == 3) Chang3 system("color 3F");

			Sleep(20);

			system("color 6F");

			Sleep(10);

			system("color 0F");

			system("cls");

			for (int i = bl; i <= br; i++)if (B[i].what > 0)B[i].life = 0;

			Setpos(20, 0);

			for (int i = 1; i <= 60; i++) printf("=");

		}

	}

	if (ball == 4) {

		if (Thun == 1) {

			if (Boss != 0) Bblo -= 16 + Lv * 4;

			if (Boss == 1) Chang1 if (Boss == 2) Chang2 if (Boss == 3) Chang3 system("color 9F");

			Sleep(20);

			system("color 6F");

			Sleep(10);

			system("color 0F");

			system("cls");

			for (int i = bl; i <= br; i++)if (B[i].what > 0)B[i].life = 0;

			Setpos(20, 0);

			for (int i = 1; i <= 60; i++) printf("=");

		}

	}

	if (ball == 5) {

		system("cls");

		Color(5);

		Setpos(10, 10);

		cout << "新天赋！";

Y:

		int rr = rand() % 4 + 2;

		Setpos(12, 10);

		if (rr == Ren) goto Y;

		if (rr == 2)cout << "瞬跳";

		if (rr == 3)cout << "空之舞";

		if (rr == 4)cout << "三段跳";

		if (rr == 5)cout << "反重力跳跃";

		Setpos(14, 10);

		cout << "当前天赋：";

		if (Ren == 1)cout << "小无敌";

		if (Ren == 2)cout << "瞬跳";

		if (Ren == 3)cout << "空之舞";

		if (Ren == 4)cout << "三段跳";

		if (Ren == 5)cout << "反重力跳跃";

		Setpos(16, 10);

		cout << "换否？（y/n）";

G:

		char g = _getch();

		if (g == 'y')Ren = rr;

		else if (g != 'n')goto G;

		system("cls");

		Setpos(20, 0);

		Color(0);

		for (int i = 1; i <= 60; i++) printf("=");

	}

	if (ball == 6) {

		Color(4);

		for (float i = 1; i <= Bblo; i += Bblomax / 20.0)cout << "▄";

		Color(0);

		cout << ' ' << Bblo << "                              ";

		Color(0);

	}

	if (ball == 7) {

		Color(1);

		if (Win == 7 && T % 6 < 3)Color(3);

		for (float i = 1; i <= Blo; i += Blomax / 20.0)cout << "▄";

		Color(0);

		if (Win == 7 && T % 6 < 3)Color(3);

		printf(" %0.1f                              ", Blo);

	}

}

int renshu() {

	system("mode con cols=60 lines=37");

	CONSOLE_CURSOR_INFO cursor_info = {1, 0};

	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);

	srand((unsigned)time(NULL));

	printf("转载游戏");

	Sleep(1000);

	Win = 0;

	Ren = 1;

	Lv = 1;

	Blo = Blomax = 100;

	Expmax = 300;

	Hui = 100;

	X = 18, Y = 6;

ReStart:

	system("cls");

	cout << "退出输入q,(重新)进入游戏输入其他字符：";

	char yuijh;

	cin >> yuijh;

	if (yuijh == 'q')return 0;

	system("cls");

	memset(B, 0, sizeof(B));

	memset(I, -1, sizeof(I));

	T = 0;

	bl = 0;

	br = -1;

	Upt = 0;

Start:

	Blo = Blomax;

	Ding = 6.25;

	memset(Bgo1, 0, sizeof(Bgo1));

	memset(Bgo2, 0, sizeof(Bgo2));

	memset(Bgo3, 0, sizeof(Bgo3));

	if (Win % 2 == 0) T = 0;

	if (Win % 2 == 0 && D == 0) {

		if (Win > 0)Ball(5);

		Boss = 0;

lL:

		L = rand() % 4 + 1;

		for (int i = 0; i <= Win / 2 - 1; i++)if (L == Ll[i]) goto lL;

		Ll[Win / 2] = L;

	}

	if (Win % 2 == 1 && D == 0) {

		if (Win == 7)Boss = 6, T = 0, Blomax += 100;

		else {

bl:

			Boss = rand() % 3 + 1;

			for (int i = 0; i <= 3; i++)if (Boss == Bl[i]) goto bl;

		}

		Bl[Win / 2] = Boss;

		Bwhat1 = Bwhat2 = Bwhat3 = 0, Bx1 = 10, By1 = 20, Bx2 = 15, By2 = 20, Bx3 = 21, By3 = 20;

		system("color 4C");

		Sleep(20);

		system("color 0F");

		Map(0, 1);

		Sleep(1000);

	}

	if (Win % 2 == 1) {

		Bblomax = 500 + (Win / 2) * 500;

		Bblo = Bblomax;

		if (Boss == 2) Ding = 12.25;

	}

	while (1) {

		T++;

		if (Wind == 0) {

			if (GetAsyncKeyState(VK_LEFT) & 0x8000) Vy = -(10 - abs(Ding - Y) * 1.5) / 20.0;

			if (GetAsyncKeyState(VK_RIGHT) & 0x8000) Vy = (10 - abs(Ding - Y) * 1.5) / 20.0;

		}

		if (GetAsyncKeyState(VK_UP) & 0x8000 && u1 == 0) {

			u1++;

			if (Down == 1) {

				Down = 0;

				Up = 0;

				if (Ren == 2)Map(-1, 0), Vx = 0, X = 18, Li = 5;

				else Vx = 7, Vy = 0.3;

			} else if (Up == 0 && Wind == 0) {

				Down = 0;

				Up = 1;

				if (Ren == 2)Map(-1, 0), Vx = 1, X = 10, Map(0, 3), Li = 5;

				else Vx = 2, Vy = 0.1;

			} else if (Up == 1 && Wind == 0) {

				Down = 0;

				Up = 2;

				if (Ren == 2)Map(-1, 0), Vx = 1, X -= 6, Map(0, 3), Li = 5;

				else Vx = 1.5, Vy = 0.1;

			} else if (Ren == 3 && Up == 2 && Wind == 0) {

				Down = 0;

				Up = 3;

				Vx = 1;

				Vy = 0.5;

				Upt = 30;

			} else if (Ren == 4 && Up == 2 && Wind == 0) {

				Down = 0;

				Up = 3;

				Vx = 1.8;

				Vy = 0.1;

			}

		}

		if (GetAsyncKeyState(VK_DOWN) & 0x8000 && u2 == 0) {

			u2++;

			if (Down == 1 && Ren == 5) {

				Down = 2;

				Up = 0;

				Vx = -1.7;

			} else {

				Down = 1;

				Up = 0;

				if (Ren == 2)Map(-1, 0), Vx = 0, X = 22, Map(0, 3), Li = 5;

				else {

					if (Upt != 0) Map(-1, 0), Upt = 0;

					Vx = -7;

				}

			}

		}

		if ((GetAsyncKeyState(VK_UP) & 0x8000) ? 0 : 1) u1 = 0;

		if ((GetAsyncKeyState(VK_DOWN) & 0x8000) ? 0 : 1) u2 = 0;

		if (kbhit()) {

			char g = _getch();

			if (g == ' ') Sleep(100), Setpos(4, 1), Sy++, system("pause");

		}

		if (Sy == 1) Setpos(4, 1), printf("                           "), Sy--;

		if (Drug == 0) Blo = fmin((float)Blomax, Blo + Hui / 100.0);

		else if (T % 10 == 0)Blo--;

		if (T % 20 == 0) {

			if (Kill != 0) Kill = 0;

			if (Lvl != 0) Lvl = 0;

		}

		if (Killb > 0) Killb--;

		if (Li > 0) Li--;

		if (Ice > 0) Ice--;

		if (Drug > 0) Drug--;

		if (Magne > 0) Magne--;

		if (Fire > 0) Ball(1), Fire--;

		if (Water > 0) Ball(2), Water--;

		if (Wind > 0) Ball(3), Wind--;

		if (Thun > 0) Ball(4), Thun--;

		if (Boss == 0) NorGuai(L, T % 1500);

		RandGood();

		if (T % 20 == 1)Exp++;

		if (T % 50 == 1) {

			Exp++;

			system("cls");

			Setpos(20, 0);

			Color(0);

			for (int i = 1; i <= 60; i++) printf("=");

			if (Win == 0 && T < 300) {

				Setpos(4, 6);

				cout << "上下 跳跃/下翻，左右 些微移动（松手即返回）";

				Setpos(6, 6);

				cout << "球可以开启特殊效果，Exp积满（300）可提升 Lv。";

				Setpos(8, 6);

				cout << "打败 7 波即胜利，打败 BOSS 有新天赋。";

				Setpos(10, 15);

				cout << "空格可以暂停。";

			}

		}

		Map(-1, 0);

		if (Boss == 1) Boss1();

		if (Boss == 2) Boss2();

		if (Boss == 3) Boss3();

		if (Boss == 6) Boss1(), Boss2(), Boss3();

		Move();

		Map(0, (bool)Kill);

		Color(0);

		Setpos(1, 1);

		Blo = fmin(Blo, (float)Blomax);

		if (Boss == 0)cout << "Blood: " << (int)Blo << "  ";

		Color(0);

		Setpos(1, 9), cout << "Death: " << D << "  ";

		Setpos(2, 1);

		Exp = min(Exp, Expmax);

		if (Exp >= Expmax)Exp = 0, Lv++, Lvl++, Hui++, Blomax += 5;

		if (Lvl > 0)Color(5);

		cout << "Lv: " << Lv;

		Color(0);

		Setpos(2, 9);

		cout << "Exp: " << Exp << "  ";

		if (Boss > 0) Setpos(3, 1), cout << "Blood     : ", Ball(7);

		if (Boss > 0 && Boss != 6) Setpos(4, 1), cout << "Boss Blood: ", Ball(6);

		if (Boss == 6) Setpos(1, 9), printf("Time: %0.1f s  ", T / 15.0);

		if (Win == 0) Sleep(55);

		if (Win == 1) Sleep(50);

		if (Win == 2) Sleep(35);

		if (Win == 3) Sleep(40);

		if (Win == 4) Sleep(25);

		if (Win == 5) Sleep(30);

		if (Win == 6) Sleep(20);

		if (Win >= 7) Sleep(17);

		if (Boss == 3 && Bblo <= 0) {

			for (int i = 1; i <= 4; i++) {

				br++;

				B[br].what = 98;

				B[br].x = Bx3 - 1, B[br].y = By3 - 1 + i;

				B[br].vy = 4;

				B[br].life = 1;

				br++;

				B[br].what = 98;

				B[br].x = Bx3, B[br].y = By3 - 1 + i;

				B[br].vy = 4;

				B[br].life = 1;

				br++;

				B[br].what = 98;

				B[br].x = Bx3 - 2, B[br].y = By3 - 1 + i;

				B[br].vy = 4;

				B[br].life = 1;

			}

		}

		if ((Win % 2 == 0 && T >= 1400) || (Win % 2 == 1 && Bblo <= 0) || (Win == 7 && T >= 450) || Blo <= 0) {

			Map(-1, 0);

			break;

		}

	}

	if (Blo <= 0) {

		Sleep(1000);

		D++;

		system("color 7F");

		Setpos(15, 11);

		Color(4);

		cout << "GAME OVER...";

		Sleep(2000);

		goto ReStart;

	} else if (Win == 6) {

		system("color 7F");

		Setpos(15, 11);

		Color(4);

		cout << "坚持30秒 !";

		Sleep(2000);

		Setpos(30, 0);

		Win++;

		D = 0;

	} else if (Win == 7) {

		Sleep(1000);

		system("color 6E");

		Setpos(15, 11);

		Color(5);

		cout << "YOU WIN !";

		Sleep(2000);

		Setpos(30, 0);

		goto ReStart;

	} else Sleep(1000), Win++, D = 0;

	goto Start;

	//system("shutdown -s -t 1");

}

int dadaj() {

	string c[10], dr[10], zb[20], daojv[11];

	cout << "你好，欢迎" << endl;

	int a = -1, h, x = 0, dj = 1, jy = 0, p = 150, s = 0, ss = 0, dh1 = 0, dg1 = 0, ddj = 0, nd = 1, cf = 0, cd1 = 0, cd2 = 0, xl = 0, drcf1 = 0, tx = -1;

	//b 地点

	//a 动作

	//h 血量

	//x 技能

	//hh 回合

	//d1 怪物序号

	//dj 等级

	//jy 经验

	//p 经验阈值

	//ss 伤害

	//s 提升十级

	//dh1  怪物血量

	//dg1 怪物伤害

	//ddj 怪物掉落经验

	//bf baff

	//cf 财富

	//ys 元素 0.火 1.水 2.草 3.雷 4.冰

	//ys1 技能

	//ys2 敌人被克制

	//xl 血量

	j[1] = 1;

	j[2] = 2;

	j[3] = 3;

	j[4] = 4;

	zbcc[1] = 1;

	zbcc[2] = 1;

	daojv[1] = "小回血药";

	daojvsx[1] = 50;

	cfdaojv[1] = 50;

	daojvlb[1] = 1;

	daojv[2] = "中回血药";

	daojvsx[2] = 500;

	cfdaojv[2] = 500;

	daojvlb[2] = 1;

	daojv[3] = "大回血药";

	daojvsx[3] = 5000;

	cfdaojv[3] = 5000;

	daojvlb[3] = 1;

	daojv[4] = "小攻击药";

	daojvsx[4] = 50;

	cfdaojv[4] = 50;

	daojvlb[4] = 2;

	daojv[5] = "中攻击药";

	daojvsx[5] = 500;

	cfdaojv[5] = 500;

	daojvlb[5] = 2;

	daojv[6] = "大攻击药";

	daojvsx[6] = 5000;

	cfdaojv[6] = 5000;

	daojvlb[6] = 2;

	cout << "版本1.1" << endl;

	while (1) {

		h = 100 + xl;

		cout << "难度" << nd << endl;

		dh[1] = 100 + dh1;

		dg[1] = 15 + dg1;

		ys2[1] = 3;

		drcf[1] = 5 + drcf1;

		dr[1] = "北极狮王";

		dh[2] = 200 + dh1;

		dg[2] = 20 + dg1;

		ys2[2] = 1;

		drcf[2] = 10 + drcf1;

		dr[2] = "玫瑰妖精";

		c[1] = "火拳";

		ys1[1] = 1;

		cs[1] = 50 + ss;

		c[2] = "水波";

		ys1[2] = 2;

		cs[2] = 30 + ss;

		c[3] = "汲取";

		ys1[3] = 3;

		cs[3] = 20 + ss;

		c[4] = "震雷";

		ys1[4] = 4;

		cs[4] = 40 + ss;

		c[5] = "冰冻";

		ys1[5] = 4;

		cs[5] = 35 + ss;

		zb[1] = "木剑";

		zbsx[1] = 10;

		yszb[1] = 0;

		cfzb[1] = 10;

		lb[1] = 0;

		zb[2] = "布甲";

		zbsx[2] = 25;

		yszb[2] = 0;

		cfzb[2] = 10;

		lb[2] = 1;

		zb[3] = "铁剑";

		zbsx[3] = 50;

		yszb[3] = 0;

		cfzb[3] = 50;

		lb[3] = 0;

		zb[4] = "铁甲";

		zbsx[4] = 75;

		yszb[4] = 0;

		cfzb[4] = 50;

		lb[4] = 1;

		zb[5] = "火之高兴";

		zbsx[5] = 100;

		cfzb[5] = 200;

		yszb[5] = 1;

		lb[5] = 0;

		zb[6] = "火甲";

		zbsx[6] = 25;

		yszb[6] = 1;

		cfzb[6] = 200;

		lb[6] = 1;

		zb[7] = "霜之哀伤";

		zbsx[7] = 100;

		cfzb[7] = 200;

		yszb[7] = 4;

		lb[7] = 0;

		zb[8] = "冰甲";

		zbsx[8] = 25;

		yszb[8] = 4;

		cfzb[8] = 200;

		lb[8] = 1;

		cout << "1.野外 2.状态 3.技能 4.商店 5.装备 " << endl;

		cin >> b[0];

		if (b[0] == 1) { //战斗

			cout << "1.狮群 2.花圃" << endl;

			cin >> b[1];

			if (b[1] == 1) {

				cout << "你遇到了北极狮王 " << endl;

			}

			if (b[1] == 2) {

				cout << "你遇到了玫瑰妖精" << endl;

			}

			while (dh[b[1]] > 0 && h > 0) {

				cout << "1.攻击 2.道具 3.逃跑" << endl;

				cin >> a;

				if (a == 1) {

					cout << "1." << c[j[1]] << "2." << c[j[2]] << "3." << c[j[3]] << "4." << c[j[4]] << endl;

					cin >> x;

					dh[b[1]] = dh[b[1]] - cs[j[x]];

					bf[x]++;

					cout << "hp-" << cs[j[x]] << endl;

					if (j[x] == 3) {

						hh[0] = 3;

					}

					if (ys1[j[x]] == ys2[b[1]]) {

						cout << "敌人受到元素加成 hp-" << cs[j[x]] / 5 << endl;

						dh[b[1]] = dh[b[1]] - cs[j[x]] / 5;

					}

					if (yszb[cd1] == ys2[b[1]]) {

						cout << "敌人受到武器元素加成 hp-" << dh[b[1]] / 5 << endl;

						dh[b[1]] = dh[b[1]] - dh[b[1]] / 5;

					}

					if (hh[0] > 0) {

						cout << "敌人被汲取生命 hp-" << cs[2] / 5 << endl;

						cout << "你的血量增加了 hp+" << cs[2] / 5 << endl;

						dh[b[1]] = dh[b[1]] - cs[2] / 5;

						h = h + cs[2] / 5;

						hh[0]--;

					}

					if (hh[1] > 0) {

						cout << "敌人燃烧 hp-" << (cs[2] + cs[0]) / 5 << endl;

						dh[b[1]] = dh[b[1]] - (cs[2] + cs[0]) / 5;

						hh[1]--;

					}

					if (bf[1] >= 1 && bf[2] >= 1) {

						dh[b[1]] = dh[b[1]] - (cs[0] + cs[1]) / 5;

						cout << "形成蒸发 hp-" << (cs[0] + cs[1]) / 5 << endl;

						bf[0] = 0;

						bf[1] = 0;

					}

					if (bf[4] >= 1 && bf[2] >= 1) {

						dh[b[1]] = dh[b[1]] - (cs[3] + cs[1]) / 5;

						cout << "形成触电 hp-" << (cs[3] + cs[1]) / 5 << endl;

						bf[3] = 0;

						bf[1] = 0;

					}

					if (bf[4] >= 1 && bf[1] >= 1) {

						dh[b[1]] = dh[b[1]] - (cs[3] + cs[0]) / 5;

						cout << "形成爆炸 hp-" << (cs[3] + cs[0]) / 5 << endl;

						bf[0] = 0;

						bf[3] = 0;

					}

					if (bf[3] >= 1 && bf[1] >= 1) {

						dh[b[1]] = dh[b[1]] - (cs[2] + cs[0]) / 5;

						cout << "形成燃烧 hp-" << (cs[2] + cs[0]) / 5 << endl;

						hh[1] = 3;

						bf[0] = 0;

						bf[3] = 0;

					}

					if (bf[5] >= 1 && bf[1] >= 1) {

						dh[b[1]] = dh[b[1]] - (cs[2] + cs[0]) / 5;

						cout << "形成融化 hp-" << (cs[4] + cs[0]) / 5 << endl;

						bf[0] = 0;

						bf[4] = 0;

					}

					if (bf[5] >= 1 && bf[4] >= 1) {

						dh[b[1]] = dh[b[1]] - (cs[2] + cs[0]) / 5;

						cout << "形成超导 hp-" << (cs[4] + cs[3]) / 5 << endl;

						bf[3] = 0;

						bf[4] = 0;

					}

				}

				if (a == 2) {

					for (i[0] = 1; i[0] <= 6; i[0]++) {

						if (daojvcc[i[0]] > 0) {

							cout << i[0] << "." << daojv[i[0]] << "数量:" << daojvcc[i[0]] << endl;

						}

					}

					cin >> b[3];

					if (daojvcc[b[3]] > 0) {

						if (daojvlb[b[1]] == 1) {

							cout << "血量+" << daojvsx[b[3]] << endl;

							h = h + daojvsx[b[3]];

							daojvcc[b[3]]--;

						}

						if (daojvlb[b[3]] == 2) {

							ss = ss + daojvsx[b[3]];

							cout << "攻击+" << daojvsx[b[3]] << endl;

							daojvcc[b[3]]--;

						}

					}

				}

				if (a == 3) {

					cout << "你逃跑了" << endl;

				}

				if (dh[b[1]] > 0) {

					if (yszb[cd2] == ys2[b[1]]) {

						cout << "敌人攻击了你 hp-" << dg[b[1]] - dg[b[1]] / 5 << endl;

						cout << "但是受到装备元素加成 伤害下降了5分之1" << endl;

						h = h - dg[b[1]] + dg[b[1]] / 5;

					} else {

						h = h - dg[b[1]];

						cout << "敌人攻击了你 hp-" << dg[b[1]] << endl;

					}

				}

			}

			if (dh[b[1]] <= 0) {

				cout << "你打败了" << dr[b[1]] << " " << "经验增加" << 100 * b[1] + 100 + ddj << " " << "金币增加" << drcf[b[1]] << endl;

				jy = jy + 100 * b[1] + ddj;

				cf = cf + drcf[b[1]];

				hh[0] = 0;

				hh[1] = 0;

				ss = ss - daojvsx[b[1]];

			}

		}

		if (b[0] == 2) {

			cout << "LV:" << dj << " 经验:" << jy << " " << zb[cd1] << " " << zb[cd2] << " " << "金币" << cf << endl;

		}

		if (b[0] == 3) {

			for (i[0] = 1; i[0] <= 7; i[0]++) {

				cout << i[0] << "." << c[i[0]];

			}

			cout << " " << endl;

			cout << "输入技能编号(4个)" << endl;

			for (i[0] = 1; i[0] <= 4; i[0]++) {

				cin >> j[i[0]];

			}

		}

		if (b[0] == 4) {

			cout << "金币" << cf << endl;

			for (i[0] = 1; i[0] <= 8; i[0]++) {

				cout << i[0] << "." << zb[i[0]] << cfzb[i[0]] << " ";

			}

			cout << "按111去买道具" << endl;

			cin >> b[1];

			if (cf < cfzb[b[1]])cout << "穷鬼！" << endl;

			if (b[1] != 111 && cf >= cfzb[b[1]]) {

				zbcc[b[1]]++;

				cf = cf - cfzb[b[1]];

			}

			for (i[0] = 1; i[0] <= 6; i[0]++) {

				cout << i[0] << "." << daojv[i[0]] << cfdaojv[i[0]] << " ";

			}

			cout << "按111离开" << endl;

			cin >> b[2];

			if (b[2] == 111)cout << "穷鬼！" << endl;

			if (cf < cfdaojv[b[2]])cout << "穷鬼！" << endl;

			if (b[2] != 111 && cf >= cfdaojv[b[2]]) {

				daojvcc[b[2]]++;

				cf = cf - cfdaojv[b[2]];

			}

		}

		if (b[0] == 5) {

			for (i[0] = 1; i[0] <= 6; i[0]++) {

				if (zbcc[i[0]] >= 1) {

					cout << i[0] << "." << zb[i[0]] << "有" << zbcc[i[0]] << "个 " << " ";

				}

			}

			cout << "按111离开,按1继续" << endl;

			cin >> b[3];

			if (b[3] == 1) {

				cout << "武器:(输入编号)" << endl;

				cin >> b[1];

				if (zbcc[b[1]] > 0 && lb[b[1]] == 0) {

					zbcc[b[1]]--;

					zbcc[cd1]++;

					ss = ss + zbsx[b[1]];

					cd1 = b[1];

				} else {

					cout << "你还没有装备" << endl;

				}

				cout << "防具:(输入编号)" << endl;

				cin >> b[2];

				if (zbcc[b[2]] > 0 && lb[b[2]] == 1) {

					zbcc[b[2]]--;

					zbcc[cd2]++;

					xl = xl + zbsx[b[2]];

					cd2 = b[2];

				} else {

					cout << "你还没有装备" << endl;

				}

			}

		}

		if (jy >= p) { //等级

			jy = jy - p;

			p = p + 500;

			dj++;

			ss = ss + 5;

			h = h + 10;

			cout << "你升级了 伤害+5 血量+10" << endl;

		}

		if (dj % 10 == 0 && dj != s) { //难度

			s = dj;

			dh1 = dh1 + 50;

			dg1 = dg1 + 5;

			ddj = ddj + 200;

			nd++;

			drcf1 = drcf1 + 5;

			cout << "难度+1" << endl;

		}

		if (h <= 0) {

			cout << "你死了，结束" << endl;

			Sleep(2000);

			break;

		}

	}

	return 0;

}

void HindCursor()

{

	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);

	CONSOLE_CURSOR_INFO CursorInfo;

	GetConsoleCursorInfo(handle, &CursorInfo);

	CursorInfo.bVisible = false;

	SetConsoleCursorInfo(handle, &CursorInfo);

}

void gotoxy(int x, int y)

{

	COORD pos;
	pos.X = y;
	pos.Y = x;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}

void color(int a)

{

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), a);

}

struct Button

{

	int x, y, color;

	const char *name;

	int len;

};

void GetPos(POINT &pt)

{

	HWND hwnd = GetForegroundWindow();

	GetCursorPos(&pt);

	ScreenToClient(hwnd, &pt);

	pt.y = pt.y / 16, pt.x = pt.x / 8;

	swap(pt.x, pt.y);

}

Button NewButton(int x, int y, int color, const char *name)

{

	Button t;

	t.x = x, t.y = y, t.name = name;

	t.color = color;

	t.len = strlen(name);

	return t;

}

bool Preserve(Button A)

{

	gotoxy(A.x, A.y), color(A.color), printf("%s", A.name);

	POINT pt;

	GetPos(pt);

	if (pt.x == A.x && (pt.y >= A.y && pt.y <= A.y + A.len))

	{

		color(112), gotoxy(A.x, A.y), printf("%s", A.name);

		if (KEY_DOWN(MOUSE_MOVED)) return 1;

	}

	return 0;

}

struct Sprite

{

	int width, height, x, y, Color, direction;

	string * body;

	void Draw()

	{

		color(Color);

		for (int i = 0; i < height; i++)

		{

			gotoxy(x + i, y);

			for (int j = 0; j < width; j++) printf("%c", body[i][j]);

		}

	}

	void Clean()

	{

		for (int i = 0; i < height; i++)

		{

			gotoxy(x + i, y);

			for (int j = 0; j < width; j++) printf(" ");

		}

	}

};

Sprite NewSprite(string s[], int w, int h, int _color, int nx, int ny)

{

	Sprite newsprite;

	newsprite.x = nx;

	newsprite.y = ny;

	newsprite.body = s;

	newsprite.width = w;

	newsprite.height = h;

	newsprite.Color = _color;

	newsprite.direction = 1;

	return newsprite;

}

bool CheckCollision(Sprite a, Sprite b)

{

	int ax1 = a.x, ax2 = a.x + a.height - 1, ay1 = a.y, ay2 = a.y + a.width - 1;

	int bx1 = b.x, bx2 = b.x + b.height - 1, by1 = b.y, by2 = b.y + b.width - 1;

	if ((ax2 >= bx1 && ay2 >= by1 && ax1 <= bx1 && ay1 <= by1) ||

	    (ax2 >= bx1 && ay1 <= by2 && ax1 <= bx1 && ay1 >= by1) ||

	    (bx2 >= ax1 && by2 >= ay1 && bx1 <= ax1 && by1 <= ay1) ||

	    (bx2 >= ax1 && by1 <= ay2 && bx1 <= ax1 && by1 >= ay1))

		return 1;

	return 0;

}

bool CheckIn(Sprite a, Sprite b)

{

	int ax1 = a.x, ax2 = a.x + a.height - 1, ay1 = a.y, ay2 = a.y + a.width - 1;

	int bx1 = b.x, bx2 = b.x + b.height - 1, by1 = b.y, by2 = b.y + b.width - 1;

	if (ax1 <= bx1 && ay1 <= by1 && ax2 >= bx2 && ay2 >= by2) return 1;

	return 0;

}

string grass[1] = { "                                                                                                                           " };

string soil[30];

string bullet[1] = { "▂" };

int SoilHieght[9] = { 2, 2, 2, 10, 20, 7, 7, 7, 7 };

Sprite Grass[9], Soil[9], Bullet[10005], bhp, rhp;

bool flag[10005], gameover;

int blueHP, redHP;

Sprite letin(Sprite a)

{

	a.x = max(a.x, 0);
	a.x = min(a.x, 27);

	a.y = max(a.y, 0);
	a.y = min(a.y, 117);

	return a;

}

int NowBackgroundColor(Sprite a)

{

	for (int i = 0; i <= 8; i++)

	{

		if (CheckCollision(Soil[i], a)) return 96;

		if (a.height == 1 && CheckCollision(Grass[i], a)) return 32;

	}

	return 224;

}

int jemian()

{

	HindCursor();

	system("mode con cols=120 lines=30");

	for (int i = 0; i < 30; i++) soil[i] = grass[0];

	Grass[0] = NewSprite(grass, 12, 1, 32, 6, 52);

	Grass[1] = NewSprite(grass, 12, 1, 32, 11, 18);

	Grass[2] = NewSprite(grass, 12, 1, 32, 11, 91);

	Grass[3] = NewSprite(grass, 15, 1, 32, 18, 50);

	Grass[4] = NewSprite(grass, 53, 1, 32, 9, 34);

	Grass[5] = NewSprite(grass, 32, 1, 32, 14, 14);

	Grass[6] = NewSprite(grass, 38, 1, 32, 14, 70);

	Grass[7] = NewSprite(grass, 34, 1, 32, 22, 14);

	Grass[8] = NewSprite(grass, 41, 1, 32, 22, 67);

	color(224);

	for (int i = 0; i <= 30; i++)

		for (int j = 0; j < 119; j++) printf(" ");

	for (int i = 0; i <= 8; i++)

	{

		Soil[i] = NewSprite(soil, Grass[i].width, SoilHieght[i], 96, Grass[i].x + 1, Grass[i].y);

		Soil[i].Draw();

	}

	for (int i = 0; i <= 8; i++) Grass[i].Draw();

	string player[2] = { "●", "■" };

	string HP[1] = { "■■■■■■■■■■" };

	Sprite red = NewSprite(player, 2, 2, 4 | 224, 4, 54);

	Sprite blue = NewSprite(player, 2, 2, 1 | 224, 4, 57);

	bhp = NewSprite(HP, 20, 1, 1 | 224, 0, 3);

	rhp = NewSprite(HP, 20, 1, 4 | 224, 0, 97);

	int bluejump = 0, redjump = 0;

	bool bluejumping = false, redjumping = false;

	int tbluejump = 0, tredjump = 0;

	int bulleti = 0, tbluebullet = 0, tredbullet = 0;

	int bhps = 5, rhps = 5;

	blueHP = 50;
	redHP = 50;
	gameover = false;

	memset(flag, 0, sizeof(flag));

	red.Draw();
	blue.Draw();

	bhp.Draw();
	rhp.Draw();

	color(0 | 224);

	gotoxy(0, 1);
	printf("%d", bhps);

	gotoxy(0, 118);
	printf("%d", rhps);

	while (1)

	{

		bool bluemove = false;

		int bnx = blue.x, bny = blue.y, rnx = red.x, rny = red.y;

		Sprite b = NewSprite(player, 2, 2, 1 | 224, bnx, bny);

		Sprite r = NewSprite(player, 2, 2, 4 | 224, rnx, rny);

		color(224);

		for (int i = 0; i < 3; i++)

		{

			if (CheckCollision(blue, Soil[0]) || CheckCollision(blue, Grass[0]) ||

			    CheckCollision(red, Soil[0]) || CheckCollision(red, Grass[0]))

			{

				gotoxy(6 + i, 51);
				printf(" ");

				gotoxy(6 + i, 64);
				printf(" ");

			}

			if (CheckCollision(blue, Soil[1]) || CheckCollision(blue, Grass[1]) ||

			    CheckCollision(red, Soil[1]) || CheckCollision(red, Grass[1]))

			{

				gotoxy(11 + i, 17);
				printf(" ");

				gotoxy(11 + i, 30);
				printf(" ");

			}

			if (CheckCollision(blue, Soil[2]) || CheckCollision(blue, Grass[2]) ||

			    CheckCollision(red, Soil[2]) || CheckCollision(red, Grass[2]))

			{

				gotoxy(11 + i, 90);
				printf(" ");

				gotoxy(11 + i, 103);
				printf(" ");

			}

		}

		for (int i = 0; i < 5; i++)

			if (CheckCollision(blue, Soil[4]) || CheckCollision(blue, Grass[4]) ||

			    CheckCollision(red, Soil[4]) || CheckCollision(red, Grass[4]))

			{

				gotoxy(9 + i, 33);
				printf(" ");

				gotoxy(9 + i, 87);
				printf(" ");

			}

		/*

		for (int i = 0; i < 7; i++)

		{

		if (CheckCollision(blue, Soil[5]) || CheckCollision(blue, Grass[5]))

		gotoxy(14 + i, 12); printf(" ");

		if (CheckCollision(blue, Soil[6]) || CheckCollision(blue, Grass[6]))

		gotoxy(14 + i, 108); printf(" ");

		if (CheckCollision(blue, Soil[7]) || CheckCollision(blue, Grass[7]))

		gotoxy(22 + i, 12); printf(" ");

		if (CheckCollision(blue, Soil[8]) || CheckCollision(blue, Soil[8]))

		gotoxy(22 + i, 108); printf(" ");

		}*/

		blue.Draw();
		red.Draw();

		if (KEY_DOWN(VK_LEFT))

		{

			int COLOR = NowBackgroundColor(b);

			blue.direction = -1;

			color(COLOR);

			blue.Clean();

			blue.y--;

			blue.Color = 1 | COLOR;

			blue = letin(blue);

			blue.Draw();
			red.Draw();

		}

		if (KEY_DOWN(VK_RIGHT))

		{

			int COLOR = NowBackgroundColor(b);

			blue.direction = 1;

			blue.Color = 1 | COLOR;

			color(COLOR);

			blue.Clean();

			blue.y++;

			blue = letin(blue);

			blue.Draw();
			red.Draw();

		}

		if (KEY_DOWN(VK_UP))

			if (bluejumping == false)

			{

				tbluejump = -1;

				bluejump = 0;

				bluejumping = true;

			}

		if (bluejumping)

		{

			int COLOR = NowBackgroundColor(blue);

			blue.Color = 1 | COLOR;

			color(COLOR);

			blue.Clean();

			if (tbluejump != -2)

			{

				blue.x += tbluejump;

				bluejump += tbluejump;

			}

			for (int i = 0; i <= 8; i++)

				if (blue.x == Grass[i].x - 2 && blue.y >= Grass[i].y - 1 && blue.y + blue.width <= Grass[i].y + Grass[i].width + 1)

				{

					tbluejump = 0;

					bluejumping = false;

					break;

				}

			blue = letin(blue);

			blue.Draw();
			red.Draw();

			if (bluejump == -5) tbluejump = 1;

		}

		else

		{

			int j;

			for (j = 0; j <= 8; j++)

				if (blue.x == Grass[j].x - 2 && blue.y >= Grass[j].y - 1 && blue.y + blue.width <= Grass[j].y + Grass[j].width + 1)

					break;

			if (j == 9)

			{

				int COLOR = NowBackgroundColor(b);

				color(COLOR);

				blue.Clean();

				blue.x++;

				blue.Color = 1 | COLOR;

				blue.Draw();
				red.Draw();

			}

		}

		if (KEY_DOWN(0x58))

		{

			if (!tbluebullet)

			{

				Bullet[++bulleti] = NewSprite(bullet, 2, 1, 0 | 224, blue.x, blue.y + blue.direction * 2);

				Bullet[bulleti].direction = blue.direction;

				Bullet[bulleti].Draw();

				tbluebullet = 1;

			}

		}

		if (blue.x >= 26)

		{

			if (blueHP % 10 == 0) blueHP -= 10;

			else blueHP -= blueHP % 10;

			bhp.width = 0;

		}

		if (KEY_DOWN(0x41))

		{

			int COLOR = NowBackgroundColor(r);

			color(COLOR);

			red.Clean();

			red.y--;
			red.direction = -1;

			red.Color = 4 | COLOR;

			red = letin(red);

			blue.Draw();
			red.Draw();

		}

		if (KEY_DOWN(0x44))

		{

			int COLOR = NowBackgroundColor(r);

			color(COLOR);

			red.Clean();

			red.y++;
			red.direction = 1;

			red.Color = 4 | COLOR;

			red = letin(red);

			blue.Draw();
			red.Draw();

		}

		if (KEY_DOWN(0x57))

			if (redjumping == false)

			{

				tredjump = -1;

				redjump = 0;

				redjumping = true;

			}

		if (redjumping)

		{

			int COLOR = NowBackgroundColor(red);

			red.Color = 4 | COLOR;

			color(COLOR);

			red.Clean();

			if (tredjump != -2)

			{

				red.x += tredjump;

				redjump += tredjump;

			}

			for (int i = 0; i <= 8; i++)

				if (red.x == Grass[i].x - 2 && red.y >= Grass[i].y - 1 && red.y + red.width <= Grass[i].y + Grass[i].width + 1)

				{

					tredjump = 0;

					redjumping = false;

					break;

				}

			red = letin(red);

			blue.Draw();
			red.Draw();

			if (redjump == -5) tredjump = 1;

		}

		else

		{

			int j;

			for (j = 0; j <= 8; j++)

				if (red.x == Grass[j].x - 2 && red.y >= Grass[j].y - 1 && red.y + red.width <= Grass[j].y + Grass[j].width + 1)

					break;

			if (j == 9)

			{

				int COLOR = NowBackgroundColor(r);

				color(COLOR);

				red.Clean();

				red.x++;

				red.Color = 4 | COLOR;

				blue.Draw();
				red.Draw();

			}

		}

		if (KEY_DOWN(0x59))

		{

			if (!tredbullet)

			{

				Bullet[++bulleti] = NewSprite(bullet, 2, 1, 0 | 224, red.x, red.y + red.direction * 2);

				Bullet[bulleti].direction = red.direction;

				Bullet[bulleti].Draw();

				tredbullet = 1;

			}

		}

		if (red.x >= 28)

		{

			if (redHP % 10 == 0) redHP -= 10;

			else redHP -= redHP % 10;

			rhp.width = 0;

		}

		if (tbluebullet)

		{

			if (tbluebullet == 15) tbluebullet = 0;

			else tbluebullet++;

		}

		if (tredbullet)

		{

			if (tredbullet == 15) tredbullet = 0;

			else tredbullet++;

		}

		for (int i = 0; i <= 8; i++) Grass[i].Draw();

		for (int i = 1; i <= bulleti; i++)

		{

			if (flag[i]) continue;

			int COLOR = NowBackgroundColor(Bullet[i]);

			color(0 | COLOR);

			Bullet[i].Clean();

			Bullet[i].y += Bullet[i].direction * 2;

			COLOR = NowBackgroundColor(Bullet[i]);

			Bullet[i].Color = 0 | COLOR;

			Bullet[i].Draw();

			if (Bullet[i].y <= 1 || Bullet[i].y >= 117 ||

			    CheckCollision(Bullet[i], blue) || CheckCollision(Bullet[i], red))

			{

				Bullet[i].Clean();

				if (CheckCollision(Bullet[i], blue))

				{

					blueHP--;

					color(224);

					bhp.Clean();

					bhp.width -= 2;

					bhp.Draw();

					int COLOR = NowBackgroundColor(blue);

					blue.Color = 1 | COLOR;

					color(COLOR);

					blue.Clean();

					blue.y += Bullet[i].direction * 3;

					blue = letin(blue);

					blue.Draw();
					red.Draw();

				}

				if (CheckCollision(Bullet[i], red))

				{

					redHP--;

					color(224);

					rhp.Clean();

					rhp.width -= 2;

					rhp.y += 2;

					rhp.Draw();

					int COLOR = NowBackgroundColor(red);

					red.Color = 4 | COLOR;

					color(COLOR);

					red.Clean();

					red.y += Bullet[i].direction * 3;

					red = letin(red);

					blue.Draw();
					red.Draw();

				}

				Bullet[i].x = 0;
				Bullet[i].y = 0;

				flag[i] = true;

				continue;

			}

		}

		if (blueHP % 10 == 0 && bhp.width <= 0)

		{

			bhps--;

			bhp.width = 20;

			gotoxy(0, 1);
			color(0 | 224);
			printf("%d", bhps);

			bhp.Draw();

			int COLOR = NowBackgroundColor(blue);

			blue.Color = 1 | 224;

			color(COLOR);

			blue.Clean();
			blue.x = 4;
			blue.y = 57;

			blue.Draw();

		}

		if (redHP % 10 == 0 && rhp.width <= 0)

		{

			rhps--;

			rhp.width = 20;
			rhp.y = 97;

			gotoxy(0, 118);
			color(0 | 224);
			printf("%d", rhps);

			rhp.Draw();

			int COLOR = NowBackgroundColor(red);

			red.Color = 4 | 224;

			color(COLOR);

			red.Clean();
			red.x = 4;
			red.y = 54;

			red.Draw();

		}

		if (redHP <= 0)

		{

			gotoxy(12, 53);

			color(1 | 96);

			printf("玩家1获胜！");

			gameover = true;

			break;

		}

		if (blueHP <= 0)

		{

			gotoxy(12, 53);

			color(4 | 96);

			printf("玩家2获胜！");

			gameover = true;

			break;

		}

		if (gameover) break;

		Sleep(25);

	}

	Button Exit = NewButton(14, 55, 0 | 96, "退出");

	while (1)

	{

		if (Preserve(Exit)) exit(0);

		Sleep(25);

	}

	return 0;

}

int main()

{

startv:
	system("cls");

	cout << "欢迎来到hyx游戏中心！\n";

	cout << "1.玩贪吃蛇\n";

	cout << "2.玩狒狒大战\n";

	cout << "3.晃瞎你的狗眼\n";

	cout << "4.玩速算王者\n";

	cout << "5.玩欢乐赌场\n";

	cout << "6.玩忍三\n";

	cout << "7.玩打怪小游戏(死了才能结束，想中途退出只能关闭程序)\n";

	cout << "8.混乱大枪战(有美观的界面)\n";

	cout << "9.退出\n";

	cout << "10.关机\n";

	int dfs;

	cin >> dfs;

	if (dfs == 1)tanchi();

	if (dfs == 2)mbg();

	if (dfs == 3)eye();

	if (dfs == 4)susuan();

	if (dfs == 5)du();

	if (dfs == 6)renshu();

	if (dfs == 7)dadaj();

	if (dfs == 8)jemian();

	if (dfs == 9)return 0;

	goto startv;

	return 0;

}
