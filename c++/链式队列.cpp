#include <bits/stdc++.h>
using namespace std;

//���н�� 
struct Queue{
	int data;
	struct Queue *next;
};

Queue *front = NULL;//��ͷ
Queue *rear = NULL;//��β

//��� 
void add(int value){
	Queue *e = new Queue;
	e->data = value;
	e->next = NULL;
	//���е�һ��Ԫ�� 
	if(front == NULL){
		front = e;
	}else{
		rear->next = e;
	}
	
	rear = e;
} 
//���� 
void del(){
	Queue *t;
	//���������Ԫ��
	if(front != NULL){
		cout<<front->data<<"����"<<endl;
		t = front;
		front = front->next;
		if(front == NULL) rear = NULL;
		delete t;
	}else{
		cout<<"���п�"<<endl;
	} 
}

//��ʾ�� 
void display(){
	Queue *p = front;
	while(p != NULL){
		cout<<p->data<<" ";
		p = p->next;
	}
	cout<<endl;
}

int main(){
	int order,x;
	cout<<"����ָ��:"<<endl;
	while(1){
		cout<<"1:���,2:����,3:��ʾ��!"<<endl;
		cin>>order;
		if(order == 1){
			cin>>x;
			add(x);
			display(); 
		}else if(order == 2){
			del();
			display();
		}else if(order == 3){
			display();
		}
	}
    return 0;
}
