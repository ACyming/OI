//#include<bits/stdc++.h>
//using namespace std;
//unsigned long long a=1,b=1,c,d;
//long long print1(long long c)
//{
//	long long num=0;
//	while (c!=0)
//	{
//		if(c%10==0)
//		{
//			num++;
//			c/=10;
//		}
//		else
//		{
//			return num;
//		}
//		
//	}
//}
//long long print2(long long d)
//{	
//	long long num2=0;
//	while (d!=0)
//	{
//		if(d%10==0)
//		{
//			num2++;
//			d/=10;
//		}
//		else
//		{
//			return num2; 
//		}
//	}
//}
//int main()
//{
//	long long n;
//	cin>>n;
//	for( long long i=n;i>=1;i-=1)
//	{
//		a=a*i;	
//	}
//	for( long long i=n;i>=1;i-=2)
//	{
//		b=b*i;	
//	}
////	print1(a);
////	print2(b);
////	cout<<a<<endl<<b<<endl;
//	if(a%2==0) 
//	{
//		cout<<print1(a)<<" ";
//	}
//	else
//	{
//		cout<<0<<endl;
//	}
//	if(b%2==0) 
//	{
//		cout<<print2(b);
//	}
//	else
//	{
//		cout<<0;
//	}
//	return 0;
//} 
#include <iostream>
using namespace std;

// 计算 n! 末尾 0 的个数，等价于计算 5 的个数
int n!(int n) {
    int count = 0;
    while (n >= 5) {
        count += n / 5;
        n /= 5;
    }
    return count;
}

// 计算 n!! 末尾 0 的个数，等价于计算 10 的个数，即 2 和 5 的个数
int n!!(int n) {
    int count = 0;
    for (int i = n; i >= 5; i -= 2) {
        int x = i;
        while (x % 5 == 0) {
            count++;
            x /= 5;
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    cout << n!(n) << " "<< n!!(n) << endl;
    return 0;
}

