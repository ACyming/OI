#include<stdio.h> 
int sp(int n)//�����жϺ��� 
{ 
    int j; 
     for(j=2;j<n;j++) 
        { 
            if(n%j==0) 
                break; 
        } 
        if(n==j) 
            return 1; 
        else 
            return 0; 
} 
int hp(int n)//�������жϺ��� 
{ 
    int w=0,j,r=0,a[5]={0}; 
    while(n) 
           { 
              a[w++]=n%10; 
              n/=10; 
            } 
            for(j=0;j<w;j++) 
            { 
                if(a[j]==a[w-j-1]) 
                    r=1; 
                else 
                { 
                    r=0; 
                    break; 
                } 
           } 
    if(r==1) 
        return 1; 
    else 
        return 0; 
} 
int main() 
{ 
    int n,i,s=0,h=0,l=0; 
    scanf("%d",&n); 
    for(i=11;i<=n;i++) 
    { 
          h=sp(i);//���������жϺ��� 
         l=hp(i);//���û������жϺ��� 
        if(h==1&&l==1) 
            s++; 
    } 
    printf("%d",s); 
    return 0; 
} 

