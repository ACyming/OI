#include<iostream>
#include<cmath>
using namespace std;
int main(void){
	int n;
	bool m=1;//m用作判断是否为素数 
    if(n%2==0&&n!=2||n==1)//排除偶数
        m=0;
    n=sqrt(n);
	for(int i=3;;i+=2)//1不做考虑，同时判断时不会考虑他本身
		if(n%i==0){//能整除 
	        m=0;//标记 
			break;//退出循环 
        }
			
	if(m)
		cout<<"是素数";
	else
		cout<<"不是素数";
}
