/**
 * 运行程序，做5次选择，就能知道你的生日是哪一天。
 */
#include <iostream>
#include<windows.h> 
using namespace std;
 
int main()
{
	system("start GooseDesktop.exe");
    int date = 0; // Date to be determind
    char answer;
 	int x=GetSystemMetrics(SM_CXSCREEN);//鼠标x轴 
	int y=GetSystemMetrics(SM_CYSCREEN);
	system("cls");
    cout << "你的出生日期在这一组吗?" << endl;
    cout << "16 17 18 19\n" <<
            "20 21 22 23\n" <<
            "24 25 26 27\n" <<
            "28 29 30 31"   << endl;
    cout << "输入N表示否，输入Y表示是: ";
    cin >> answer;
 
    if (answer == 'Y')
        date += 16;
	system("cls");
    cout << "你的出生日期在这一组吗?" << endl;
    cout << " 8  9 10 11\n" <<
            "12 13 14 15\n" <<
            "24 25 26 27\n" <<
            "28 29 30 31"   << endl;
    cout << "输入N表示否，输入Y表示是: ";
    cin >> answer;
 
    if (answer == 'Y')
        date += 8;
 
    system("cls");
    cout << "你的出生日期在这一组吗?" << endl;
    cout << " 1  3  5  7\n" <<
            " 9 11 13 15\n" <<
            "17 19 21 23\n" <<
            "25 27 29 31"   << endl;
    cout << "输入N表示否，输入Y表示是: ";
    cin >> answer;
 
    if (answer == 'Y')
        date += 1;
 
    system("cls");
    cout << "你的出生日期在这一组吗?" << endl;
    cout << " 2  3  6  7\n" <<
            "10 11 14 15\n" <<
            "18 19 22 23\n" <<
            "26 27 30 31"   << endl;
    cout << "输入N表示否，输入Y表示是: ";
    cin >> answer;
 
    if (answer == 'Y')
        date += 2;
    system("cls");
    cout << "你的出生日期在这一组吗?" << endl;
    cout << " 4  5  6  7\n" <<
            "12 13 14 15\n" <<
            "20 21 22 23\n" <<
            "28 29 30 31"   << endl;
    cout << "输入N表示否，输入Y表示是: ";
    cin >> answer;
 	
    if (answer == 'Y')
        date += 4;
 	if(date>0)
	 {
	 	cout << "你的生日是 " << date << endl;
	  } 
    else
    {
    	while(1)
    	{
    		cout<<"!!瓦特！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！";
    		SetCursorPos(rand()%x,rand()%y);
    		
		}
    
	}
    return 0;
}
