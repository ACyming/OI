#include<iostream>
#include<ctime>
#include<cstdlib>
#include<windows.h>
using namespace std;

int c[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,1,2,3,4,5,6,7,8,9,10,11,12,13,1,2,3,4,5,6,7,8,9,10,11,12,13,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};  //һ����������  
int player1[18]; 
int player2[18];
int player3[18];  //���Ʒ�Ϊ����

//��Ϸ���� 
void Instructions(){
	char s;
	cout<<"��ӭ�������ƽ�����Ϸ��"<<endl;
	cout<<"�Ƿ�鿴��Ϸ�����ǣ�y���������ַ�����";
	cin>>s;
	if(s == 'y'){
		cout<<endl;
		cout<<"һ�����ܹ���54�ţ�ϴ�ƺ��Ϊ3�����������õ�һ���Կ�ʼ��"<<endl;
		cout<<"ÿ��ֻ�ܳ�һ���ƣ��Ƶĵ���������ϼҵ��Ƶĵ��������Ƴ������� 0 ��PASS����������ƿ����һ�ʤ��"<<endl; 
		cout<<endl;
	}
	else
	    cout<<endl;
}

//ϴ�ƺ����������Ƶ�˳�� 
void Shuffle(int *c){
	cout<<"ϴ���С�����"<<endl;
	srand(unsigned(time(NULL)));
	Sleep(1000);
	int a = rand();
	while(a>0){
		for(int i = 53; i > 0; i--){
			srand(unsigned(time(NULL))); 
            int currentRandom = rand() % i;
            swap(c[i],c[currentRandom]);
        }
        a--;
	}
	
	//���ƣ� ��Ϊ���� 
	for(int i = 0;i < 18;i++){
		player1[i] = c[i];
	}
	
	for(int i = 18;i < 36;i++){
		player2[i-18] = c[i];
	}
	
	for(int i = 36;i < 54;i++){
		player3[i-36] = c[i];
	}
}

//���������㷨��Ϊ���ҵ�Ҫ���������ƿ��е�λ�� 
int Binary_Search(int *a, int start, int end, int key){
	int mid;
	while(start <= end){
		mid = (start + end) / 2;
		if(a[mid] < key){
			start = mid + 1;
		}
		else if (a[mid] > key){
			end = mid - 1;
		}
        else{
        	return mid;
		}
	}
	return -1;
}

//���������㷨���������Լ������� 
void QuickSort(int *a, int left, int right){
	if(left >= right){
		return ;
	}
	
	int i = left;
	int j = right;
	int key = a[left];
	
	while(i < j){
		while(i < j && key <= a[j]){
			j--;
		}
		a[i] = a[j];
		while(i < j && key >= a[i]){
			i++;
		}
		a[j] = a[i];
	}
	a[i] = key;
	QuickSort(a,left,i-1);
	QuickSort(a,i+1,right);
}

//���ƺ������������� �ƿ��б�Ϊ 0 
void Play(int p,int *player,int round){
	if(round == 1){
		cout<<"����� "<<player[p]<<endl;
	}
    else if(round == 0){
    	cout<<"�������1���� "<<player[p]<<endl;
    }
    else if(round == -1){
    	cout<<"�������2���� "<<player[p]<<endl;
    }
	player[p] = 0;
	QuickSort(player,0,17);
} 

//�Զ������������� 
void Sort(){
	QuickSort(player1,0,17);
	QuickSort(player2,0,17);
	QuickSort(player3,0,17);
}

//չʾ�ƿ� 
void Display(int *player){
	cout<<endl;
	cout<<"����ƿ⣺"; 
	for(int i = 0;i < 18;i++){
		if(player[i] != 0)
		    cout<<player[i]<<" ";
	}
	cout<<endl;
}

//��������ѡ��Ҫ������ 
int Smart(int current,int *player,int pc){
	int i,S_current;
	if(current == 0){
		for(i = 0;i < 18;i++){
            if(player[i] > 0){
            	S_current = player[i];
                Play(i,player,pc);
			    return S_current;
			}
		}
	}
	else{
		for(i = 0;i < 18;i++){
            if(player[i] > current){
                S_current = player[i];
                Play(i,player,pc);
			    return S_current;
            }
        }
	}
	
	if(pc == 0){
		cout<<"�������1PASS"<<endl;
	    return current;
	} 
	else{
		cout<<"�������2PASS"<<endl; 
	    return current;
	}
}

