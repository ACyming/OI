 
#define kdown(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? n : 0)
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (1) {
        if (kdown('Q'))
            cout << "������ ";
        Sleep(n);
        if (kdown('W'))
            cout << "����ը�� ";
        Sleep(n);
        if (kdown('E'))
            cout << "������ ";
        Sleep(n);
        if (kdown('R'))
            cout << "cnm ";
        Sleep(n);
        if (kdown('T'))
            cout << "ɡ�� ";
        Sleep(n);
        if (kdown('Y'))
            cout << "���� ";
        Sleep(n);
        if (kdown('U'))
            cout << "FUCK ";
        Sleep(n);
        if (kdown('I'))
            cout << "������ѷ�� ";
        Sleep(n);
        if (kdown('O'))
            cout << "δ�������� ";
        Sleep(n);
        if (kdown('P'))
            cout << "������ ";
        Sleep(n);
        if (kdown('A'))
            cout << "�ͷ�� ";
        Sleep(n);
        if (kdown('S'))
            cout << "ȥ���� ";
        Sleep(n);
        if (kdown('D'))
            cout << "��ȫ�� ";
        Sleep(n);
        if (kdown('F'))
            cout << "û��ĸ ";
        Sleep(n);
        if (kdown('G'))
            cout << "������ը�� ";
        Sleep(n);
        if (kdown('H'))
            cout << "��ը�� ";
        Sleep(n);
        if (kdown('J'))
            cout << "���� ";
        Sleep(n);
        if (kdown('K'))
            cout << "ף��ȫ�ҽ��� ";
        Sleep(n);
        if (kdown('L'))
            cout << "����� ";
        Sleep(n);
        if (kdown('Z'))
            cout << "����ĸ� ";
        Sleep(n);
        if (kdown('X'))
            cout << "û���� ";
        Sleep(n);
        if (kdown('C'))
            cout << "��Ҫ�� ";
        Sleep(n);
        if (kdown('V'))
            cout << "û�и� ";
        Sleep(n);
        if (kdown('B'))
            cout << "��Ҫ���������޵����̣�����ս�����͵ĵ��� ";
        Sleep(n);
        if (kdown('N'))
            cout << "dsb ";
        Sleep(n);
        if (kdown('M'))
            cout << "�����ĸ���Ȫˮƿ�����߱����Ƶģ������������̩��ҽԺ�����ģ���ô���������� ";
        Sleep(n);
    }
    return 0;
}
