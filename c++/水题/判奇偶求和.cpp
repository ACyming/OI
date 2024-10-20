#include<iostream>
using namespace std;
int main(){
    int n,s=0;
    cin>>n;
    if(n%2==1){
        for(int i=2;i<=n;i+=2){
            s+=i;
        }
    }else{
        for(int i=1;i<=n;i++){
            if(n%i==0){
                s+=i;
            }
        }
    }
    cout<<s;
    return 0;
}
