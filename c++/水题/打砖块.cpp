#include<bits/stdc++.h> 
int main()
{
	srand((unsigned int)time(0));			//设置随机数的范围跟随时间改变而改变
	hwnd = initgraph(800, 800);
	struct Board* pBoard = createBoard(300, 800 - 25, 5, WHITE, 200, 25);
	struct Ball* pBall = createBall(400, 600, 15, 5, -5, RED);
	initMap();
	BeginBatchDraw();
	while (1)
	{
		cleardevice();
		drawMap();
	drawBoard(pBoard);
	drawBall(pBall);
		if (Timer(10, 0))
			moveBall(pBall, pBoard);
		keyDown(pBoard);
		if (die(pBall))
		{
			MessageBox(hwnd, L"you die", L"gameOver", MB_OK);
			exit(0);
		}
	if (gameOver())
		{
		MessageBox(hwnd, L"win game", L"gameOver", MB_OK);
			exit(0);
		}
	FlushBatchDraw();
	}
	EndBatchDraw();
	closegraph();
	return 0;
}
