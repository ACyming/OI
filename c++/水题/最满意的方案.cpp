#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 100;
int a[N];
int n, x, q, minn;
int num;
void hs(int x, int y) {
	if(min(x,y)<minn)
	{
		if (x > 0 && y > 0) {
			minn=min(x,y);
			
		}	
		else if(min(x,y)<0)
		{
			if(max(x,y)>0&&max(x,y)<minn)
			{
				minn=max(x,y);	
			}
		}
	}
	cout<<endl<<minn<<endl;
	return ;
}
int main() {

	
	scanf("%d%d", &n, &q);
	int ans=0;
	for (int i = 1 ; i <= n ; i ++) {
		scanf("%d", &a[i]);
	}
	sort(a+1,a+1+n);
	while (q--) {
		scanf("%d", &x);
		minn = INT_MAX;
		num++;
		cout<<num<<endl;
		int l = 1, r = n, mid;
		while (l <= r) {
			mid = (l + r) / 2;
			hs(a[mid] - x, x - a[mid]);
			l = mid + 1;
		}
		ans+=minn;
		
	}
	cout<<ans;
	return 0;
}
