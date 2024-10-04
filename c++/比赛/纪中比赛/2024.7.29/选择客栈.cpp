#include<bits/stdc++.h>
using namespace std;
int n , k, p, ans;
struct Node {
	int co,v,flag,book[100];
} a[200020];
int main() {
	cin >> n >> k >> p;
	for(int i = 1; i <= n; i++) {
		cin >> a[i].co >> a[i].v;
		a[i].flag = a[i].v <= p ? i : a[i - 1].flag;
		for (int j = 0; j < k; j++)
            a[i].book[j] = a[i - 1].book[j];
    	a[i].book[a[i].co]++;
	}
	for(int i = 1; i <= n; i++){
		
		if(a[i].flag == i) 
			ans += a[i].book[a[i].co] - 1;
		else
			ans += a[a[i].flag].book[a[i].co]; 
	}
	cout << ans;
	return 0;
}