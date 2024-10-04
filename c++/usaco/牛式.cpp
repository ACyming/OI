#include<bits/stdc++.h>
using namespace std;
int n,ans;
int g[9999],bz[9999];
int f1,f2,f3,f4,f5;
int gg(int x) {
	int cnt=0;
	while(x!=0) {
		cnt++;
		x/=10;
	}
	return cnt;
}
bool check(int x) {
	while(x!=0) {
		if(!bz[x%10])
			return 0;
		x/=10;
	}
	return 1;
}
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> g[i],bz[g[i]]=1;
	for(int a=1; a<=n; a++) {
		for(int b=1; b<=n; b++) {
			for(int c=1; c<=n; c++) {
				for(int d=1; d<=n; d++) {
					for(int e=1; e<=n; e++) {
						f1=g[a]*100+g[b]*10+g[c];
						f2=g[d]*10+g[e];
						f3=f1*g[e];
						f4=f1*g[d];
						f5=f1*f2;
						if(gg(f3)==3 && gg(f4)==3 && check(f3) && check(f4) && gg(f5)==4 && check(f5)) {
							ans++;
						} else 
							continue;
					}
				}
			}
		}
	}
	cout<<ans;
	return 0;
}
