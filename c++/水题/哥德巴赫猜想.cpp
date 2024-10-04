#include <iostream>
using namespace std;

int prime(int);

int main()
{
	for(int k=6;k<=100;k++)
	for (int i = 2; i < 100; i++)
	{
		
		if (prime(i) == 1)
		{
			for (int j = 2; j < 100; j++)
			{
				
				if ((prime(j) == 1) && (i + j == k))
				{
					
					cout << i << "+" << j<<endl;
				}
			}
		}
	}
	return 0;
}
int prime(int n)
{
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}

