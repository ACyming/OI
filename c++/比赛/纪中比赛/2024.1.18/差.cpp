#include <bits/stdc++.h>
using namespace std;
long long n,c,a,b,ans,cnt,s;
struct Node{
	int x,y;
}t[1000001];
int main() {
	freopen("dec.in","r",stdin);
	freopen("dec.out","w",stdout);
	cin>>n>>c;
	for(int i=1; i<=n; ++i) {
		cin>>a;
		if(a!=b || i==1) ++cnt;
		t[cnt].x=a;
		++t[cnt].y;
		b=a;
	}
	for(int i=1; i<=cnt; ++i) {
		for(int j=s+1; j<=cnt; ++j) {
			if(t[j].x==t[i].x+c) {
				ans+=t[i].y*t[j].y;
				s=j;
				break;
			}
			if(t[j].x>t[i].x+c) 
				break;
		}
	}
	cout<<ans;
	return 0;
}
