
#include <bits/stdc++.h>
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>
using namespace std;
bool Black;
void Color(int a) {
	if (Black == 1) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
		return;
	}
	if (a == 0) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	if (a == 1) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);
	if (a == 2) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	if (a == 3) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE);
	if (a == 4) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
	if (a == 5) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	if (a == 6) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	if (a == 7) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_BLUE);
	if (a == 8) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
	if (a == 9) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE);
	if (a == 10) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
	if (a == 11) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN);
	if (a == 12) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}
void SetPos(int x, int y) {
	COORD pos;
	pos.X = y * 2, pos.Y = x;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
void Slow(int a, char *p) {
	while (1) {
		if (*p != 0)printf("%c", *p++);
		else break;
		Sleep(a);
	}
}
struct node {
	char Name[201];
	int Blood, Bloodmax, Bloodjia;
	int Skilnum, Skilmax, Money, EXP, Shan;
	int Skil[1001], Skilstr[1001]; //触发率
	int Blp, Blpt, Duk, Dut, Ice, Yun, Wudi, Wudit, Qipt;
	float Qi, Qip, Qijia;
} You[1001], Guai[1001];
struct node2 {
	char Name[201];
	float Qi;
	int Kill, What, color; //物法
	int Any, Anykill[1001], Anywhat[1001], Time[1001]; //额外种类
	float Anyqi[1001];
} Skill[1001];
int Skkk[1001], Skll, skk, Tong, Tongmax, Ju, Juk, Jiao, Shen, Ji, Yuan, Shan, Fu;
int dy, dd, Dy, Dd, sa, sb, sc, ss, k1 = -1, k2, k3, k4;
bool Y[10001], D[10001];
void CheckMe() {
	int aa = 0;
	system("cls");
	Color(0);
	SetPos(1, 1), printf("--------查看本体技能--------");
	SetPos(3, 1), printf("技能数量上限：%d", You[0].Skilmax);
	for (int i = 1; i <= You[0].Skilmax; i++) {
		if (You[0].Skilnum < i) {
			SetPos(5, i * 11 - 10), cout << "技能" << i << "：空技能槽";
			continue;
		}
		SetPos(5, i * 11 - 10), cout << "技能" << i << "：";
		Color(Skill[You[0].Skil[i]].color);
		printf("%s", Skill[You[0].Skil[i]].Name);
		Color(0);
		SetPos(7, i * 11 - 10), cout << "耗气量：";
		printf("%0.1f", Skill[You[0].Skil[i]].Qi);
		SetPos(9, i * 11 - 10), cout << "技能类型：";
		if (Skill[You[0].Skil[i]].What == 1) cout << "单体伤害";
		if (Skill[You[0].Skil[i]].What == 2) cout << "群体伤害";
		if (Skill[You[0].Skil[i]].What == 3) cout << "防御与辅助";
		if (Skill[You[0].Skil[i]].What <= 2) SetPos(11, i * 11 - 10), cout << "攻击力：" << Skill[You[0].Skil[i]].Kill;
		else SetPos(11, i * 11 - 10), cout << "无攻击力......";
		SetPos(13, i * 11 - 10);
		if (Skill[You[0].Skil[i]].What % 10 != 4) cout << "额外";
		cout << "效果：";
		if (Skill[You[0].Skil[i]].Any == 0) cout << "无";
		else {
			for (int j = 1; j <= Skill[You[0].Skil[i]].Any; j++) {
				aa = max(aa, j);
				int Sk = Skill[You[0].Skil[i]].Anywhat[j];
				SetPos(14 + j * 3 - 2, i * 11 - 10);
				printf("%d. ", j);
				if (Skill[You[0].Skil[i]].What <= 2) {
					if (Sk == 1) printf("冰冻"), SetPos(14 + j * 3 - 1, i * 11 - 9), printf(" 持续时间：%d", Skill[You[0].Skil[i]].Time[j]);
					if (Sk == 2) printf("毒伤"), SetPos(14 + j * 3 - 1, i * 11 - 9), printf(" 攻击力：%d", Skill[You[0].Skil[i]].Anykill[j]), SetPos(14 + j * 3, i * 11 - 9), printf(" 持续时间：%d", Skill[You[0].Skil[i]].Time[j]);
					if (Sk == 3) printf("暴击率"), SetPos(14 + j * 3 - 1, i * 11 - 9), printf(" 触发百分比：%d", Skill[You[0].Skil[i]].Anykill[j]), cout << '%';
					if (Sk == 4) printf("连击率"), SetPos(14 + j * 3 - 1, i * 11 - 9), printf(" 触发百分比：%d", Skill[You[0].Skil[i]].Anykill[j]), cout << '%';
					if (Sk == 5) printf("眩晕率"), SetPos(14 + j * 3 - 1, i * 11 - 9), printf(" 触发百分比：%d", Skill[You[0].Skil[i]].Anykill[j]), cout << '%';
					if (Sk == 6) printf("百分比伤害"), SetPos(14 + j * 3 - 1, i * 11 - 9), printf(" 伤害百分比：%d", Skill[You[0].Skil[i]].Anykill[j]), cout << '%';
					if (Sk == 7) printf("吸血"), SetPos(14 + j * 3 - 1, i * 11 - 9), printf(" 加血量：%d", Skill[You[0].Skil[i]].Kill);
				} else {
					if (Sk == 1) printf("加血"), SetPos(14 + j * 3 - 1, i * 11 - 9), printf(" 增幅量：%d", Skill[You[0].Skil[i]].Anykill[j]);
					if (Sk == 2) printf("无敌"), SetPos(14 + j * 3 - 1, i * 11 - 9), printf(" 持续时间：%d", Skill[You[0].Skil[i]].Time[j]);
					if (Sk == 3) printf("持续加血"), SetPos(14 + j * 3 - 1, i * 11 - 9), printf(" 增幅量：%d", Skill[You[0].Skil[i]].Anykill[j]), SetPos(14 + j * 3, i * 11 - 9), printf(" 持续时间：%d", Skill[You[0].Skil[i]].Time[j]);
					if (Sk == 4) printf("持续加气"), SetPos(14 + j * 3 - 1, i * 11 - 9), printf(" 增幅量：%0.1f", Skill[You[0].Skil[i]].Anyqi[j]), SetPos(14 + j * 3, i * 11 - 9), printf(" 持续时间：%d", Skill[You[0].Skil[i]].Time[j]);
				}
			}
		}
	}
	SetPos(16 + aa * 3, 1), cout << "按任意键退出。";
	char a;
	a = _getch();
}
void ChangeSkill() {
	system("cls");
	Color(0);
	if (Jiao == 4) {
		SetPos(22, 1), Color(5), printf("教程提示 4 ：你现在最多可以装备2个技能，\n             技能均需要“气”来使用，你可以“蓄气”来增加你的气数。\n             按 2 1 装备，否则退出教程。"), Color(0);
		SetPos(0, 0);
	}
	if (Jiao == 8) {
		SetPos(22, 1), Color(5), printf("教程提示 8 ：群攻技能无需瞄准，\n             其会在发出时攻击所有人。\n             按 1 1 装备，否则退出教程。"), Color(0);
		SetPos(0, 0);
	}
	SetPos(1, 1), printf("--------修改本体技能--------");
	SetPos(3, 1), printf("本体技能：\n");
	int i;
	for (i = 1; i <= You[0].Skilnum; i++) Color(0), printf("\n  %d： ", i), Color(Skill[You[0].Skil[i]].color), printf("%s", Skill[You[0].Skil[i]].Name);
	if (You[0].Skilnum < You[0].Skilmax) Color(0), printf("\n  %d： 放入空技能槽", You[0].Skilnum + 1), i++;
	Color(0), printf("\n\n  闲置技能：\n");
	if (skk == 0) printf("\n  无");
	else for (int i = 1; i <= skk; i++) Color(0), SetPos(9 + i, 1), printf("\n  %d： ", i), Color(Skill[Skkk[i]].color), printf("%s", Skill[Skkk[i]].Name);
	Color(0), printf("\n\n  请输入你想交换的两个技能的编号(回车确定，输 0 0 退出)----- ");
	int a, b;
	cin >> a >> b;
	if (a == 2 && b == 1 && Jiao == 4) Jiao++;
	if ((a != 2 || b != 1) && Jiao == 4) Jiao = -1;
	if (a == 1 && b == 1 && Jiao == 8) Jiao++;
	if ((a != 1 || b != 1) && Jiao == 8) Jiao = -1;
	if (a == You[0].Skilnum + 1) {
		You[0].Skilnum++, You[0].Skil[You[0].Skilnum] = Skkk[b];
		for (int i = b; i < skk; i++) swap(Skkk[i], Skkk[i + 1]);
		Skkk[skk] = 0;
		skk--;
		ChangeSkill();
	} else if (a != 0) swap(You[0].Skil[a], Skkk[b]), ChangeSkill();
}
void CheckUs() {
	system("cls");
	Color(0);
	SetPos(1, 1), printf("--------查看同伴技能--------");
	SetPos(3, 1), printf("同伴数量：%d    同伴上限：%d", Tong, Tongmax);
	for (int i = 1; i <= Tong; i++) {
		SetPos(5, i * 11 - 10), cout << "同伴" << i << "：";
		SetPos(7, i * 11 - 10), cout << "技能数量上限：" << You[i].Skilmax;
		SetPos(9, i * 11 - 10), cout << "技能数量：" << You[i].Skilnum;
		for (int j = 1; j <= You[i].Skilnum; j++)
			SetPos(9 + 2 * j, i * 11 - 10), printf("第%d技能：", j), Color(Skill[You[i].Skil[j]].color), cout << Skill[You[i].Skil[j]].Name, Color(0);
	}
	SetPos(22, 1), cout << "按任意键退出。";
	char a;
	a = _getch();
}
void StartSkill() {
	system("cls");
	Color(0);
	SetPos(1, 1), printf("Hi,请输入你的新技能的名字......");
	int x = 100 + Skll;
	Skll++;
	float X = 1, Sha = 0;
	skk++, Skkk[skk] = x;
	scanf("%s", &Skill[x].Name);
	printf("\n  请输入技能种类......\n\n");
	printf("  1.单体伤害  2.群体伤害  3.防御与辅助 ..... ");
	cin >> Skill[x].What;
	if (Skill[x].What == 2) X *= 3;
	if (Skill[x].What <= 2) {
		printf("\n  请输入技能攻击力（建议<100，不然耗气量会巨多）......");
		cin >> Skill[x].Kill;
		Sha += Skill[x].Kill;
		printf("\n  请输入技能额外效果数（建议<3，不然耗气量会巨多）......");
		cin >> Skill[x].Any;
		for (int i = 1; i <= Skill[x].Any; i++) {
			printf("\n  请输入技能 额外效果 %d：", i);
			printf("\n\n  1.冰冻  2.毒伤  3.暴击率  4.连击率");
			printf("\n  5.眩晕率  6.百分比伤害  7.吸血 ..... ");//10为 偷钱
			cin >> Skill[x].Anywhat[i];
			int a = Skill[x].Anywhat[i];
			if (a >= 3 && a <= 6) printf("\n  请输入其的百分比（必须<80！建议<30，不然耗气量会巨多）......"), cin >> Skill[x].Anykill[i];
			if (a == 2) printf("\n  请输入其的攻击力（建议<30，不然耗气量会巨多）......"), cin >> Skill[x].Anykill[i];
			if (a <= 2) printf("\n  请输入其的持续时间（建议<4，不然耗气量会巨多）......"), cin >> Skill[x].Time[i];
			int w = Skill[x].Kill, z = Skill[x].Anykill[i], t = Skill[x].Time[i];
			if (a == 1) Sha += 50 * t;
			if (a == 2) Sha += 0.5 * z * t;
			if (a == 3) {
				if (z < 20) X *= 1 + z / 100;
				else if (z < 50) X *= 1 + z / 50;
				else X *= z / 20;
			}
			if (a == 4) {
				if (z < 30) X *= 1 + z / 80;
				else if (z < 60) X *= 0.8 + z / 30;
				else X *= z / 5 - 3;
			}
			if (a == 5) {
				if (z < 30) X *= 1 + z / 100;
				else if (z < 50) X *= 0.8 + z / 40;
				else X *= z / 10 - 3;
			}
			if (a == 6) Sha += 3 * z;
			if (a == 7) Sha += 1.3 * w;
		}
	} else {
		printf("\n  请输入技能效果数（建议<3，不然耗气量会巨多）......");
		cin >> Skill[x].Any;
		for (int i = 1; i <= Skill[x].Any; i++) {
			printf("\n  请输入技能 额外效果 %d ......", i);
			printf("\n\n  1.加血  2.无敌  3.持续加血  4.持续加气"); //5为 召唤
			cin >> Skill[x].Anywhat[i];
			int a = Skill[x].Anywhat[i];
			if (a == 1 || a == 3) printf("\n  请输入其的增幅量（建议<30，不然耗气量会巨多）......"), cin >> Skill[x].Anykill[i];
			if (a == 4) printf("\n  请输入其的增幅量（可输入一位小数，建议<3，不然耗气量会巨多）......"), cin >> Skill[x].Anyqi[i];
			if (a >= 2) printf("\n  请输入其的持续时间（建议<4，不然耗气量会巨多）......"), cin >> Skill[x].Time[i];
			int w = Skill[x].Kill, z = Skill[x].Anykill[i], t = Skill[x].Time[i];
			float v = Skill[x].Anyqi[i];
			if (a == 1) Sha += z;
			if (a == 2) Sha += 20 * t;
			if (a == 3) Sha += t * z;
			if (a == 4) Sha += 20 * t * v;
			if (a == 4 && t == 1) Sha *= 500;
			if (a == 4 && t == 2) Sha *= 100;
		}
	}
	printf("\n  请输入其的颜色......");
	Color(1), cout << "\n  1.蓝  ";
	Color(2), cout << "2.绿  ";
	Color(3), cout << "3.紫  ";
	Color(4), cout << "4.红  ";
	Color(5), cout << "5.黄  ";
	Color(6), cout << "6.深蓝  ";
	Color(7), cout << "\n  7.青  ";
	Color(8), cout << "8.深绿  ";
	Color(9), cout << "9.深紫  ";
	Color(10), cout << "10.深红  ";
	Color(11), cout << "11.木色  ";
	Color(12), cout << "12.灰  ";
	Color(0), cin >> Skill[x].color;
	if (Sha < 20) Sha = Sha / 30;
	else if (Sha < 50) Sha = Sha / 40 + 0.5;
	else if (Sha < 200) Sha = Sha / 150 + 1.5;
	else Sha = Sha / 70;
	Skill[x].Qi = Sha * X * 10 / (0.8 + 0.1 * Ju);
	int skillqi = Skill[x].Qi;
	Skill[x].Qi = (float)skillqi / 10;
	printf("\n  计算已完成，这个技能的耗气量为------- %0.1f\n", Skill[x].Qi);
	cout << "\n  按 y 更改技能，按 0 退出。";
	char a;
	cin >> a;
	if (a == 'y') ChangeSkill();
}
void Main();
void Killk(int c, int a, int b) { //单体
	int RR = 0, bxb = 0;
	if (Guai[b].Blood <= 0) return;
	int RRR = rand() % 100;
	if (Skill[a].Kill > 5) RR = rand() % (Skill[a].Kill / 5) - Skill[a].Kill / 10;
	printf("\n  %s攻击了%s！\n", You[c].Name, Guai[b].Name);
	Sleep(200);
	if (Guai[b].Wudi > 0) {
		printf("\n  但是！%s是无敌的！\n", Guai[b].Name);
		Sleep(200);
		return;
	}
	if (Guai[b].Shan > RRR) {
		printf("\n  但是！%s闪避开了！\n", Guai[b].Name);
		Sleep(200);
		return;
	}
	int ki = Skill[a].Kill + RR;
	Guai[b].Blood -= ki;
	if (Skill[a].Kill > 0) {
		printf("\n  %s受到%d点伤害，血量还剩%d。\n", Guai[b].Name, ki, Guai[b].Blood);
		Sleep(200);
	}
	for (int i = 1; i <= Skill[a].Any; i++) {
		int j = Skill[a].Anywhat[i], k = Skill[a].Time[i], l = Skill[a].Anykill[i], m = Skill[a].Kill, mmm;
		int r1 = rand() % 100 + 1, r2 = rand() % 50 + 51, r3 = rand() % 100 + 1;
		if (j == 1) Guai[b].Ice += k, printf("\n  %s被冰冻！冰冻时间还剩%d。\n", Guai[b].Name, Guai[b].Ice);
		if (j == 2) Guai[b].Dut += k, Guai[sb].Duk = l, printf("\n  %s中毒！中毒时间还剩%d。\n", Guai[b].Name, Guai[b].Dut);
		if (j == 3 && r1 <= l) mmm = m * r2 / 100, Guai[b].Blood -= mmm, printf("\n  %s被暴击！多受到%d点伤害，血量还剩%d。\n", Guai[b].Name, mmm, Guai[b].Blood);
		if (j == 4 && r1 <= l && Guai[b].Blood > 0) Guai[b].Blood -= m, printf("\n  %s被连击！再次受到%d点伤害，血量还剩%d。\n", Guai[b].Name, m, Guai[b].Blood), i--;
		if (j == 5 && r1 <= l) Guai[b].Yun++, printf("\n  %s被击晕！击晕时间还剩%d。\n", Guai[b].Name, Guai[b].Yun);
		if (j == 6) mmm = Guai[b].Blood * l / 100, Guai[b].Blood -= mmm, printf("\n  %s遭受百分比伤害！受到%d点伤害，血量还剩%d。\n", Guai[b].Name, mmm, Guai[b].Blood);
		if (j == 7) You[c].Blood = min(You[c].Bloodmax, You[c].Blood + Skill[a].Kill + RR), printf("\n  %s被吸血！ %s的血量增加%d，还剩%d。\n", Guai[b].Name, You[c].Name, Skill[a].Kill + RR, You[c].Blood);
		Sleep(200);
	}
	if (Guai[b].Blood <= 0) Color(4), printf("\n  %s阵亡！", Guai[b].Name), dy--, Color(0), printf("你的金币+%d！\n", Guai[b].Money), You[0].Money += Guai[b].Money;
}
void Killkk(int c, int a) { //辅助
	for (int i = 1; i <= Skill[a].Any; i++) {
		int j = Skill[a].Anywhat[i], k = Skill[a].Time[i], l = Skill[a].Anykill[i];
		float m = Skill[a].Anyqi[i];
		int r1 = rand() % 100 + 1, r2 = rand() % 100 + 1, r3 = rand() % 100 + 1;
		if (j == 1) You[c].Blood += l, You[c].Blood = min(You[c].Bloodmax, You[c].Blood), printf("\n  %s加血%d！血量还剩%d。\n", You[c].Name, l, You[c].Blood);
		if (j == 2) You[c].Wudi += k, printf("\n  %s开启无敌！无敌时间还剩%d。\n", You[c].Name, You[c].Wudi);
		if (j == 3) You[c].Blpt += k, You[c].Blp = l, printf("\n  %s开启持续加血！持续时间还剩%d。\n", You[c].Name, You[c].Blpt);
		if (j == 4) You[c].Qipt += k, You[c].Qip = m, printf("\n  %s开启持续加气！持续时间还剩%d。\n", You[c].Name, You[c].Qipt);
		Sleep(200);
	}
}
void Killkkk(int c, int a) { //群攻
	bool k[1001];
	memset(k, 0, sizeof(k));
	int R = min(rand() % 3 + 4, dy), ll = 0;
	for (int i = 1; i <= R; i++) {
		int j = rand() % Dy + 1;
		if (Guai[j].Blood > 0 && k[j] == 0) Killk(c, a, j), k[j] = 1, ll = 0;
		else i--, ll++;
		if (ll >= 5) break;
	}
}
void Killk2(int b, int a, int c) { //怪单体
	int RR = 0;
	if (Skill[a].Kill > 5) RR = rand() % (Skill[a].Kill / 5) - Skill[a].Kill / 10;
	int RRR = rand() % 100;
	printf("\n  %s攻击了%s！\n", Guai[b].Name, You[c].Name);
	Sleep(200);
	if (You[c].Wudi > 0) {
		printf("\n  但是！%s是无敌的！\n", You[c].Name);
		Sleep(200);
		return;
	}
	if (You[c].Shan > RRR) {
		printf("\n  但是！%s闪避开了！\n", You[c].Name);
		Sleep(200);
		return;
	}
	int ki = Skill[a].Kill + RR;
	You[c].Blood -= ki;
	if (Skill[a].Kill > 0) {
		printf("\n  %s受到%d点伤害，血量还剩%d。\n", You[c].Name, ki, You[c].Blood);
		Sleep(200);
	}
	for (int i = 1; i <= Skill[a].Any; i++) {
		int j = Skill[a].Anywhat[i], k = Skill[a].Time[i], l = Skill[a].Anykill[i], m = Skill[a].Kill, mmm;
		int r1 = rand() % 100 + 1, r2 = rand() % 50 + 51, r3 = rand() % 100 + 1;
		if (j == 1) You[c].Ice += k, printf("\n  %s被冰冻！冰冻时间还剩%d。\n", You[c].Name, You[c].Ice);
		if (j == 2) You[c].Dut += k, You[c].Duk = l, printf("\n  %s中毒！中毒时间还剩%d。\n", You[c].Name, You[c].Dut);
		if (j == 3 && r1 <= l) mmm = m * r2 / 100, You[c].Blood -= mmm, printf("\n  %s被暴击！多受到%d点伤害，血量还剩%d。\n", You[c].Name, mmm, You[c].Blood);
		if (j == 4 && r1 <= l && You[c].Blood > 0) You[c].Blood -= m, printf("\n  %s被连击！再次受到%d点伤害，血量还剩%d。\n", You[c].Name, m, You[c].Blood), i--;
		if (j == 5 && r1 <= l) You[c].Yun++, printf("\n  %s被击晕！击晕时间还剩%d。\n", You[c].Name, You[c].Yun);
		if (j == 6) mmm = You[c].Blood * l / 100, You[c].Blood -= mmm, printf("\n  %s遭受百分比伤害！受到%d点伤害，血量还剩%d。\n", You[c].Name, mmm, You[c].Blood);
		if (j == 7) Guai[b].Blood = min(Guai[b].Bloodmax, Guai[b].Blood + Skill[a].Kill + RR), printf("\n  %s被吸血！ %s的血量增加%d，还剩%d。\n", You[c].Name, Guai[b].Name, Skill[a].Kill + RR, Guai[b].Blood);
		if (j == 10) l = min(You[0].Money, l), You[0].Money -= l, Guai[b].Money += l, printf("\n  你队被偷钱！金币数量减少%d，还剩%d，%s金币加为%d。\n", l, You[0].Money, Guai[b].Name, Guai[b].Money);
		Sleep(200);
	}
	int as = rand() % 5;
	if (You[c].Skilnum == 0) as = 0;
	if (Skill[a].What == 1 && Skill[a].Anywhat[1] == 10) as = 1; //偷钱
	if (c != 0 && You[c].Skilmax != You[c].Skilnum && as == 0) Color(5), printf("\n  但是！%s学会了此技能！\n", You[c].Name), You[c].Skilnum++, You[c].Skil[You[c].Skilnum] = a, Color(0), Sleep(200);
	if (You[c].Blood <= 0) {
		Color(4), printf("\n  %s阵亡！\n", You[c].Name), dd--;
		int rrR = rand() % 30;
		if (rrR == 0 && c != 0) {
			Tong = max(0, Tong - 1);
			Slow(70, "\n  你的同伴对你们黑暗的前途叹了口气...\n  毅然决然地拖着已失去知觉的身体，走出了战场...\n  消失在地平线上！\n");
			for (int i = c; i <= Tong; i++) swap(You[i], You[i + 1]);
		}
		Color(0);
	}
	if (You[0].Blood <= 0 && Fu != 0) Color(5), printf("\n  但是！%s复活！\n", You[c].Name), You[0].Blood = 20, dd++, Fu--, Color(0);
}
void Startguai(int a);
void Killkk2(int a, int b) { //怪辅助
	for (int i = 1; i <= Skill[a].Any; i++) {
		int j = Skill[a].Anywhat[i], k = Skill[a].Time[i], l = Skill[a].Anykill[i];
		int r1 = rand() % 100 + 1, r2 = rand() % 100 + 1, r3 = rand() % 100 + 1;
		if (j == 1) Guai[b].Blood += l, Guai[b].Blood = min(Guai[b].Bloodmax, Guai[b].Blood), printf("\n  %s加血%d！血量还剩%d。\n", Guai[b].Name, l, Guai[b].Blood);
		if (j == 2) Guai[b].Wudi += k, printf("\n  %s开启无敌！无敌时间还剩%d。\n", Guai[b].Name, Guai[b].Wudi);
		if (j == 3) Guai[b].Blpt += k, Guai[b].Blp = l, printf("\n  %s开启持续加血！持续时间还剩%d。\n", Guai[b].Name, Guai[b].Blpt);
		if (j == 5) Startguai(Skill[a].Anykill[i]), printf("\n  %s召唤了%s！%s加入战场。\n", Guai[b].Name, Guai[Dy].Name, Guai[Dy].Name);
		Sleep(200);
	}
}
void Killkkk2(int a, int b) { //怪群攻
	bool k[1001];
	memset(k, 0, sizeof(k));
	int R = min(rand() % 3 + 3 + Ju, dd), ll = 0;
	for (int i = 1; i <= R; i++) {
		int j = rand() % Dd;
		if (You[j].Blood > 0 && k[j] == 0) Killk2(b, a, j), k[j] = 1, ll = 0;
		else i--, ll++;
		if (ll >= 5) break;
	}
}
void Killguai(int aa) { //你队
	int kk = 0;
	Color(5);
	printf("\n  %s的回合！\n\n", You[aa].Name), Sleep(500);
	Color(0);
	if (You[aa].Wudi > 0) You[aa].Wudi--, printf("  %s还在无敌！持续时间还剩%d。\n\n", You[aa].Name, You[aa].Wudi), Sleep(200);
	if (You[aa].Qipt > 0) You[aa].Qipt--, You[aa].Qi += You[aa].Qip, printf("  %s的气增加%0.1f，还剩%0.1f，持续时间还剩%d。\n\n", You[aa].Name, You[aa].Qip, You[aa].Qi, You[aa].Qipt), Sleep(200);
	if (You[aa].Blpt > 0) You[aa].Blpt--, You[aa].Blood += You[aa].Blp, You[aa].Blood = min(You[aa].Bloodmax, You[aa].Blood), printf("  %s的血量增加%d，还剩%d，持续时间还剩%d。\n\n", You[aa].Name, You[aa].Blp, You[aa].Blood, You[aa].Blpt), Sleep(200);
	if (You[aa].Dut > 0) You[aa].Dut--, You[aa].Blood -= You[aa].Duk, printf("  %s毒发！其的血量减少%d，还剩%d，持续时间还剩%d。\n\n", You[aa].Name, You[aa].Duk, You[aa].Blood, You[aa].Dut), Sleep(200);
	if (You[aa].Ice > 0) kk = 1, You[aa].Ice--, printf("  %s被冰冻了......，冰冻时间还剩%d。\n\n", You[aa].Name, You[aa].Ice), Sleep(200);
	if (You[aa].Yun > 0) {
		You[aa].Yun--;
		if (kk == 1) cout << endl << "  同时，";
		else cout << endl << "  ";
		printf("%s被击晕了......，击晕时间还剩%d\n\n", You[aa].Name, You[aa].Yun), Sleep(200);
		return;
	}
	if (You[aa].Blood <= 0) Color(4), printf("\n  %s阵亡！\n", You[aa].Name), dd--, kk = 1, Color(0);
	if (kk == 1) return;
	if (aa == 0) {
		You[aa].Qi += You[aa].Qijia;
		You[aa].Blood += You[aa].Bloodjia;
		You[aa].Blood = min(You[aa].Blood, You[aa].Bloodmax);
		Color(0), printf("  你的气数+%0.1f： %0.1f\n", You[aa].Qijia, You[aa].Qi);
		Color(0), printf("\n  你的血量+%d： %d\n", You[aa].Bloodjia, You[aa].Blood);
		printf("\n  你的技能：\n");
		Sleep(200);
		Color(0), printf("\n  0： 蓄气");
		for (int i = 1; i <= You[aa].Skilnum; i++) {
			Color(0), printf("\n  %d： ", i), Color(Skill[You[aa].Skil[i]].color), printf("%s", Skill[You[aa].Skil[i]].Name);
			Color(0);
			if (Skill[You[aa].Skil[i]].Qi > You[aa].Qi) cout << "（不可用）";
		}
		printf("\n\n  请输入你想使用技能的编号----- ");
		int a, b;
		cin >> a;
		if (a == 0) You[aa].Qi += 1, printf("\n  %s蓄气！你的气数 +1，还剩%0.1f。\n", You[aa].Name, You[aa].Qi);
		else {
			int c = You[aa].Skil[a];
			if (You[aa].Qi - Skill[c].Qi < 0) return;
			You[aa].Qi -= Skill[c].Qi;
			if (Skill[c].What == 1) {
				Color(0), printf("\n  当前敌人：\n");
				for (int i = 1; i <= Dy; i++) if (Guai[i].Blood > 0) {
						printf("\n  %d： %s （血量：%d）", i, Guai[i].Name, Guai[i].Blood);
					}
				printf("\n\n  请输入你想攻击敌人的编号----- ");
				cin >> b;
			}
			printf("\n\n  你使用技能：");
			Color(Skill[c].color);
			printf("%s", Skill[c].Name);
			Color(0), cout << " ！" << endl;
			if (Skill[c].What == 1) Killk(0, c, b);
			if (Skill[c].What == 2) Killkkk(0, c);
			if (Skill[c].What == 3) Killkk(0, c);
		}
	} else {
		int R = rand() % 100 + 1, l = 0, kk = 0, o = rand() % 5;
		if (You[aa].Skilnum != 0) l = rand() % You[aa].Skilnum + 1;
		if (o == 0) l = 0;
		printf("  %s使用技能：", You[aa].Name);
		Color(Skill[You[aa].Skil[l]].color);
		Sleep(200);
		if (l == 0) {
			cout << "蓄气 ！" << endl;
			return;
		}
		printf("%s", Skill[You[aa].Skil[l]].Name);
		Color(0), cout << " ！" << endl;
KR:
		int sc = rand() % Dy + 1;
		Sleep(200);
		if (Skill[You[aa].Skil[l]].What == 1) if (Guai[sc].Blood > 0) Killk(aa, You[aa].Skil[l], sc);
			else goto KR;
		if (Skill[You[aa].Skil[l]].What == 2) Killkkk(aa, You[aa].Skil[l]);
		if (Skill[You[aa].Skil[l]].What == 3) Killkk(aa, You[aa].Skil[l]);
	}
}
void Killyou(int sb) { //怪
	sa = rand() % dd;
	int R = rand() % (100 - min(10, Ju * 3)) + 1, l = 0, kk = 0;
	Color(5);
	printf("\n  %s的回合！\n", Guai[sb].Name), Sleep(500);
	Color(0);
	if (Guai[sb].Wudi > 0) Guai[sb].Wudi--, printf("  %s还在无敌！持续时间还剩%d。\n\n", Guai[sb].Name, Guai[sb].Wudi), Sleep(200);
	if (Guai[sb].Blpt > 0) Guai[sb].Blpt--, Guai[sb].Blood += Guai[sb].Blp, Guai[sb].Blood = min(Guai[sb].Bloodmax, Guai[sb].Blood), printf("  %s的血量增加%d，还剩%d，持续时间还剩%d。\n\n", Guai[sb].Name, Guai[sb].Blp, Guai[sb].Blood, Guai[sb].Blpt), Sleep(200);
	if (Guai[sb].Dut > 0) Guai[sb].Dut--, Guai[sb].Blood -= Guai[sb].Duk, printf("  %s毒发！它的血量减少%d，还剩%d，持续时间还剩%d。\n\n", Guai[sb].Name, Guai[sb].Duk, Guai[sb].Blood, Guai[sb].Dut), Sleep(200);
	if (Guai[sb].Ice > 0) kk = 1, Guai[sb].Ice--, printf("  %s被冰冻了......，冰冻时间还剩%d。\n\n", Guai[sb].Name, Guai[sb].Ice), Sleep(200);
	if (Guai[sb].Yun > 0) {
		Guai[sb].Yun--;
		if (kk == 1) cout << endl << "  同时，";
		else cout << endl << "  ";
		printf("%s被击晕了......，击晕时间还剩%d\n\n", Guai[sb].Name, Guai[sb].Yun), Sleep(200);
		return;
	}
	if (Guai[sb].Blood <= 0) Color(4), printf("\n  %s阵亡！\n", Guai[sb].Name), dy--, kk = 1, Color(0);
	if (kk == 1) return;
	for (int i = 1; i <= Guai[sb].Skilnum; i++) {
		if (R > Guai[sb].Skilstr[i]) continue;
		else {
			l = Guai[sb].Skil[i];
			break;
		}
	}
	printf("\n  %s使用技能：", Guai[sb].Name);
	Color(Skill[l].color);
	Sleep(200);
	if (l == 0) {
		cout << "蓄气 ！" << endl;
		return;
	}
	printf("%s", Skill[l].Name);
	Color(0), cout << " ！" << endl;
KR:
	int sc = rand() % Dd;
	Sleep(200);
	if (Skill[l].What == 1) if (You[sc].Blood > 0) Killk2(sb, l, sc);
		else goto KR;
	if (Skill[l].What == 3) Killkk2(l, sb);
	if (Skill[l].What == 2) Killkkk2(l, sb);
}
void Juing() {
	system("cls");
	Color(5);
	if (Ju == 1) Slow(50, "\n  -----------第一章-----------\n\n  这个世界是由SLFDC政府掌管的。\n\n  近几年，由于太上皇的暴政，有10%的诸侯国脱离了此政府。\n\n  为此，SLFDC创立了强大的军事力量，\n\n  由三大教，七武科代表统管。\n\n  而你方则立下了四皇来与之抗衡。\n\n  现在，世界混乱，而你，必定是可以称霸世界，重拾和平的人！\n\n  于是，你走上了与天下人抗争的道路，\n\n  辉煌的前途正向你驶来！");
	if (Ju == 2) Slow(50, "\n  -----------第二章-----------\n\n  在这一年中，四皇小P，老狗，梢公与小梁终于在思想上达成了一致\n\n  一个名为信奥班的群体终于崛起！\n\n  与此同时，因为救下了一位小P的手下，\n\n  你也光荣地入队！\n\n  现在，你开始承受SLFDC更为激烈的打击，\n\n  你一定要创造计策与机会，存活下去！");
	if (Ju == 3) Slow(50, "\n  -----------第三章-----------\n\n  前线传来坏消息，\n\n  太上皇用自己无敌的能力击溃了大部分军队，\n\n  而继续反扑向信奥班本部！\n\n  于是，四皇们决定进军SLFDC本部！\n\n  政府在这时风雨飘摇，欲摧不倒！\n\n  江山即将易主，已经可以看到黎明的曙光！");
	if (Ju == 4) Slow(50, "\n  -----------第四章-----------\n\n  震撼人心的“SLFDC顶上战争”终于爆发了！\n\n  前线军队战斗的轰轰烈烈，尸横遍地！\n\n  在弹尽粮绝之时，你忽然发现，自己已变得超乎想象的强大！\n\n  你从尸山血海中站起，\n\n  经历的所有战争均是超乎想象的宏大！\n\n  你始终相信，终有一天，希望将照在这辽阔的大地上！");
	if (Ju == 5) Slow(50, "\n  -----------第五章-----------\n\n  战争结束了！\n\n  你的目标终于达成了！\n\n  接下来，你就可以肆无忌惮的在你的国度除恶扬善了！\n  .\n  .\n  .\n  .\n  .\n  .\n\n  剧情走完，游戏继续！");
	Sleep(3000), system("cls");
	if (Ju <= 1) return;
	printf("\n  升级了！\n\n");
	Sleep(1000);
	printf("  闪避率+2%\n\n");
	Sleep(500);
	printf("  同伴现有技能攻击力+20%\n\n");
	Sleep(500);
	printf("  新创自定义技能气量*90%\n\n");
	Sleep(500);
	printf("  战斗金币量+10%\n\n");
	Sleep(500);
	printf("  胜利EXP量+10%\n\n");
	Sleep(500);
	printf("  游戏难度加大！\n\n");
	Sleep(500);
	You[0].Shan += 2;
	for (int i = 1; i < 100; i++) {
		Skill[i].Kill * 1.2;
		for (int j = 1; j <= Skill[i].Any; j++) Skill[i].Anykill[j] * 1.2;
	}
	Sleep(3000), system("cls");
	Color(0);
}
void LaoHu() {
	system("cls");
	Color(0);
	printf("\n  -----------老虎机-----------\n");
	for (int i = 1; i <= 50; i++) {
		SetPos(5, 5);
		cout << "            ";
		Color(rand() % 13);
		SetPos(5, 5);
		cout << "出奖中。。。";
		Sleep(30);
	}
	Color(5);
	SetPos(5, 2);
	cout << "恭喜获得";
Re:
	int ssa = rand() % 6, sr;
	if (ssa == 0) {
		sr = rand() % 400 + 100;
		cout << "金币" << sr << "个！";
		You[0].Money += sr;
	}
	if (ssa == 1) {
		sr = rand() % 50 + 30;
		cout << "经验" << sr << "点！";
		You[0].EXP += sr;
	}
	if (ssa == 2) {
KKP:
		sr = rand() % 24 + 4;
		for (int i = 1; i <= You[0].Skilnum; i++) if (You[0].Skil[i] == sr) goto KKP;
		for (int i = 1; i <= skk; i++) if (Skkk[i] == sr) goto KKP;
		if (Skill[sr].What == 3 && Skill[sr].Anywhat[1] == 5) goto KKP; //召唤
		if (Skill[sr].What == 1 && Skill[sr].Anywhat[1] == 10) goto KKP; //偷钱
		skk++, Skkk[skk] = sr;
		cout << "系统特惠技能：";
		Color(Skill[Skkk[skk]].color);
		cout << Skill[Skkk[skk]].Name;
		Color(5), cout << "！";
	}
	if (ssa == 3) {
		if (Tong == Tongmax) goto Re;
		Tong++;
		int i = Tong;
		You[i].Skilnum = 0;
		You[i].Bloodmax = You[0].Bloodmax - 10 + rand() % 21;
		You[i].Skilmax = 3 + rand() % 3;
		printf("新同伴（血量%d，技能上限%d，会学习）！", You[i].Bloodmax, You[i].Skilmax);
	}
	if (ssa == 4) {
		cout << "新技能槽！";
		You[0].Skilmax++;
	}
	if (ssa == 5) {
		cout << "血量上限+20%！";
		You[0].Bloodmax *= 1.2;
	}
	Sleep(1000);
}
void Store() {
St:
	system("cls");
	Color(0);
	if (Jiao == 12) {
		SetPos(22, 1), Color(5), printf("教程提示 12 ：但是，此游戏的成功方式只有一个：\n             将游戏的剧情完结！\n             按 0 退出，否则退出教程。"), Color(0);
		SetPos(0, 0);
	}
	printf("\n  ------------商店------------\n");
	printf("\n  Money:%d\n", You[0].Money);
	printf("\n  1.同伴招募                    --- $300\n");
	printf("\n  2.药水商店\n");
	printf("\n  3.经验升级区\n");
	printf("\n  4.老虎机 (会抽出什么呢？...)  --- $300\n");
	printf("\n  输入 0 退出。----- ");
	int a;
	cin >> a;
	if (a == 0 && Jiao == 12) Jiao++, You[0].EXP = 100;
	else if (Jiao != 14) Jiao = -1;
	if (a == 1 && You[0].Money >= 300 && Tong < Tongmax) {
		Tong++;
		int i = Tong;
		You[i].Skilnum = 0;
		You[0].Money -= 300;
		You[i].Bloodmax = You[0].Bloodmax - 10 + rand() % 21;
		You[i].Skilmax = 3 + rand() % 3;
		Color(5), printf("\n  恭喜获得新同伴（血量%d，技能上限%d，会学习）！", You[i].Bloodmax, You[i].Skilmax);
		Color(0), Sleep(3000);
	}
	if (a == 2) {
Sto:
		system("cls");
		Color(0);
		printf("\n  ----------药水商店----------\n");
		printf("\n  注意：所有药水均为自动使用一次性。\n");
		printf("\n  Money:%d\n", You[0].Money);
		printf("\n  1.生命药水 (初始血量+10%) [已有%d个]  --- $30\n", Shen);
		printf("\n  2.复活药水 (且回血20)     [已有%d个]  --- $50\n", Fu);
		printf("\n  3.敏捷药水 (闪避率+20%)   [已有%d个]  --- $50\n", Shan);
		printf("\n  4.狂暴药水 (回合率+20%)   [已有%d个]  --- $50\n", Ji);
		printf("\n  5.元气药水 (开局1口气)    [已有%d个]  --- $30\n", Yuan);
		printf("\n  6.经验药水 (+10 EXP)                  --- $100\n");
		printf("\n  输入 0 退出。----- ");
		int aa;
		cin >> aa;
		if (aa == 1 && You[0].Money >= 30) Shen++, You[0].Money -= 30;
		if (aa == 2 && You[0].Money >= 50) Fu++, You[0].Money -= 50;
		if (aa == 3 && You[0].Money >= 50) Shan++, You[0].Money -= 50;
		if (aa == 4 && You[0].Money >= 50) Ji++, You[0].Money -= 50;
		if (aa == 5 && You[0].Money >= 30) Yuan++, You[0].Money -= 30;
		if (aa == 6 && You[0].Money >= 100) You[0].EXP += 20, You[0].Money -= 100;
		if (aa != 0) goto Sto;
	}
	if (a == 3) {
Stoo:
		system("cls");
		Color(0);
		printf("\n  ---------经验升级区---------\n");
		printf("\n  EXP:%d\n", You[0].EXP);
		printf("\n  1.血量上限+10% [已为%d点]  --- 50 EXP\n", You[0].Bloodmax);
		printf("\n  2.回合加气+0.2 [已为%0.1f口]  --- 50 EXP\n", You[0].Qijia);
		printf("\n  3.回合加血+5  [已为%d点]  --- 70 EXP\n", You[0].Bloodjia);
		printf("\n  4.闪避率+5%   [已为%d%]  --- 70 EXP\n", You[0].Shan);
		printf("\n  5.技能槽+1     [已为%d个]  --- 100 EXP\n", You[0].Skilmax);
		printf("\n  6.同伴上限+1   [已为%d个]  --- 100 EXP\n", Tongmax);
		printf("\n  7.同伴升级区\n");
		printf("\n  输入 0 退出。----- ");
		int aaa;
		cin >> aaa;
		if (aaa == 7 && Jiao == 13) Jiao++;
		else if (Jiao != 14) Jiao = -1;
		if (aaa == 1 && You[0].EXP >= 50) You[0].Bloodmax *= 1.1, You[0].EXP -= 50;
		if (aaa == 2 && You[0].EXP >= 50) You[0].Qijia += 0.2, You[0].EXP -= 50;
		if (aaa == 3 && You[0].EXP >= 70) You[0].Bloodjia += 5, You[0].EXP -= 70;
		if (aaa == 4 && You[0].EXP >= 70) You[0].Shan += 5, You[0].EXP -= 70;
		if (aaa == 5 && You[0].EXP >= 100) You[0].Skilmax++, You[0].EXP -= 100;
		if (aaa == 6 && You[0].EXP >= 100) Tongmax++, You[0].EXP -= 100;
		if (aaa == 7) {
So:
			system("cls");
			Color(0);
			printf("\n  ---------同伴升级区---------\n");
			printf("\n  EXP:%d     同伴数量：%d\n", You[0].EXP, Tong);
			printf("\n  你要升级同伴几？(输入 0 退出)----- ");
			int i;
			cin >> i;
			if (i == 0) goto Stoo;
Soo:
			SetPos(5, 1);
			printf("同伴%d：                                \n", i);
			printf("\n  血量上限：%d     （+10%按1 --- 50EXP）\n", You[i].Bloodmax);
			printf("\n  回合加血：%d     （+5按2   --- 70EXP）\n", You[i].Bloodjia);
			printf("\n  闪避率：%d%      （+5%按3   --- 70EXP）\n", You[i].Shan);
			printf("\n  技能数量上限：%d （+1按4   --- 100EXP）\n", You[i].Skilmax, You[i].Skilnum);
			for (int j = 1; j <= You[i].Skilnum; j++)printf("\n  ----第%d技能：", j), Color(Skill[You[i].Skil[j]].color), cout << Skill[You[i].Skil[j]].Name, Color(0), printf("    （删除按%d）\n", 4 + j);
			printf("\n  输入 0 重选。----- ");
			int ab;
			cin >> ab;
			if (ab == 1 && You[0].EXP >= 50) You[i].Bloodmax *= 1.1, You[0].EXP -= 50;
			if (ab == 2 && You[0].EXP >= 70) You[i].Bloodjia += 5, You[0].EXP -= 70;
			if (ab == 3 && You[0].EXP >= 70) You[i].Shan += 5, You[0].EXP -= 70;
			if (ab == 4 && You[0].EXP >= 100) You[i].Skilmax++, You[0].EXP -= 100;
			if (ab > 4) {
				ab -= 4;
				You[i].Skilnum--;
				for (int j = ab; j < You[i].Skilnum; j++) swap(You[i].Skil[j], You[i].Skil[j + 1]);
				You[i].Skil[You[i].Skilnum + 1] = 0;
			}
			if (ab != 0) {
				system("cls");
				Color(0);
				printf("\n  ---------同伴升级区---------\n");
				printf("\n  EXP:%d     同伴数量：%d\n", You[0].EXP, Tong);
				goto Soo;
			}
			if (ab == 0) goto So;
		}
		if (aaa != 0) goto Stoo;
	}
	if (a == 4 && You[0].Money >= 300) LaoHu(), You[0].Money -= 300;
	if (a != 0) goto St;
}
void Startguai(int a) {
	char *str;
	dy++;
	Dy++;
	if (a == 1) {
		str = "剑客";
		for (int i = 0; i < strlen(str); i++)Guai[dy].Name[i] = str[i];
		Guai[dy].Blood = 80;
		Guai[dy].Money = 10;
		Guai[dy].Skilnum = 2, Guai[dy].Skil[1] = 1, Guai[dy].Skilstr[1] = 40, Guai[dy].Skil[2] = 4, Guai[dy].Skilstr[2] = 90;
	}
	if (a == 2) {
		str = "守卫兵";
		for (int i = 0; i < strlen(str); i++)Guai[dy].Name[i] = str[i];
		Guai[dy].Blood = 100;
		Guai[dy].Money = 20;
		Guai[dy].Skilnum = 2, Guai[dy].Skil[1] = 5, Guai[dy].Skilstr[1] = 30, Guai[dy].Skil[2] = 6, Guai[dy].Skilstr[2] = 90;
	}
	if (a == 3) {
		str = "史莱姆";
		for (int i = 0; i < strlen(str); i++)Guai[dy].Name[i] = str[i];
		Guai[dy].Blood = 50;
		Guai[dy].Money = 10;
		Guai[dy].Skilnum = 2, Guai[dy].Skil[1] = 7, Guai[dy].Skilstr[1] = 50, Guai[dy].Skil[2] = 8, Guai[dy].Skilstr[2] = 90;
	}
	if (a == 4) {
		str = "模仿者";
		for (int i = 0; i < strlen(str); i++)Guai[dy].Name[i] = str[i];
		Guai[dy].Blood = You[0].Blood;
		Guai[dy].Money = 20;
		Guai[dy].Skilnum = 3, Guai[dy].Skil[1] = You[0].Skil[1], Guai[dy].Skilstr[1] = 30, Guai[dy].Skil[2] = You[0].Skil[2], Guai[dy].Skilstr[2] = 60, Guai[dy].Skil[3] = You[0].Skil[3], Guai[dy].Skilstr[3] = 90;
	}
	if (a == 5) {
		str = "魔术师";
		for (int i = 0; i < strlen(str); i++)Guai[dy].Name[i] = str[i];
		Guai[dy].Blood = 80;
		Guai[dy].Money = 25;
		Guai[dy].Skilnum = 3, Guai[dy].Skil[1] = 9, Guai[dy].Skilstr[1] = 20, Guai[dy].Skil[2] = 5, Guai[dy].Skilstr[2] = 40, Guai[dy].Skil[3] = 6, Guai[dy].Skilstr[3] = 90;
	}
	if (a == 6) {
		str = "巫医";
		for (int i = 0; i < strlen(str); i++)Guai[dy].Name[i] = str[i];
		Guai[dy].Blood = 70;
		Guai[dy].Money = 20;
		Guai[dy].Skilnum = 3;
		Guai[dy].Skil[1] = 15, Guai[dy].Skilstr[1] = 40;
		Guai[dy].Skil[2] = 16, Guai[dy].Skilstr[2] = 60;
		Guai[dy].Skil[3] = 17, Guai[dy].Skilstr[3] = 90;
	}
	if (a == 7) {
		str = "法师";
		for (int i = 0; i < strlen(str); i++)Guai[dy].Name[i] = str[i];
		Guai[dy].Blood = 80;
		Guai[dy].Money = 30;
		Guai[dy].Skilnum = 3, Guai[dy].Skil[1] = 2, Guai[dy].Skilstr[1] = 20, Guai[dy].Skil[2] = 10, Guai[dy].Skilstr[2] = 50, Guai[dy].Skil[3] = 11, Guai[dy].Skilstr[3] = 90;
	}
	if (a == 8) {
		str = "雪怪";
		for (int i = 0; i < strlen(str); i++)Guai[dy].Name[i] = str[i];
		Guai[dy].Blood = 150;
		Guai[dy].Money = 50;
		Guai[dy].Skilnum = 3;
		Guai[dy].Skil[1] = 12, Guai[dy].Skilstr[1] = 50;
		Guai[dy].Skil[2] = 13, Guai[dy].Skilstr[2] = 60;
		Guai[dy].Skil[3] = 14, Guai[dy].Skilstr[3] = 90;
	}
	if (a == 9) {
		str = "巨人";
		for (int i = 0; i < strlen(str); i++)Guai[dy].Name[i] = str[i];
		Guai[dy].Blood = 200;
		Guai[dy].Money = 50;
		Guai[dy].Skilnum = 2;
		Guai[dy].Skil[1] = 18, Guai[dy].Skilstr[1] = 40;
		Guai[dy].Skil[2] = 19, Guai[dy].Skilstr[2] = 90;
	}
	if (a == 10) {
		str = "蝙蝠";
		for (int i = 0; i < strlen(str); i++)Guai[dy].Name[i] = str[i];
		Guai[dy].Blood = 20;
		Guai[dy].Money = 3;
		Guai[dy].Skilnum = 2, Guai[dy].Skil[1] = 20, Guai[dy].Skilstr[1] = 60, Guai[dy].Skil[2] = 21, Guai[dy].Skilstr[2] = 90;
	}
	if (a == 11) {
		str = "乞丐";
		for (int i = 0; i < strlen(str); i++)Guai[dy].Name[i] = str[i];
		Guai[dy].Blood = 100;
		Guai[dy].Money = 30;
		Guai[dy].Skilnum = 3, Guai[dy].Skil[1] = 22, Guai[dy].Skilstr[1] = 40, Guai[dy].Skil[2] = 23, Guai[dy].Skilstr[2] = 80, Guai[dy].Skil[3] = 24, Guai[dy].Skilstr[3] = 90;
	}
	if (a == 12) {
		str = "弓箭手";
		for (int i = 0; i < strlen(str); i++)Guai[dy].Name[i] = str[i];
		Guai[dy].Blood = 80;
		Guai[dy].Money = 10;
		Guai[dy].Skilnum = 2, Guai[dy].Skil[1] = 26, Guai[dy].Skilstr[1] = 40, Guai[dy].Skil[2] = 25, Guai[dy].Skilstr[2] = 90;
	}
	if (a == 13) {
		str = "哥布林";
		for (int i = 0; i < strlen(str); i++)Guai[dy].Name[i] = str[i];
		Guai[dy].Blood = 50;
		Guai[dy].Money = 15;
		Guai[dy].Skilnum = 2, Guai[dy].Skil[1] = 5, Guai[dy].Skilstr[1] = 20, Guai[dy].Skil[2] = 27, Guai[dy].Skilstr[2] = 90, Guai[dy].Skil[2] = 27, Guai[dy].Skilstr[3] = 90;
	}
	if (a == 14) {
		str = "酒鬼";
		for (int i = 0; i < strlen(str); i++)Guai[dy].Name[i] = str[i];
		Guai[dy].Blood = 100;
		Guai[dy].Money = 30;
		Guai[dy].Skilnum = 3, Guai[dy].Skil[1] = 28, Guai[dy].Skilstr[1] = 30, Guai[dy].Skil[2] = 29, Guai[dy].Skilstr[2] = 60, Guai[dy].Skil[3] = 22, Guai[dy].Skilstr[3] = 90;
	}
	if (a == 15) {
		str = "战争机器";
		for (int i = 0; i < strlen(str); i++)Guai[dy].Name[i] = str[i];
		Guai[dy].Blood = 200;
		Guai[dy].Money = 70;
		Guai[dy].Skilnum = 3;
		Guai[dy].Skil[1] = 30, Guai[dy].Skilstr[1] = 40;
		Guai[dy].Skil[2] = 31, Guai[dy].Skilstr[2] = 70;
		Guai[dy].Skil[3] = 32, Guai[dy].Skilstr[3] = 90;
	}
	Guai[dy].Blood *= (0.5 * Ju);
	Guai[dy].Blood += rand() % 11 - 5;
	Guai[dy].Bloodmax = Guai[dy].Blood;
	Guai[dy].Money *= (0.8 + 0.1 * Ju);
	Guai[dy].Shan = (Ju - 2) * 5;
}
void Startwar() {
	char *str;
	dy = Dy = 0;
	dd = Dd = Tong + 1;
	memset(Guai, 0, sizeof(Guai)); // dd=你方
	You[0].Blp = You[0].Blpt = You[0].Duk = You[0].Dut = You[0].Ice = You[0].Yun = You[0].Wudi = You[0].Wudit = You[0].Qipt = You[0].Qi = You[0].Qip = 0;
	for (int i = 1; i <= Tong; i++) {
		str = "同伴";
		You[i].Name[4] = i + '0';
		for (int j = 0; j < strlen(str); j++)You[i].Name[j] = str[j];
		You[i].Blood = You[i].Bloodmax;
		You[i].Blp = You[i].Blpt = You[i].Duk = You[i].Dut = You[i].Ice = You[i].Yun = You[i].Wudi = You[i].Wudit = You[i].Qipt = You[i].Qi = You[i].Qip = 0;
	}
	int r = max(Dd + rand() % 3 - 1, 1);
	int t = rand() % 6;
	if (t < Ju) r++;
	for (int i = 1; i <= r; i++) Startguai(rand() % 15 + 1);
}
void War() {
As:
	system("cls");
	Color(0);
	if (Jiao == 2) {
		SetPos(22, 1), Color(5), printf("教程提示 2 ：杀死所有敌人即可获胜。\n             反之，你队全亡就会失败。\n             按 y 开始，否则退出教程。"), Color(0);
		SetPos(0, 0);
	}
	if (Jiao == 6) {
		SetPos(22, 1), Color(5), printf("教程提示 6 ：你的气数会每回合增长。\n             但敌人与同伴使用技能没有气数限制。\n             按 y 开始，否则退出教程。"), Color(0);
		SetPos(0, 0);
	}
	if (Jiao == 10) {
		SetPos(22, 1), Color(5), printf("教程提示 10 ：同伴是没有初始技能的。\n             他会在战斗中自我学习，你们的血量在对战后均会回满。\n             按 y 开始，否则退出教程。"), Color(0);
		SetPos(0, 0);
	}
	SetPos(1, 1), printf("----------战斗界面----------\n\n");
	memset(Y, 0, sizeof(Y));
	memset(D, 0, sizeof(D));
	Startwar();
	if (Juk == 10) {
		Juk = 0, Juing(), Ju++;
		goto As;
	}
	printf("  你将面临的敌人是：\n");
	for (int i = 1; i <= dy; i++) {
		printf("\n  %d： %s   血量： %d   掉落金币： %d", i, Guai[i].Name, Guai[i].Blood, Guai[i].Money);
	}
	cout << "\n\n  按 y 开始战斗，按其余键退出 (损失 30" << '%' << " EXP)。----- ";
	char q;
	cin >> q;
	if (q != 'y' && (Jiao == 2 || Jiao == 6 || Jiao == 10)) Jiao = -1;
	if (q == 'y' && (Jiao == 2 || Jiao == 6 || Jiao == 10)) Jiao++;
	if (q != 'y') {
		You[0].EXP *= 0.7;
		return;
	}
	system("cls");
	SetPos(1, 1), printf("\n---------开始战斗！---------\n\n");
	if (Yuan >= 1) You[0].Qi = 1;
	if (Shen >= 1) You[0].Blood *= 1.1;
	int sh, pan;
	if (Shan >= 1) You[0].Shan += 20, sh = 1;
	while (dy != 0 && dd != 0) {
		pan = 0;
KK:
		pan++;
		if (pan >= 10) break;
		sa = rand() % (dd + dy);
		sc = 0;
		if (Ji > 0 && You[0].Blood > 0) sc = rand() % 5;
		if (sa < dd) sa = 0;
		else sa = 1;
		if (k3 >= 2) sa = 1;
		if (k4 >= 2) sa = 0;
		if (sa == 0) sb = rand() % Dd; //你攻
		if (sa == 1) sb = rand() % Dy + 1; //怪攻
		if (sc == 4) sa = 0, sb = 0;
		if (sa == 0 && You[sb].Blood <= 0) goto KK;
		if (sa == 1 && Guai[sb].Blood <= 0) goto KK;
		if ((sa == 0 && sb == k1) || (sa == 1 && sb == k2)) goto KK;
		if (sa == 0) {
			k1 = sb, k2 = 0, k3++, k4 = 0;
			if (dy <= 0 || dd <= 0) break;
			Killguai(sb);
		}
		if (sa == 1) {
			k1 = -1, k2 = sb, k3 = 0, k4++;
			if (dy <= 0 || dd <= 0) break;
			Killyou(sb);
		}
		if (dy <= 0 || dd <= 0) break;
		Sleep(500);
	}
	Shen = max(Shen - 1, 0);
	Ji = max(Ji - 1, 0);
	Shan = max(Shan - 1, 0);
	Yuan = max(Yuan - 1, 0);
	if (sh == 1) You[0].Shan -= 20;
	int ai = (10 + Dy * 2) * (0.8 + 0.1 * Ju);
	int bi = (10 + Dd * 5) * (0.8 + 0.1 * Ju);
	if (dy == 0) Color(5), printf("\n  你胜利了！！获得%dEXP！\n", ai), You[0].EXP += ai, Juk += rand() % 2;
	else Color(4), printf("\n  你失败了！！减少%d金币！\n", bi), You[0].Money = max(0, You[0].Money - bi);
	Sleep(3000);
}
bool Read() {
	ifstream in("这是你的存档.in");
	unsigned long long ioi = 0, ioix;
	long long Moo = 1e9 + 7;
	in >> You[0].Name;
	for (int i = 0; i < strlen(You[0].Name); i++) ioi = (ioi + (int)You[0].Name[i]) * 101 % Moo;
	in >> Skll >> skk >> Tong >> Tongmax >> Ju >> Juk >> Jiao >> Shen >> Ji >> Yuan >> Shan >> Fu;
	ioi = (ioi + Skll * 103 + skk * 107 + Tong * 109 + Tongmax * 113 + Ju * 127 + Juk * 131 + Jiao * 137 + Shen * 139 + Ji * 149 + Yuan * 151 + Shan * 157 + Fu * 163) % Moo;
	for (int i = 0; i <= Tong; i++) {
		in >> You[i].Blood >> You[i].Bloodmax >> You[i].Bloodjia >> You[i].Skilnum >> You[i].Skilmax >> You[i].Money >> You[i].EXP >> You[i].Shan;
		in >> You[i].Qijia;
		ioi += (2 * ioi + You[i].Blood * 167 + You[i].Bloodmax * 173 + You[i].Bloodjia * 179 + You[i].Skilnum * 181 + You[i].Skilmax * 191 + You[i].Money * 193 + You[i].EXP * 197 + You[i].Shan * 211 + (int)You[i].Qijia * 223) % Moo;
		for (int j = 1; j <= You[i].Skilnum; j++) in >> You[i].Skil[j], ioi += i * j * (ioi + You[i].Skil[j]) * 227 % Moo;
	}
	for (int i = 100; i <= 99 + Skll; i++) {
		in >> Skill[i].Name;
		for (int j = 0; j < strlen(Skill[i].Name); j++) ioi += i * j * (ioi + (int)Skill[i].Name[j]) * 229 % Moo;
		in >> Skill[i].Qi >> Skill[i].Kill >> Skill[i].What >> Skill[i].color >> Skill[i].Any;
		ioi = ioi + Skill[i].Qi * 233 + Skill[i].Kill * 239 + Skill[i].What * 241 + Skill[i].color * 251 + Skill[i].Any * 257;
		ioi %= Moo;
		for (int j = 1; j <= Skill[i].Any; j++) {
			in >> Skill[i].Anykill[j] >> Skill[i].Anywhat[j] >> Skill[i].Time[j], in >> Skill[i].Anyqi[j];
			ioi += i * j * (ioi + Skill[i].Anykill[j] * 263 + Skill[i].Anywhat[j] * 269 + Skill[i].Time[j] * 271 + (int)Skill[i].Anyqi[j] * 277) % Moo;
		}
	}
	for (int i = 1; i <= skk; i++) in >> Skkk[i], ioi += (ioi + Skkk[i]) * 281 % Moo;
	in >> ioix;
//	if (ioix != ioi) {
//		in.close();
//		return 0;
//	}
	in.close();
	return 1;
}
void Save() {
	unsigned long long ioi = 0;
	long long Moo = 1e9 + 7;
	ofstream out("这是你的存档.in");
	out << You[0].Name << '\n';
	for (int i = 0; i < strlen(You[0].Name); i++) ioi = (ioi + (int)You[0].Name[i]) * 101 % Moo;
	out << Skll << ' ' << skk << ' ' << Tong << ' ' << Tongmax << ' ' << Ju << ' ' << Juk << ' ' << Jiao << ' ' << Shen << ' ' << Ji << ' ' << Yuan << ' ' << Shan << ' ' << Fu << '\n';
	ioi = (ioi + Skll * 103 + skk * 107 + Tong * 109 + Tongmax * 113 + Ju * 127 + Juk * 131 + Jiao * 137 + Shen * 139 + Ji * 149 + Yuan * 151 + Shan * 157 + Fu * 163) % Moo;
	for (int i = 0; i <= Tong; i++) {
		out << You[i].Blood << ' ' << You[i].Bloodmax << ' ' << You[i].Bloodjia << ' ' << You[i].Skilnum << ' ' << You[i].Skilmax << ' ' << You[i].Money << ' ' << You[i].EXP << ' ' << You[i].Shan << ' ';
		out << You[i].Qijia << '\n';
		ioi += (2 * ioi + You[i].Blood * 167 + You[i].Bloodmax * 173 + You[i].Bloodjia * 179 + You[i].Skilnum * 181 + You[i].Skilmax * 191 + You[i].Money * 193 + You[i].EXP * 197 + You[i].Shan * 211 + (int)You[i].Qijia * 223) % Moo;
		for (int j = 1; j <= You[i].Skilnum; j++) out << You[i].Skil[j] << ' ', ioi += i * j * (ioi + You[i].Skil[j]) * 227 % Moo;
		out << '\n';
	}
	for (int i = 100; i <= 99 + Skll; i++) {
		out << Skill[i].Name << '\n';
		for (int j = 0; j < strlen(Skill[i].Name); j++) ioi += i * j * (ioi + (int)Skill[i].Name[j]) * 229 % Moo;
		out << Skill[i].Qi << ' ' << Skill[i].Kill << ' ' << Skill[i].What << ' ' << Skill[i].color << ' ' << Skill[i].Any << '\n';
		ioi = ioi + Skill[i].Qi * 233 + Skill[i].Kill * 239 + Skill[i].What * 241 + Skill[i].color * 251 + Skill[i].Any * 257;
		ioi %= Moo;
		for (int j = 1; j <= Skill[i].Any; j++) {
			out << Skill[i].Anykill[j] << ' ' << Skill[i].Anywhat[j] << ' ' << Skill[i].Time[j] << ' ', out << Skill[i].Anyqi[j] << '\n';
			ioi += i * j * (ioi + Skill[i].Anykill[j] * 263 + Skill[i].Anywhat[j] * 269 + Skill[i].Time[j] * 271 + (int)Skill[i].Anyqi[j] * 277) % Moo;
		}
	}
	for (int i = 1; i <= skk; i++) out << Skkk[i] << ' ', ioi += (ioi + Skkk[i]) * 281 % Moo;
	out << '\n';
	out << '\n' << ioi;
	out.close();
}
void Cun() {
yy:
	system("cls");
	Color(0);
	SetPos(1, 1), printf("---------存读档界面---------");
	SetPos(3, 1), printf("读档按1  存档按2 -----");
	int a;
	cin >> a;
	if (a == 1) {
		printf("\n  你需要将你之前的存档与此程序放入一个文件夹中。\n");
		printf("\n  不要更改名字与内容！\n");
		printf("\n  准备好了吗？按任意键开始！\n");
		char b;
		b = _getch();
		Slow(50, "\n    读档中......\n");
		if (Read()) Color(5), printf("\n    读档成功！\n");
		else {
			Color(4), printf("\n  读档失败！这个档一定被修改过！\n\n");
			Slow(200, "  啊......愚昧无知的人类啊......\n\n  接受来自胎神的惩罚吧！......\n\n");
			Color(5), printf("\n  全新！黑色字体特效，开启！！\n\n");
			Color(0);
			Black = 1;
			Sleep(1000);
		}
		Color(0), Sleep(1000);
	}
	if (a == 2) {
		printf("\n  你需要将此程序放入一个文件夹中。\n");
		printf("\n  注意此操作会覆盖之前的存档。\n");
		printf("\n  准备好了吗？按任意键开始！\n");
		char b;
		b = _getch();
		Save();
		Slow(50, "\n    存档中......\n");
		Color(5), printf("\n    存档成功！\n");
		Color(0), Sleep(1000);
	}
}
void Main() {
	system("cls");
	Color(0);
	You[0].Blood = You[0].Bloodmax;
	int a = -2019;
	SetPos(1, 1), printf("-----------主界面-----------");
	SetPos(3, 1), printf("金币：%d   经验值：%d   血量：%d", You[0].Money, You[0].EXP, You[0].Blood);
	SetPos(5, 1), printf("Hi，%s，What do you want to do now?", You[0].Name);
	SetPos(7, 1), printf("1.开始战斗！");
	SetPos(9, 1), printf("2.存档与读档。");
	SetPos(11, 1), printf("3.查看本体技能。");
	SetPos(13, 1), printf("4.修改本体技能。");
	SetPos(15, 1), printf("5.创造自定义技能。");
	SetPos(17, 1), printf("6.前往商店。");
	SetPos(19, 1), printf("7.查看小兵数据。");
	SetPos(21, 1), printf("--------- ");
	if (Jiao == 15) {
		SetPos(22, 1), Color(5), printf("教程提示 15 ：剩下的需要自己去摸索了，教程结束。"), Color(0);
		Jiao = -1;
	}
	if (Jiao == 14) {
		SetPos(22, 1), Color(5), printf("教程提示 14 ：当你想保存游戏进度时，可以选择存档。\n             在下一次游戏中，你可以读档来继续游戏。\n             按 2 存档，否则退出教程。"), Color(0);
		SetPos(21, 6), cin >> a;
		if (a == 2) Jiao++;
		else Jiao = -1;
	}
	if (Jiao == 13) {
		SetPos(22, 1), Color(5), printf("教程提示 13 ：剧情会在对战前随机刷出\n             我们来看看剧情的第一章吧！\n             按 1 开始，否则退出教程。"), Color(0);
		SetPos(21, 6), cin >> a;
		if (a == 6) Jiao++, Ju = 1, Juk = 10;
		else Jiao = -1;
	}
	if (Jiao == 11) {
		SetPos(22, 1), Color(5), printf("教程提示 11 ：你可以购买药水增幅自己。\n             而在老虎机中，你可以抽出一些更实用的物品！\n             按 6 购买，否则退出教程。"), Color(0);
		SetPos(21, 6), cin >> a;
		if (a == 6) Jiao++, You[0].Money = 200;
		else Jiao = -1;
	}
	if (Jiao == 9) {
		SetPos(22, 1), Color(5), printf("教程提示 9 ：一人对战比较困难，\n             我们来试试和同伴一起战斗吧。\n             按 1 对战，否则退出教程。"), Color(0);
		SetPos(21, 6), cin >> a;
		if (a == 1) Jiao++, Tong++, You[1].Bloodmax = 100, You[1].Skilmax = 3;
		else Jiao = -1;
	}
	if (Jiao == 7) {
		SetPos(22, 1), Color(5), printf("教程提示 7 ：除了一个一个攻击敌人，你还可以使用群攻技能。\n             我们提供了一个群攻技能给你。\n             按 4 装备，否则退出教程。"), Color(0);
		SetPos(21, 6), cin >> a;
		if (a == 4) Jiao++, skk = 1, Skkk[1] = 3;
		else Jiao = -1;
	}
	if (Jiao == 5) {
		SetPos(22, 1), Color(5), printf("教程提示 5 ：在对战中，会轮到你的回合\n             你只能你的回合中才能使用技能。\n             按 1 对战，否则退出教程。"), Color(0);
		SetPos(21, 6), cin >> a;
		if (a == 1) Jiao++;
		else Jiao = -1;
	}
	if (Jiao == 3) {
		SetPos(22, 1), Color(5), printf("教程提示 3 ：只用刀对战比较困难，\n             你可以使用技能来对战，来装备你的第一个技能吧。\n             按 4 装备，否则退出教程。"), Color(0);
		SetPos(21, 6), cin >> a;
		if (a == 4) Jiao++, skk = 1, Skkk[1] = 2;
		else Jiao = -1;
	}
	if (Jiao == 1) {
		SetPos(22, 1), Color(5), printf("教程提示 1 ：本游戏是一个团队对战游戏，\n             一切基础是建立在“开始战斗！”模式下的。\n             按 1 对战，否则退出教程。"), Color(0);
		SetPos(21, 6), cin >> a;
		if (a == 1) Jiao++;
		else Jiao = -1;
	}
	SetPos(21, 6);
	if (a == -2019) cin >> a;
	if (a == 1) War();
	if (a == 2) Cun();
	if (a == 3) CheckMe();
	if (a == 4) ChangeSkill();
	if (a == 5) StartSkill();
	if (a == 6) Store();
	if (a == 7) CheckUs();
}
void Start() {
	char *str, aa;
	Color(0);
	printf("\n  Hi,请输入你的名字......");
	scanf("%s", You[0].Name);
	printf("\n  要开始教程吗？（按 y / n 选择）..... ");
	cin >> aa;
	if (aa == 'y') {
		printf("\n\n  如果你是在本机第一次玩此游戏......");
		printf("\n\n  请将鼠标移至程序框上方按鼠标右键......");
		printf("\n\n  点击“默认值”......");
		printf("\n\n  点击“布局”......");
		printf("\n\n  将“屏幕缓冲区大小”调为1000 1000......");
		printf("\n\n  然后关闭此程序，重启一次......");
		printf("\n\n  按任意键开始！");
		char a;
		a = _getch();
		Jiao = 1;
	} else skk = 2, Skkk[1] = 2, Skkk[2] = 3, You[0].Money = 200, You[0].EXP = 100, Tong = 1, You[1].Bloodmax = 100, You[1].Skilmax = 3, Ju = 1, Juk = 10;
	You[0].Qi = 0, You[0].Blood = You[0].Bloodmax = 100, You[0].Skilnum = 1, You[0].Skilmax = 2, You[0].Skil[1] = 1, Tongmax = 2, You[0].Qijia = 0.5;
	str = "刀斩";
	for (int i = 0; i < strlen(str); i++)Skill[1].Name[i] = str[i];
	Skill[1].Kill = 10, Skill[1].What = 1, Skill[1].Any = 0, Skill[1].color = 7, Skill[1].Qi = 0;
	str = "火球";
	for (int i = 0; i < strlen(str); i++)Skill[2].Name[i] = str[i];
	Skill[2].Kill = 30, Skill[2].What = 1, Skill[2].Any = 0, Skill[2].color = 4, Skill[2].Qi = 1;
	str = "流星雨";
	for (int i = 0; i < strlen(str); i++)Skill[3].Name[i] = str[i];
	Skill[3].Kill = 30, Skill[3].What = 2, Skill[3].Any = 0, Skill[3].color = 5, Skill[3].Qi = 2;
	str = "劈剑";
	for (int i = 0; i < strlen(str); i++)Skill[4].Name[i] = str[i];
	Skill[4].Kill = 20, Skill[4].What = 1, Skill[4].Any = 0, Skill[4].color = 12, Skill[4].Qi = 0.2;
	str = "背刺";
	for (int i = 0; i < strlen(str); i++)Skill[5].Name[i] = str[i];
	Skill[5].Kill = 50, Skill[5].What = 1, Skill[5].Any = 1, Skill[5].Anywhat[1] = 5, Skill[5].Anykill[1] = 30, Skill[5].color = 3, Skill[5].Qi = 1.5;
	str = "飞刀";
	for (int i = 0; i < strlen(str); i++)Skill[6].Name[i] = str[i];
	Skill[6].Kill = 10, Skill[6].What = 1, Skill[6].Any = 1, Skill[6].Anywhat[1] = 4, Skill[6].Anykill[1] = 30, Skill[6].color = 1, Skill[6].Qi = 1.5;
	str = "粘液弹";
	for (int i = 0; i < strlen(str); i++)Skill[7].Name[i] = str[i];
	Skill[7].Kill = 10, Skill[7].What = 2, Skill[7].Any = 1, Skill[7].Anywhat[1] = 5, Skill[7].Anykill[1] = 70, Skill[7].color = 2, Skill[7].Qi = 2;
	str = "碾压";
	for (int i = 0; i < strlen(str); i++)Skill[8].Name[i] = str[i];
	Skill[8].Kill = 30, Skill[8].What = 1, Skill[8].color = 3, Skill[8].Qi = 0.8;
	str = "腾空";
	for (int i = 0; i < strlen(str); i++)Skill[9].Name[i] = str[i];
	Skill[9].What = 3, Skill[9].Any = 1, Skill[9].Anywhat[1] = 2, Skill[9].Time[1] = 1, Skill[9].color = 1, Skill[9].Qi = 1.5;
	str = "地裂";
	for (int i = 0; i < strlen(str); i++)Skill[10].Name[i] = str[i];
	Skill[10].Kill = 10, Skill[10].What = 2, Skill[10].Any = 2, Skill[10].Anywhat[1] = 4, Skill[10].Anykill[1] = 60, Skill[10].Anywhat[2] = 5, Skill[10].Anykill[2] = 20, Skill[10].color = 11, Skill[10].Qi = 2.5;
	str = "雷击术";
	for (int i = 0; i < strlen(str); i++)Skill[11].Name[i] = str[i];
	Skill[11].Kill = 30, Skill[11].What = 2, Skill[11].Any = 2, Skill[11].Anywhat[1] = 3, Skill[11].Anykill[1] = 30, Skill[11].Anywhat[2] = 5, Skill[11].Anykill[2] = 30, Skill[11].color = 6, Skill[11].Qi = 2.5;
	str = "雪球";
	for (int i = 0; i < strlen(str); i++)Skill[12].Name[i] = str[i];
	Skill[12].Kill = 20, Skill[12].What = 1, Skill[12].Any = 1;
	Skill[12].Anywhat[1] = 1, Skill[12].Time[1] = 1;
	Skill[12].color = 1, Skill[12].Qi = 2;
	str = "永冻之域";
	for (int i = 0; i < strlen(str); i++)Skill[13].Name[i] = str[i];
	Skill[13].Kill = 20, Skill[13].What = 2, Skill[13].Any = 1;
	Skill[13].Anywhat[1] = 1, Skill[13].Time[1] = 1;
	Skill[13].color = 1, Skill[13].Qi = 4;
	str = "暴风雪";
	for (int i = 0; i < strlen(str); i++)Skill[14].Name[i] = str[i];
	Skill[14].Kill = 50, Skill[14].What = 2, Skill[14].Any = 2;
	Skill[14].Anywhat[1] = 3, Skill[14].Anykill[1] = 30;
	Skill[14].Anywhat[2] = 5, Skill[14].Anykill[2] = 30;
	Skill[14].color = 1, Skill[14].Qi = 2;
	str = "急救";
	for (int i = 0; i < strlen(str); i++)Skill[15].Name[i] = str[i];
	Skill[15].What = 3, Skill[15].Any = 1;
	Skill[15].Anywhat[1] = 1, Skill[15].Anykill[1] = 30;
	Skill[15].color = 2, Skill[15].Qi = 1;
	str = "瘟疫";
	for (int i = 0; i < strlen(str); i++)Skill[16].Name[i] = str[i];
	Skill[16].What = 2, Skill[16].Any = 1;
	Skill[16].Anywhat[1] = 6, Skill[16].Anykill[1] = 40;
	Skill[16].color = 3, Skill[16].Qi = 2;
	str = "下毒";
	for (int i = 0; i < strlen(str); i++)Skill[17].Name[i] = str[i];
	Skill[17].Kill = 10, Skill[17].What = 1, Skill[17].Any = 1;
	Skill[17].Anywhat[1] = 2, Skill[17].Anykill[1] = 10, Skill[17].Time[1] = 10;
	Skill[17].color = 8, Skill[17].Qi = 0.8;
	str = "重击";
	for (int i = 0; i < strlen(str); i++)Skill[18].Name[i] = str[i];
	Skill[18].Kill = 50, Skill[18].What = 1, Skill[18].Any = 0;
	Skill[18].color = 4, Skill[18].Qi = 1.5;
	str = "泰山压顶";
	for (int i = 0; i < strlen(str); i++)Skill[19].Name[i] = str[i];
	Skill[19].Kill = 50, Skill[19].What = 2, Skill[19].Any = 1;
	Skill[19].Anywhat[1] = 3, Skill[19].Anykill[1] = 50, Skill[19].color = 4, Skill[19].Qi = 2.5;
	str = "吸血";
	for (int i = 0; i < strlen(str); i++)Skill[20].Name[i] = str[i];
	Skill[20].Kill = 5, Skill[20].What = 1, Skill[20].Any = 1;
	Skill[20].Anywhat[1] = 7, Skill[20].color = 10, Skill[20].Qi = 1;
	str = "狩猎号角";
	for (int i = 0; i < strlen(str); i++)Skill[21].Name[i] = str[i];
	Skill[21].What = 3, Skill[21].Any = 1;
	Skill[21].Anywhat[1] = 5, Skill[21].Anykill[1] = 10, Skill[21].color = 9, Skill[21].Qi = 0.3;
	str = "打狗棒法";
	for (int i = 0; i < strlen(str); i++)Skill[22].Name[i] = str[i];
	Skill[22].Kill = 30, Skill[22].What = 1, Skill[22].Any = 1, Skill[22].Anywhat[1] = 4, Skill[22].Anykill[1] = 40, Skill[22].color = 11, Skill[22].Qi = 1.5;
	str = "乞讨";
	for (int i = 0; i < strlen(str); i++)Skill[23].Name[i] = str[i];
	Skill[23].What = 3, Skill[23].Any = 1;
	Skill[23].Anywhat[1] = 3, Skill[23].Time[1] = 5, Skill[23].Anykill[1] = 20;
	Skill[23].color = 12, Skill[23].Qi = 2;
	str = "江湖义";
	for (int i = 0; i < strlen(str); i++)Skill[24].Name[i] = str[i];
	Skill[24].What = 3, Skill[24].Any = 1;
	Skill[24].Anywhat[1] = 5, Skill[24].Anykill[1] = 11, Skill[24].color = 1, Skill[24].Qi = 3;
	str = "万箭齐发";
	for (int i = 0; i < strlen(str); i++)Skill[25].Name[i] = str[i];
	Skill[25].Kill = 20, Skill[25].What = 2, Skill[25].Any = 0, Skill[25].color = 11, Skill[25].Qi = 1.5;
	str = "毒箭";
	for (int i = 0; i < strlen(str); i++)Skill[26].Name[i] = str[i];
	Skill[26].Kill = 20, Skill[26].What = 1, Skill[26].Any = 1;
	Skill[26].Anywhat[1] = 2, Skill[26].Anykill[1] = 10, Skill[26].Time[1] = 2;
	Skill[26].color = 8, Skill[26].Qi = 0.8;
	str = "神偷手";
	for (int i = 0; i < strlen(str); i++)Skill[27].Name[i] = str[i];
	Skill[27].What = 1, Skill[27].Any = 1;
	Skill[27].Anywhat[1] = 10, Skill[27].Anykill[1] = 30, Skill[27].color = 5, Skill[27].Qi = 0;
	str = "乱拳";
	for (int i = 0; i < strlen(str); i++)Skill[28].Name[i] = str[i];
	Skill[28].Kill = 10, Skill[28].What = 1, Skill[28].Any = 1, Skill[28].Anywhat[1] = 4, Skill[28].Anykill[1] = 60, Skill[28].color = 1, Skill[28].Qi = 1.3;
	str = "喝酒";
	for (int i = 0; i < strlen(str); i++)Skill[29].Name[i] = str[i];
	Skill[29].What = 3, Skill[29].Any = 1;
	Skill[29].Anywhat[1] = 1, Skill[29].Anykill[1] = 20;
	Skill[29].color = 2, Skill[29].Qi = 0.8;
	str = "火箭炮";
	for (int i = 0; i < strlen(str); i++)Skill[30].Name[i] = str[i];
	Skill[30].Kill = 50, Skill[30].What = 1, Skill[30].Any = 1, Skill[30].Anywhat[1] = 3, Skill[30].Anykill[1] = 30;
	Skill[30].color = 4, Skill[30].Qi = 2;
	str = "榴弹炮";
	for (int i = 0; i < strlen(str); i++)Skill[31].Name[i] = str[i];
	Skill[31].Kill = 40, Skill[31].What = 2, Skill[31].Any = 1, Skill[31].Anywhat[1] = 3, Skill[31].Anykill[1] = 30;
	Skill[31].color = 7, Skill[31].Qi = 3;
	str = "激光炮";
	for (int i = 0; i < strlen(str); i++)Skill[32].Name[i] = str[i];
	Skill[32].Kill = 70, Skill[32].What = 1, Skill[32].Any = 0, Skill[32].color = 5, Skill[32].Qi = 3;
}
int main() {
	srand((unsigned)time(NULL));
	Start();
	while (1) Main();
	return 0;
}
