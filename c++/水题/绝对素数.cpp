#include<bits/stdc++.h> 
int f1,a,b,c,f2;
int main()
{
	for(int i=10;i<=99;i++)
	{
		for(int j=2;j<=sqrt(i);j++)
		{
			f1=1;
			if(j%i==0)
			{
				f1=0;
				break;
				}	
		}
		if(f1=1)
		{
			a=i%10;
			b=i/10%10;
			c=a*10+b;
			for(int a=2;a<=sqrt(c);a++)
			{
				f2=1;
				if(a%c==0)
				{
					f2=0;
					break;
				}
			 }
			 if(f1+f2==2)
			 {
			 	printf("%d\n",i);
			  } 
		}
	}
	return 0;
}
