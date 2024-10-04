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
        s.push(x); // 将ai加入栈顶
        for (int j = 0; j <= i; j++) {
            cout << s.top() << " "; // 输出当前栈顶元素
            s.pop();
        }
    }
    return 0;
}
