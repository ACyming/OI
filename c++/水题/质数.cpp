#include<iostream>
#include<cmath>
using namespace std;
int main(void){
	int n;
	bool m=1;//m�����ж��Ƿ�Ϊ���� 
    if(n%2==0&&n!=2||n==1)//�ų�ż��
        m=0;
    n=sqrt(n);
	for(int i=3;;i+=2)//1�������ǣ�ͬʱ�ж�ʱ���ῼ��������
		if(n%i==0){//������ 
	        m=0;//��� 
			break;//�˳�ѭ�� 
        }
			
	if(m)
		cout<<"������";
	else
		cout<<"��������";
}