//�жϳ������Ƿ���Ϲ��� 
int Judge(int p,int H_current,int S_current,int *player){	
	if(p == -1){
		return 1;
	}
	else if(H_current <= S_current)
	    return 2;
	else
	    return 3;
}

//��ҳ��� 
int Human(int S_current,int *player){
	int H_current,p,i;
	cin>>H_current;
	if(H_current == 0){
		cout<<"��PASS"<<endl;
		return S_current;
	}
 
	bool j = false;
	while(!j){
		if(H_current == 0){
		    cout<<"��PASS"<<endl;
		    return S_current;
	    }
	    p = Binary_Search(player,0,17,H_current);
	    i = Judge(p,H_current,S_current,player);
	    if(i == 3){
		    Play(p,player,1);
	        return H_current;
	    }
	    else if(i == 1){
		    cout<<"��û�д���!"<<endl;
		    cin>>H_current;
	    }
	    else{
	    	cout<<"���޷������ƣ�"<<endl;
	    	cin>>H_current;
	    }
	}	
}

//�ж���Ӯ 
bool Win(int *player){
	int s = 0;
	for(int i = 0;i < 18;i++){
		s += player[i];
	}
	if(s == 0)
	    return true;
	else
	    return false;
}

//������� 
void Result(bool S1,bool S2,bool H){
	if(S1){
		cout<<endl;
		cout<<"�����ˣ�"<<endl;
		cout<<"�������1���ʤ����"<<endl;
	}
	else if (S2){
		cout<<endl;
		cout<<"�����ˣ�"<<endl;
		cout<<"�������2���ʤ����"<<endl;
	}
	else if (H){
		cout<<"��Ӯ�ˣ�"<<endl;
	}
}



int main(){
	Instructions(); //���� 
	Shuffle(c);   //ϴ�� 
    Sort();    //���� 
    
    //���ѡ������ 
    srand(unsigned(time(NULL))); 
    int pick = rand() % 3;
    
    int S1_current = 0;
    int S2_current = 0;
    int H_current = 0;  //��¼������ 
    bool S1_result = false;
    bool S2_result = false;
    bool H_result = false;  //�ж���Ӯ�ı��� 
    
    //���������ȳ���ԭ����Բ����˳��һһ���ƣ�һ�����ƿ���գ�������ѭ�� 
    if (pick == 0) {
        while(!S1_result && !S2_result && !H_result){
     	    Display(player1);
            H_current = Human(S2_current,player1);
            if(H_current == S1_current){
            	H_current = 0;
            }
            
            H_result = Win(player1);
            if(H_result == true)
                break;
                
            S1_current = Smart(H_current,player2,0);
            if(S1_current == S2_current){
            	S1_current = 0;
            }
            
            S1_result = Win(player2);
            if(S1_result == true)
                break;
                
            S2_current = Smart(S1_current,player3,-1);
            if(S2_current == H_current){
            	S2_current = 0;
            }
            
            S2_result = Win(player3);
            if(S2_result == true)
                break;
        }
        Display(player1);
    }
    else if(pick == 1){
        while(!S1_result && !S2_result && !H_result){
     	    S1_current = Smart(H_current,player2,0);
     	    if(S1_current == S2_current){
            	S1_current = 0;
            }
            
            S1_result = Win(player2);
            if(S1_result == true)
                break;
                
            S2_current = Smart(S1_current,player3,-1);
            if(S2_current == H_current){
            	S2_current = 0;
            }
            
            S2_result = Win(player3);
            if(S2_result == true)
                break;
            
            Display(player1);
            H_current = Human(S2_current,player1);
            if(H_current == S1_current){
            	H_current = 0;
            }
            
            H_result = Win(player1);
            if(H_result == true)
                break;
                
        }
        Display(player1);
    }
    else{
        while(!S1_result && !S2_result && !H_result){
            S2_current = Smart(S1_current,player3,-1);
            if(S2_current == H_current){
            	S2_current = 0;
            }
            
            S2_result = Win(player3);
            if(S2_result == true)
                break;
                
            Display(player1);
            H_current = Human(S2_current,player1);
            if(H_current == S1_current){
            	H_current = 0;
            }
            
            H_result = Win(player1);
            if(H_result == true)
                break;
                
            S1_current = Smart(H_current,player2,0);
            if(S1_current == S2_current){
            	S1_current = 0;
            }
            
            S1_result = Win(player2);
            if(S1_result == true)
                break;
                
        }
        Display(player1);
    }
    
    Result(S1_result,S2_result,H_result);   //������� 
    system("pause");
	return 0;
}

