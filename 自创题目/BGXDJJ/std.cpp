#include<bits/stdc++.h>
using namespace std;
int n;

int main() {
	cin >> n;
	while(n--){
		double a, b;
		cin >> a >> b;
		if(a >= 7.0 && b >= 0.5) {
			cout << "Yes" << endl;
			continue;
		}
		cout << "No" << endl;
	}	
	return 0;
}
