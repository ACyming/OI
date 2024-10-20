#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2 * 1e5 + 100;
int t, n, k;
int a[N];
main() {
	cin >> t;
	while (t--) {
		cin>>n>>k;
		for(int i=1; i<=n; i++) {
			cin>>a[i];
		}
		int l=1,r=n;
		int p=0;
		if(k%2!=0) k--,p=1;
		while(k > 0&&l <= r) {
			if(k<min(a[l],a[r])*2){
				break;
			} 
			if(l==r){
				p=13579;
				break;
			}
			if(a[l]<a[r]) {
				k-=a[l]*2;
				a[r]-=a[l];
				l++;
			}
			else if(a[l]>a[r]) {
				k-=a[r]*2;
				a[l]-=a[r];
				r--;
			}
			else if(a[l]==a[r]) {
				k-=a[l]*2;
				l++;
				r--;
			}
			
		}
		
		if(p)k++;
		if(l>r || p==13579 || (k>=a[l] && l==r)){
			cout<<n<<endl;
			continue;
		}
		if(k>=a[l]*2 - 1)
			n++;
		cout<<n-(r-l+1)<<endl;
	}
	return 0;
}