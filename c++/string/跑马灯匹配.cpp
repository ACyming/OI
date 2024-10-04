#include<bits/stdc++.h>
using namespace std;
string s1, s2;
int n,num,maxx;
int main() 
{
    
    cin>>n;
    cin>>s1>>s2;
    int size=s1.size();
    for(int i=0;i<size;i++) 
	{
        num=0;
        for (int j=0;j<size;j++) 
		{
            if (s1[j]==s2[(i+j)%n]) 
			{
                num++;
            }
        }
        maxx=max(maxx, num);
    }
    cout<<maxx;
    return 0;
}
