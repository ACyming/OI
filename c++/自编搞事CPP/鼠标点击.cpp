#include <Windows.h>
#include <bits/stdc++.h>

int main()
{
    // ����Ӧ��
    STARTUPINFOA si = {sizeof(STARTUPINFOA)};
    PROCESS_INFORMATION pi;

    // �ȴ�2�룬ȡ���ڵ���ִ������
    Sleep(2000);

    // ģ���������Ļ���뵥��
    // ��ȡ��Ļ�ֱ���
    int screenWidth = GetSystemMetrics(SM_CXSCREEN);
    int screenHeight = GetSystemMetrics(SM_CYSCREEN);

    // �������λ��
    SetCursorPos(screenWidth / 2, screenHeight * 3 / 5);
    _sleep(10);
    // ִ����굥��
    mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
    mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);

    // ��Ӧ�ó���һЩ��Ӧʱ��
    Sleep(1000);

    // �ر�Ӧ�ó���
    TerminateProcess(pi.hProcess, 0);
    // �رս��̺��߳̾��
    CloseHandle(pi.hProcess);
    CloseHandle(pi.hThread);

    return 0;
}