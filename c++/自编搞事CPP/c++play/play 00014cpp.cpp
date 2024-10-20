#include <iostream>
#include <conio.h>
#include <windows.h>
#include <string> 
#include <cstring>
using namespace std;
const int gk = 10;
void color(int a){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),a);
}
int nn[gk] = {0,7,7,12}, mm[gk] = {0,11,20,18}, xx[gk] = {0,5,1,10}, yy[gk] = {0,1,1,7}, gongg[gk] = {0,1,3,5}, xuee[gk] = {0,20,20,6}, fangg[gk] = {0,0,0,0}, guai1 = 2, guai2 = 9, yao1 = 21, yao2 = 23, bao1 = 31, bao2 = 32, key1 = 41, key2 = 41, men1 = 51, men2 = 51, n, m, gong, xue, fang, x, y, key[10];
int b[10][10] = {
	{0},
	{0},
	{0,2,10},
	{0,1,30},
	{0,3,14},
	{0,5,16},
	{0,1,6},
	{0,6,20},
	{0,5,70},
	{0,10000,6} 
};
int c[10] = {0,2,5,10};
bool d[gk][20] = {
	{0},
	{0,1,1,0,0},
	{0,1,1,1,0},
	{0,0,0,1,1,1,1,1,1}
};
int a[100][100];
int a1[gk][100][100] = {
	{0},
	{
		{1,1,1,1,1,1,1,1,1,1,1},
		{1,21,41,23,1,0,0,-2,1,22,1},
		{1,2,1,1,1,2,1,1,1,23,1},
		{1,0,0,1,0,0,0,2,51,2,1},
		{1,1,2,1,3,1,1,2,2,2,1},
		{1,-1,21,0,0,0,0,0,31,2,1},
		{1,1,1,1,1,1,1,1,1,1,1}
	},
	{
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,-1,0,0,0,0,0,0,2,0,0,0,41,0,4,0,0,0,21,1},
		{1,0,1,1,1,1,1,4,1,1,1,1,3,1,1,1,1,1,0,1},
		{1,0,4,0,0,0,0,0,0,3,0,0,0,0,0,0,0,2,51,1},
		{1,0,1,1,1,1,3,1,1,1,1,1,1,2,1,1,1,1,2,1},
		{1,0,0,4,21,0,0,0,0,3,0,32,0,22,4,4,51,0,-2,1},
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
	},
	{
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,41,1,0,0,1,1,1,-2,1,0,0,1,23,1,23,41,1},
		{1,0,1,0,23,0,1,1,0,1,0,0,1,22,1,32,0,1},
		{1,0,1,1,1,6,1,0,8,0,1,1,21,0,1,1,7,1},
		{1,23,1,23,1,0,1,1,0,1,1,1,1,4,1,1,51,1},
		{1,0,1,22,1,0,0,7,0,51,0,0,6,0,0,0,0,1},
		{1,5,0,0,6,0,0,1,1,1,0,1,0,1,1,1,1,1,0,1,1},
		{1,0,1,21,1,0,6,0,0,0,6,0,0,6,0,0,1,1},
		{1,51,1,1,1,51,1,0,0,41,1,9,1,0,1,1,1,1},
		{1,5,0,1,23,0,1,0,0,0,1,21,1,0,51,0,23,1},
		{1,41,23,1,22,22,1,-1,0,0,1,0,31,51,1,0,21,1},
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
	}
};

void mem(int r){
	memset(key, 0, sizeof(key));
	n = nn[r];
	m = mm[r];
	x = xx[r];
	y = yy[r];
	gong = gongg[r];
	xue = xuee[r];
	fang = fangg[r];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			a[i][j] = a1[r][i][j];
		}
	}
}

void output(){
	color(7);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(a[i][j] == -1){
				color(15);
				cout << "●"; 
				color(7);
			}else if(a[i][j] == 0){
				cout << "  ";
			}else if(a[i][j] == -2){
				color(15);
				cout << "★";
				color(7);
			}else if(a[i][j] == 2 || a[i][j] == 6){
				color(12);
				cout << "○";
				color(7);
			}else if(a[i][j] == 3 || a[i][j] == 5){
				color(11);
				cout << "○";
				color(7);
			}else if(a[i][j] == 4){
				color(10);
				cout << "○";
				color(7);
			}else if(a[i][j] == 7){
				color(13);
				cout << "○";
				color(7);
			}else if(a[i][j] == 9){
				color(13);
				cout << "▽";
				color(7);
			}else if(a[i][j] == 8){
				color(14);
				cout << "▽";
				color(7);
			}else if(a[i][j] == 21){
				color(12);
				cout << "◎";
				color(7);
			}else if(a[i][j] == 22){
				color(11);
				cout << "◎";
				color(7);
			}else if(a[i][j] == 23){
				color(10);
				cout << "◎";
				color(7);
			}else if(a[i][j] == 31){
				color(13);
				cout << "▲";
				color(7);
			}else if(a[i][j] == 32){
				color(14);
				cout << "▲";
				color(7);
			}else if(a[i][j] == 41){
				color(14);
				cout << "♂";
				color(7);
			}else if(a[i][j] == 51){
				color(14);
				cout << "▓";
				color(7);
			}else{
				cout << "■";
			}
		}
		cout << endl;
	}
	color(15);
}

