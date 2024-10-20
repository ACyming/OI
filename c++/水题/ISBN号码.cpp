#include<bits/stdc++.h>
using namespace std;
string s;
int num;
int cnt;
int main()
{
	cin>>s;
	for(int i=0;i<s.size()-1;i++)
	{
		if(isdigit(s[i]))
		{
			cnt++;
			num+=((s[i]-'0')*cnt);
//			cout<<num<<endl;
		}
	}
//	cout<<s[s.size()-1]<<endl;
//	if((num%11)!=(s[s.size()-1]-'0'))
//	{
//		for(int i=0;i<s.size()-1;i++)
//		{
//			cout<<s[i];
//		}
//		if(num%11==10)
//		cout<<"X";
//		else
//		cout<<num%11;
//		return 0;
//	}
//	if(s[s.size()-1]=='X')
//	{
//		if((num%11)!=10)
//		{
//			for(int i=0;i<s.size()-1;i++)
//			{
//				cout<<s[i];
//			}
//			cout<<num%11;
//			return 0;
//		}
//	}
//	cout<<"Right";
	if (num%11 == 10)
    {
        if (s[s.size()-1]=='X')
            printf("Right");
        else
        {
            for(int i=0;i<s.size()-1;i++)
			{
				cout<<s[i];
			}
			cout<<"X";
        }
    }
    else
    {
        if (num%11 == s[s.size()-1]-'0')
            printf("Right");
        else
        {
             for(int i=0;i<s.size()-1;i++)
			{
				cout<<s[i];
			}
			cout<<num%11;
		}
    }
	return 0;
}
