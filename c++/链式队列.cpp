#include <bits/stdc++.h>
using namespace std;

//队列结点 
struct Queue{
	int data;
	struct Queue *next;
};

Queue *front = NULL;//队头
Queue *rear = NULL;//队尾

//入队 
void add(int value){
	Queue *e = new Queue;
	e->data = value;
	e->next = NULL;
	//队列第一个元素 
	if(front == NULL){
		front = e;
	}else{
		rear->next = e;
	}
	
	rear = e;
} 
//出队 
void del(){
	Queue *t;
	//如果队列有元素
	if(front != NULL){
		cout<<front->data<<"出队"<<endl;
		t = front;
		front = front->next;
		if(front == NULL) rear = NULL;
		delete t;
	}else{
		cout<<"队列空"<<endl;
	} 
}

//显示队 
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
	cout<<"输入指令:"<<endl;
	while(1){
		cout<<"1:入队,2:出队,3:显示队!"<<endl;
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
