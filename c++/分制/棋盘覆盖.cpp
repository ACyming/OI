#include <iostream>
using namespace std;
int cnt = 1;
int a[1030][1030];
void dfs ( int tr, int tc, int dr, int dc, int size) {
	if ( size == 1 )
		return;
	int t = cnt++;
	int s = size / 2;
	if ( dr < tr + s && dc < tc + s )
		dfs ( tr, tc, dr, dc, s );
	else {
		a[tr + s - 1][tc + s - 1] = t;
		dfs ( tr, tc, tr + s - 1, tc + s - 1, s);
	}
	if ( dr < tr + s && dc >= tc + s )
		dfs ( tr, tc + s, dr, dc, s );
	else {
		a[tr + s - 1][tc + s] = t;
		dfs ( tr, tc + s, tr + s - 1, tc + s, s);
	}

	if ( dr >= tr + s && dc < tc + s )
		dfs ( tr + s, tc, dr, dc, s );
	else {
		a[tr + s][tc + s - 1] = t;
		dfs ( tr + s, tc, tr + s, tc + s - 1, s);
	}

	if ( dr >= tr + s && dc >= tc + s )
		dfs ( tr + s, tc + s, dr, dc, s );
	else {
		a[tr + s][tc + s] = t;
		dfs ( tr + s, tc + s, tr + s, tc + s, s);
	}
}

int main() {
	int size;
	cin >> size;
	int x, y;
	cin >> x >> y;
	dfs ( 1, 1, x, y, size );
	a[x][y] = -1;
	for ( int i = 1; i <= size; i++ ) {
		for ( int j = 1; j <= size; j++ )
			cout << a[i][j] << " ";
		cout << endl;
	}
}

