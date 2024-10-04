
#include <bits/stdc++.h>
using namespace std;
int h, w, k;
string s[20020], b1[200020], b2[200020];
int ans1 = 0x3f3f3f3f, ans2 = 0x3f3f3f3f;
void qz() {
	for (int i = 0; i < w; i++)//b1->得到s[]的列
		for (int j = 0; j < h; j++)
			b1[i][j] = s[j][i];
	for (int i = 0; i < h; i++)//b2->得到s[]的行
		for (int j = 0; j < w; j++)
			b2[i][j] = s[i][j];
}
int main() {
	cin >> h >> w >> k;
	for (int i = 0; i < h; i++)//输入
		cin >> s[i];
	qz();//获得s[]的行与列
	for (int i = 0; i < w; i++) {
		int sx = 0, so = 0;
		for (int j = 0; j < h; j++) {
			if (b1[i][j] == 'x') sx++;//如果b1[i][j]==x,x的出现次数增加
			if (b1[i][j] == 'o') so++;//如果b1[i][j]==o,o的出现次数增加
		}
		if (so >= k) cout << 0, exit(0);	//如果o出现次数本来就>=k输出0,结束程序(exit(0))
		else if (sx + so == w) continue;	//如果o出现次数+x出现次数==w,无法修改,continue
		else if (w - sx < k) continue;		//w-如果x出现次数<k,无法修改,continue
		else ans1 = min(ans1, k - so);		//取我们要修改的值的最小值
	}
	for (int i = 0; i < h; i++) {//同b1
		int sx = 0, so = 0;
		for (int j = 0; j < w; j++) {
			if (b2[i][j] == 'x') sx++;
			if (b2[i][j] == 'o') so++;
		}
		if (so >= k) cout << 0, exit(0);
		else if (so + sx == h) continue;
		else if (w - sx < k) continue;
		else ans2 = min(ans2, k - so);
	}
	min(ans1, ans2) != 0x3f3f3f3f ? cout << min(ans1, ans2) : cout << -1;
	/*
	相当于:if(min(ans1,ans2)!=0x3f3f3f3f)
				cout<<min(ans1,ans2);
			else
				cout<<-1;
	*/
	return 0;
}
