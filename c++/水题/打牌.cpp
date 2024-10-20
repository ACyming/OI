#include<iostream>
#include<ctime>
#include<cstdlib>
#include<windows.h>
using namespace std;

int c[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,1,2,3,4,5,6,7,8,9,10,11,12,13,1,2,3,4,5,6,7,8,9,10,11,12,13,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};  //一副完整的牌  
int player1[18]; 
int player2[18];
int player3[18];  //将牌分为三份

//游戏规则 
void Instructions(){
	char s;
	cout<<"欢迎来到卡牌接龙游戏！"<<endl;
	cout<<"是否查看游戏规则？是（y）否（任意字符）：";
	cin>>s;
	if(s == 'y'){
		cout<<endl;
		cout<<"一副牌总共有54张，洗牌后分为3叠，玩家随机得到一叠以开始。"<<endl;
		cout<<"每次只能出一张牌，牌的点数必须比上家的牌的点数大，无牌出则输入 0 以PASS！率先清空牌库的玩家获胜！"<<endl; 
		cout<<endl;
	}
	else
	    cout<<endl;
}

//洗牌函数，打乱牌的顺序 
void Shuffle(int *c){
	cout<<"洗牌中。。。"<<endl;
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
	
	//发牌， 分为三份 
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

//二分搜索算法，为了找到要出的牌在牌库中的位置 
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

//快速排序算法，用于排自己的手牌 
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

//出牌函数，出掉的牌 牌库中变为 0 
void Play(int p,int *player,int round){
	if(round == 1){
		cout<<"你出牌 "<<player[p]<<endl;
	}
    else if(round == 0){
    	cout<<"电脑玩家1出牌 "<<player[p]<<endl;
    }
    else if(round == -1){
    	cout<<"电脑玩家2出牌 "<<player[p]<<endl;
    }
	player[p] = 0;
	QuickSort(player,0,17);
} 

//自动将三份牌排序 
void Sort(){
	QuickSort(player1,0,17);
	QuickSort(player2,0,17);
	QuickSort(player3,0,17);
}

//展示牌库 
void Display(int *player){
	cout<<endl;
	cout<<"你的牌库："; 
	for(int i = 0;i < 18;i++){
		if(player[i] != 0)
		    cout<<player[i]<<" ";
	}
	cout<<endl;
}

//电脑智能选择要出的牌 
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
		cout<<"电脑玩家1PASS"<<endl;
	    return current;
	} 
	else{
		cout<<"电脑玩家2PASS"<<endl; 
	    return current;
	}
}

//判断出的牌是否符合规则 
int Judge(int p,int H_current,int S_current,int *player){	
	if(p == -1){
		return 1;
	}
	else if(H_current <= S_current)
	    return 2;
	else
	    return 3;
}

//玩家出牌 
int Human(int S_current,int *player){
	int H_current,p,i;
	cin>>H_current;
	if(H_current == 0){
		cout<<"我PASS"<<endl;
		return S_current;
	}
 
	bool j = false;
	while(!j){
		if(H_current == 0){
		    cout<<"我PASS"<<endl;
		    return S_current;
	    }
	    p = Binary_Search(player,0,17,H_current);
	    i = Judge(p,H_current,S_current,player);
	    if(i == 3){
		    Play(p,player,1);
	        return H_current;
	    }
	    else if(i == 1){
		    cout<<"你没有此牌!"<<endl;
		    cin>>H_current;
	    }
	    else{
	    	cout<<"你无法出此牌！"<<endl;
	    	cin>>H_current;
	    }
	}	
}

//判断输赢 
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

//宣布结果 
void Result(bool S1,bool S2,bool H){
	if(S1){
		cout<<endl;
		cout<<"你输了！"<<endl;
		cout<<"电脑玩家1获得胜利！"<<endl;
	}
	else if (S2){
		cout<<endl;
		cout<<"你输了！"<<endl;
		cout<<"电脑玩家2获得胜利！"<<endl;
	}
	else if (H){
		cout<<"你赢了！"<<endl;
	}
}



int main(){
	Instructions(); //规则 
	Shuffle(c);   //洗牌 
    Sort();    //排序 
    
    //随机选择先手 
    srand(unsigned(time(NULL))); 
    int pick = rand() % 3;
    
    int S1_current = 0;
    int S2_current = 0;
    int H_current = 0;  //记录出的牌 
    bool S1_result = false;
    bool S2_result = false;
    bool H_result = false;  //判断输赢的变量 
    
    //根据先手先出牌原则，以圆桌的顺序一一出牌，一旦有牌库清空，便跳出循坏 
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
    
    Result(S1_result,S2_result,H_result);   //宣布结果 
    system("pause");
	return 0;
}