bool fangqi(){
	system("cls");
	cout << "您确定放弃本次游戏吗？（Y or N）" << endl;
	p1:char m5 = getch();
	if(m5 == 'y' || m5 == 'Y' || m5 == '1'){
		cout << "您放弃了本次游戏" << endl;
		return true;
	}else if(m5 == 'N' || m5 == 'n' || m5 == '0'){
		return false;
	}else{
		goto p1;
	}
}

bool kaimen(int r){
	system("cls");
	cout << "您确定开启此门吗？（Y or N）" << endl;
	if(r == 1) {
		cout << "需要消耗一个";
		color(14);
		cout << "钥匙" << endl;
		color(15);
	}
	p3:char m6 = getch();
	if(m6 == 'y' || m6 == 'Y' || m6 == '1'){
		if(key[r] >= 1) {
			cout << "您开启了这个门" << endl;
			key[r]--;
			Sleep(500);
			return true;
		}else{
			cout << "您没有足够的钥匙" << endl;
			Sleep(500);
			return false;
		}
	}else if(m6 == 'N' || m6 == 'n' || m6 == '0'){
		return false;
	}else{
		goto p3;
	}
}

int daguai(int r){
	int g1 = b[r][1];
	int x1 = b[r][2];
	int g2 = gong;
	int x2 = 0;
	while(true){
		x1 -= g2;
		if(x1 <= 0){
			return x2;
		}
		x2 += g1 - fang;
	}
}

void guaiwushuxing(int r){
	system("cls");
	for(int i = guai1; i <= guai2; i++){
		if(d[r][i - guai1 + 1]){
			if(i == 2){
				color(12);
				cout << "○";
				color(15);
			}else if(i == 3){
				color(11);
				cout << "○";
				color(15);
			}else if(i == 4){
				color(10);
				cout << "○";
				color(15);
			}
			Sleep(100);
			cout << " 血量：" << b[i][2] << "  攻击：" << b[i][1] << "  需要" << daguai(i) << "点血量" << endl;
		}
	}
	Sleep(1000);
	system("pause") ;
}

bool guai(int r){
	system("cls");
	Sleep(100);
	cout << "该怪物攻击力为：" << b[r][1] << endl;
	Sleep(100);
	cout << "该怪物血量为：" << b[r][2] << endl;
	Sleep(100);
	int m3 = daguai(r);
	cout << "你将耗费掉" << m3 << "点血量" << endl;
	Sleep(100);
	cout << "是否攻击此怪物？（Y or N）" << endl;
	p2:char m2 = getch();
	if(m2 == 'y' || m2 == 'Y' || m2 == '1'){
		if(xue > m3){
			xue -= m3;
			return true;
		}else{
			cout << "你打不过此怪物" << endl;
			Sleep(500);
			return false;
		}
	}else if(m2 == 'N' || m2 == 'n' || m2 == '0'){
		return false;
	}else{
		goto p2;
	}
}

