#include<bits/stdc++.h>
using namespace std;
const int N=10e5+20;
int pre[N],c,n,m,p[N];
int u,v,w;
struct Node {
	int u,v,w;
} a[N];
void add(int u,int v,int w) {
	a[++c]= {u,v,w};
	pre[u]=c;
}
bool pd() {
	for(int i=1; i<n; i++) {
		if(p[i]>p[i+1]) return 0;
	}
	return 1;
}
void print() {
	for(int i=1; i<=n; i++) cout<<p[i];
}
int main() {
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		cin>>p[i];
	}
	for(int i=1; i<=m; i++) {
		cin>>u>>v>>w;
		add(u,v,w);
		add(v,u,w);
	}
	int ans=-999;
	while(!pd())
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) {
			for(int k=1; k<=c; k++) {
				if(a[k].u==i && a[k].v==j) {
					swap(p[i],p[j]);
					ans=max(a[i].w,ans);
					print();
					cout <<endl;
				}
			}
		}
	}
	cout<<ans;
	return 0;
}
