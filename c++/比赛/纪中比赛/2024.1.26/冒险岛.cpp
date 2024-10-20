#pragma GCC optimize(2)
#include<bits/stdc++.h>
#define int long long
using namespace std;
char s[1000020];
int now=0,len,n,a[100000];//µ±Ç°Î»ÖÃ
void hs() {
	while(s[++now]=='>');
	if(now>len) now=len;
}
void hs2() {
	int cnt=now;
	while(s[cnt]=='*') cnt++,now--;
	if(now<1) now=1;
}
main() {
	freopen("mxd.in","r",stdin);
	freopen("mxd.out","w",stdout);
	scanf("%s",s+1);
	len=strlen(s+1);
	cin>>n;
	for(int i=1; i<=n; i++)
		cin>>a[i];
	for(int i=1; i<=n; i++) {
		now+=a[i];
		if(now>len) now=len;
		if(s[now]=='>'&&s[now+1]=='>'&&s[now+2]=='>') hs();
		else if(s[now]=='*'&&s[now+1]=='*'&&s[now+2]=='*') hs2();
	}
	cout<<now<<" "<<len-now;
	return 0;
}
