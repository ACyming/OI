#include<iostream>
using namespace std;
int main()
{
	int k;
	cin >> k;
	int num[99][99] = { 0 };
	int m = 0;
	int n = (k-1)/2;
	num[0][(k-1)/2] = 1;
	for (int i = 2; i <= k*k; i++)
	{
		m--;
		n++;
		if (m == -1 && n != k)//����
		{
			m = m + k;
			num[m][n] = i;
		}
		else if (n == k && m != -1)//����
		{
			n = n - k;
			num[m][n] = i;
		}
		else if (m == -1 && n == k)//�����϶���
		{
			m = m + 2;
			n = n - 1;
			num[m][n] = i;
		}
		else if (num[m][n] != 0)//����������
		{
			m = m + 2;
			n = n - 1;
			num[m][n] = i;
		}
		else//ͨ������
		{
			num[m][n] = i;
		}
	}

	for (m = 0; m <k; m++)//���
	{
		for (n = 0; n <k; n++)
		{
			cout << num[m][n] << "\t";
		}
		cout << endl;
	}

}

