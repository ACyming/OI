#include<bits/stdc++.h> 
using namespace std;
int main()
{
 int n,i,j,k;
 cin>>n;
 int a[n];
 for(i=0;i<n;i++)
 {
  cin>>a[i];
 }
 sort(a,a+n); 
 cin>>k;
 for(i=0;i<k;i++)
 {
  int t;
  cin>>t; 
  cout<<endl<<a[t-1]; 
 }
 return 0;
}

