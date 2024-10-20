`#include <bits/stdc++.h>
using namespace std;
//ջԪ�� 
struct Stack{
	int data;
	struct Stack *next;
};

Stack *top = NULL;//ջ��ָ�� 
//��ջ
void push(int x){
	Stack *p = new Stack;
	p->data = x;
	p->next = top;
	top = p;//�޸�ջ��λ�� 
} 
//��ջ
void pop(){
	Stack *p = top;
	if(p != NULL){
		cout<<p->data<<"��ջ"<<endl;
		p = p->next;
		delete top;
		top = p;//�޸�ָ��λ�� 
	}else{
		cout<<"ջ��"<<endl;
	}
	
} 
//���ջ����
int getlen(){
	int len = 0;
	Stack *p = top;
	while(p != NULL){
		len++;
		p = p->next;
	}
	return len;
} 
//��ʾջԪ��
void display(){
	Stack *p = top;
	while(p != NULL){
		cout<<p->data<<" ";
		p = p->next;
	}
	cout<<endl;
} 

int main(){
	int order,x;
	cout<<"����ָ��:"<<endl;
	while(1 == 1){
		cout<<"1:��ջ,2:��ջ,3:��ʾ,4:��ջ��!"<<endl;
		cin>>order;
		if(order == 1){
			cin>>x;
			push(x);
			display();
		}else if(order == 2){
			pop();
			display();
		}else if(order == 3){
			display();
		}else if(order == 4){
			cout<<getlen()<<endl;
		}
	}
    return 0;
}
