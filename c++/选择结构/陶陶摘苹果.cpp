#include<iostream>
using namespace std;
int main()
{

int apple[10],high,total=0;
int i;
for(i=0;i<10;i++)cin>>apple[i];
cin>>high;
high+=30;
for(i=0;i<10;i++)
if(apple[i]<=high)
total++;
cout<<total<<endl;
return 0;
}