void play(int r){
	mem(r);
	while(true){
		system("cls");
		cout << "血量：" << xue << "  攻击：" << gong << "  防御：" << fang << endl;
		color(14);
		cout << "钥匙：" << key[1];
		cout << endl;
		color(15);
		cout << "1:查看怪物属性 2:查看规则 0:放弃本次游戏" << endl;
		output();
		char m1 = getch();
		if(m1 == '1'){
			guaiwushuxing(r);
		}else if(m1 == '0'){
			if(fangqi()){
				break;
			}
		}else if(m1 == '2'){
			system("cls");
			color(15);
			Sleep(100);
			cout << "图例：" << endl;
			Sleep(100);
			cout << "●：你自己" << endl;
			Sleep(100);
			cout << "★：终点"  << endl;
			Sleep(100);
			cout << "■：墙" << endl;
			Sleep(100);
			cout << "(空)：路" << endl;
			Sleep(100);
			cout << "○：普通怪物" << endl;
			Sleep(100);
			cout << "▽：boss级怪物" << endl;
			Sleep(100);
			cout << "◎：药水" << endl;
			Sleep(100);
			cout << "▲：宝石" << endl;
			Sleep(100);
			cout << "♂：钥匙" << endl;
			Sleep(100);
			cout << "▓：大门" << endl << endl;
			Sleep(500);
			cout << "按键：" << endl;
			Sleep(100);
			cout << "w：上  s：下  a：左  d：右" << endl;
			Sleep(500);
			system("pause");
		}else if(m1 == 'w'){
			x--;
			if(a[x][y] == 1){
				x++;
			}else if(a[x][y] == 0){
				a[x][y] = -1;
				a[x + 1][y] = 0;
			}else if(a[x][y] == -2){
				a[x][y] = -1;
				a[x + 1][y] = 0;
				system("cls");
				output();
				cout << "恭喜您，第" << r << "关游戏挑战成功！" << endl;
				break;
			}else if(a[x][y] >= guai1 && a[x][y]  <= guai2){
				if(guai(a[x][y])){
					a[x][y] = -1;
					a[x + 1][y] = 0;
				}else{
					x++;
				}
			}else if(a[x][y] >= yao1 && a[x][y] <= yao2){
				xue += c[a[x][y] - yao1 + 1];
				cout << "     生命值 + " << c[a[x][y] - yao1 + 1] << endl;
				Sleep(500);
				a[x][y] = -1;
				a[x + 1][y] = 0;
			}else if(a[x][y] >= bao1 && a[x][y] <= bao2){
				if(a[x][y] == bao1){
					gong += 1; 
					cout << "     攻击力 + 1" << endl;
					Sleep(500);
					a[x][y] = -1;
					a[x + 1][y] = 0;
				}else if(a[x][y] == bao1 + 1){
					fang += 1;
					cout << "     防御值 + 1" << endl;
					Sleep(500);
					a[x][y] = -1;
					a[x + 1][y] = 0;
				}
			}else if(a[x][y] >= key1 && a[x][y] <= key2){
				key[a[x][y] - key1 + 1] += 1;
				cout << "     钥匙 + 1" << endl;
				Sleep(500);
				a[x][y] = -1;
				a[x + 1][y] = 0;
			}else if(a[x][y] >= men1 && a[x][y] <= men2){
				if(kaimen(a[x][y] - men1 + 1)){
					a[x][y] = -1;
					a[x + 1][y] = 0;
				}else{
					x++;
				}
			}else{
				x++;
			}
		}else if(m1 == 's'){
			x++;
			if(a[x][y] == 1){
				x--;
			}else if(a[x][y] == 0){
				a[x][y] = -1;
				a[x - 1][y] = 0;
			}else if(a[x][y] == -2){
				a[x][y] = -1;
				a[x - 1][y] = 0;
				system("cls");
				output();
				cout << "恭喜您，第" << r << "关游戏挑战成功！" << endl;
				break;
			}else if(a[x][y] >= guai1 && a[x][y]  <= guai2){
				if(guai(a[x][y])){
					a[x][y] = -1;
					a[x - 1][y] = 0;
				}else{
					x--;
				}
			}else if(a[x][y] >= yao1 && a[x][y] <= yao2){
				xue += c[a[x][y] - yao1 + 1];
				cout << "     生命值 + " << c[a[x][y] - yao1 + 1] << endl;
				Sleep(500);
				a[x][y] = -1;
				a[x - 1][y] = 0;
			}else if(a[x][y] >= bao1 && a[x][y] <= bao2){
				if(a[x][y] == bao1){
					gong += 1; 
					cout << "     攻击力 + 1" << endl;
					Sleep(500);
					a[x][y] = -1;
					a[x - 1][y] = 0;
				}else if(a[x][y] == bao1 + 1){
					fang += 1;
					cout << "     防御值 + 1" << endl;
					Sleep(500);
					a[x][y] = -1;
					a[x - 1][y] = 0;
				}
			}else if(a[x][y] >= key1 && a[x][y] <= key2){
				key[a[x][y] - key1 + 1] += 1;
				cout << "     钥匙 + 1" << endl;
				Sleep(500);
				a[x][y] = -1;
				a[x - 1][y] = 0;
			}else if(a[x][y] >= men1 && a[x][y] <= men2){
				if(kaimen(a[x][y] - men1 + 1)){
					a[x][y] = -1;
					a[x - 1][y] = 0;
				}else{
					x--;
				}
			}else{
				x--;
			}
		}else if(m1 == 'a'){
			y--;
			if(a[x][y] == 1){
				y++;
			}else if(a[x][y] == 0){
				a[x][y] = -1;
				a[x][y + 1] = 0;
			}else if(a[x][y] == -2){
				a[x][y] = -1;
				a[x][y + 1] = 0;
				system("cls");
				output();
				cout << "恭喜您，第" << r << "关游戏挑战成功！" << endl;
				break;
			}else if(a[x][y] >= guai1 && a[x][y]  <= guai2){
				if(guai(a[x][y])){
					a[x][y] = -1;
					a[x][y + 1] = 0;
				}else{
					y++;
				}
			}else if(a[x][y] >= yao1 && a[x][y] <= yao2){
				xue += c[a[x][y] - yao1 + 1];
				cout << "     生命值 + " << c[a[x][y] - yao1 + 1] << endl;
				Sleep(500);
				a[x][y] = -1;
				a[x][y + 1] = 0;
			}else if(a[x][y] >= bao1 && a[x][y] <= bao2){
				if(a[x][y] == bao1){
					gong += 1; 
					cout << "     攻击力 + 1" << endl;
					Sleep(500);
					a[x][y] = -1;
					a[x][y + 1] = 0;
				}else if(a[x][y] == bao1 + 1){
					fang += 1;
					cout << "     防御值 + 1" << endl;
					Sleep(500);
					a[x][y] = -1;
					a[x][y + 1] = 0;
				}
			}else if(a[x][y] >= key1 && a[x][y] <= key2){
				key[a[x][y] - key1 + 1] += 1;
				cout << "     钥匙 + 1" << endl;
				Sleep(500);
				a[x][y] = -1;
				a[x][y + 1] = 0;
			}else if(a[x][y] >= men1 && a[x][y] <= men2){
				if(kaimen(a[x][y] - men1 + 1)){
					a[x][y] = -1;
					a[x][y + 1] = 0;
				}else{
					y++;
				}
			}else{
				y++;
			}
		}else if(m1 == 'd'){
			y++;
			if(a[x][y] == 1){
				y--;
			}else if(a[x][y] == 0){
				a[x][y] = -1;
				a[x][y - 1] = 0;
			}else if(a[x][y] == -2){
				a[x][y] = -1;
				a[x][y - 1] = 0;
				system("cls");
				output();
				cout << "恭喜您，第" << r << "关游戏挑战成功！" << endl;
				break;
			}else if(a[x][y] >= guai1 && a[x][y]  <= guai2){
				if(guai(a[x][y])){
					a[x][y] = -1;
					a[x][y - 1] = 0;
				}else{
					y--;
				}
			}else if(a[x][y] >= yao1 && a[x][y] <= yao2){
				xue += c[a[x][y] - yao1 + 1];
				cout << "     生命值 + " << c[a[x][y] - yao1 + 1] << endl;
				Sleep(500);
				a[x][y] = -1;
				a[x][y - 1] = 0;
			}else if(a[x][y] >= bao1 && a[x][y] <= bao2){
				if(a[x][y] == bao1){
					gong += 1; 
					cout << "     攻击力 + 1" << endl;
					Sleep(500);
					a[x][y] = -1;
					a[x][y - 1] = 0;
				}else if(a[x][y] == bao1 + 1){
					fang += 1;
					cout << "     防御值 + 1" << endl;
					Sleep(500);
					a[x][y] = -1;
					a[x][y - 1] = 0;
				}
			}else if(a[x][y] >= key1 && a[x][y] <= key2){
				key[a[x][y] - key1 + 1] += 1;
				cout << "     钥匙 + 1" << endl;
				Sleep(500);
				a[x][y] = -1;
				a[x][y - 1] = 0;
			}else if(a[x][y] >= men1 && a[x][y] <= men2){
				if(kaimen(a[x][y] - men1 + 1)){
					a[x][y] = -1;
					a[x][y - 1] = 0;
				}else{
					y--;
				}
			}else{
				y--;
			}
		}else{
			continue;
		}
	}
}

int main( ){
	system("mode con cols=50 lines=20");
	while(true){
		system("cls");
		color(15);
		cout << "请选择想要挑战的关卡数（1~3）：" << endl;
		string m4;
		cin >> m4;
		if((m4.size() == 1 && '1' <= m4[0] && m4[0] <= '3')){
			play((int)(m4[0] - '0'));
			Sleep(500);
			cout << "还想再来一局吗？(Y or N)" << endl;
			p3:char m5 = getch();
			if(m5 == 'y' || m5 == 'Y' || m5 == '1') {
				continue;
			}else if(m5 == 'N' || m5 == 'n' || m5 == '0'){
				cout << "游戏结束！" << endl;
				break;
			}else{
				goto p3;
			}
		}else{
			continue;
		}
	}
	system("pause") ;
	return 0;
}
