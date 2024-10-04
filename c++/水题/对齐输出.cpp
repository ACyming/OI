#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int i, j, k;
	cin >> i >> j >> k;
	cout.setf (ios::right);
	cout << setw(8) << i << ' '<< setw(8) << j << ' '<< setw(8) << k;
	return 0;
 } 
