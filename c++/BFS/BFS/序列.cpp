#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n;
    cin >> n;
    stack<int> s;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.push(x); // ��ai����ջ��
        for (int j = 0; j <= i; j++) {
            cout << s.top() << " "; // �����ǰջ��Ԫ��
            s.pop();
        }
    }
    return 0;
}
