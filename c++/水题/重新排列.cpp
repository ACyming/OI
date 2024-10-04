#include<bits/stdc++.h>
using namespace std;
string a;
int n;
int main(){
	cin>>a;
	sort(a.begin(),a.end());
	if(a[0]=='0')
	{
		for(int i=0;i<a.size();i++)
		{
			if(a[i]!='0')
			{
				swap(a[0],a[i]);
				break;
			}
		}
	}
	cout<<a;
	return 0;
}
