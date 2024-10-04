#include<iostream>
#include<vector>
using namespace std;
class Solution 
{
public:
	int NN = N;
	Solution(int nn):N(nn){}
	vector<vector<int>>get_mat(int n)
	{
		vector<vector<int>> res(n, vector<int>(n, 0));
		int start_x=0,start_y=0;
		int loop = n / 2;
		int count = 0;
		int offset = 1;

		while (loop--)
		{
			int i = start_x;
			int j = start_y;
			for (j = start_y; j < n + start_y - offset; j++)
			{
				res[start_x][j] = count++;
			}
			for (i = start_x; i < n + start_x - offset; i++)
			{
				res[i][j] = count++;
			}
			for (; j > start_y; j--)
			{
				res[i][j] = count++;
			}
			for (; i > start_x; i--)
			{
				res[i][j] = count++;
			}
			offset += 2;
			start_x += 1;
			start_y += 1;
		}
		if (n % 2 == 1)
		{
			res[n / 2][n / 2] =count;
		}
		return res;

 	}
	friend ostream& operator<<(ostream& output, vector<vector<int>>& MAT);
private:
	int N;
};
ostream& operator << (ostream& output, vector<vector<int>>& MAT)
{
	int k = 0;
	while (k < MAT.size())
	{
		for (int kk = 0; kk < MAT.size(); kk++)
			output << MAT[k][kk] << " ";
		output << endl;
		k = k + 1;
	}
	return output;

}
int main()
{
	int NN;
	vector<vector<int>> RES;
	cout << "请输入二位数组维数:";
	cin >> NN;
	Solution SS(NN);
	RES = SS.get_mat(NN);
	cout <<RES << endl;
	return 0;
}

