#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
const int N = 1000010;
typedef long long LL;
int prime[N],cnt;
bool st[N];
void init(int n) {
	memset(st,0,sizeof st);
	cnt = 0;
	for(int i=2; i<n; i++) {
		if(!st[i]) prime[cnt++] = i;
		for(int j=0; prime[j]*i<n; j++) {
			st[i*prime[j]] = true;
			if(i % prime[j] == 0) break;
		}
	}
}
int main() {
	int l,r;
	while(cin>>l>>r) {
		init(50000);
		if(l == 1) l = 2;
		if(r == 1) r = 2;
		memset(st,0,sizeof st);
		for(int i=0; i<cnt; i++) {
			LL p = prime[i];
			for(LL j=max(p*2,(l+p-1)/p*p); j<=r; j+=p) {
			
				st[j-l] = true;
			}
		}
		cnt = 0;
		for(int i=0; i<=r-l && i+l>=2; i++)
			if(!st[i]) prime[cnt++] = i+l;
		int minn = 0,maxn = 0;
		for(int i=0; i+1<cnt; i++) {
			int d = prime[i+1] - prime[i];
			if(d < prime[minn+1] - prime[minn]) minn = i;
			if(d > prime[maxn+1] - prime[maxn]) maxn = i;
		}
		if(cnt<2) puts("There are no adjacent primes.");
		else printf("%d,%d are closest, %d,%d are most distant.\n",prime[minn],prime[minn+1],prime[maxn],prime[maxn+1]);
	}
	return 0;
} 
