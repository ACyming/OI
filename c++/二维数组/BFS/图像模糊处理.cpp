#include<iostream>
#include<cmath>
using namespace std;
int origin[1000][1000];
int main() {
	int m,n;
	cin>>n>>m;
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cin>>origin[i][j];
		}
	}
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			if(i==0||i==n-1||j==0||j==m-1) {//�߽�ҶȲ���
				cout<< origin[i][j] <<" ";//�������
			} else {
				int sum=origin[i][j]+origin[i-1][j]+origin[i+1][j]
				        +origin[i][j-1]+origin[i][j+1];//�ڲ�ĳ�㼰�������غ�
				cout<<rint(sum/5.0)<<" ";//�������ƽ��ֵ�������룬��Ч(int)round()
			}
		}
		cout<<endl;
	}
	return 0;
}

