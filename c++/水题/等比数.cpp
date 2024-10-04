#include<bits/stdc++.h>
using namespace std;
int main()
{
	for(int a=1;a<=9;a++)
	{
		for(int b=a+1;b<=9;b++)
		{
			for(int c=b+1;c<=9;c++)
			{
				if((a+b+c)%6==0)
				cout<<a<<b<<c<<endl;
				for(int d=c+1;d<=9;d++)
				{
					for(int e=d+1;e<=9;e++)
					{
						for(int f=e+1;f<=9;f++)
						{
							if((d+e+f)%6==0)
							cout<<d<<e<<f<<endl;
							for(int g=f+1;g<=9;g++)
							{
								for(int h=g+1;h<=9;h++)
								{
									for(int i=h+1;i<=9;i++)
									{
										if((g+h+i)%6==0)
										cout<<g<<h<<i<<endl;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
