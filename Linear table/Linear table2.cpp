//从以给定的顺序表L中删除下表i-j的所有元素（包括i、j）

#include <iostream>
using namespace std;

void deleteA(int A[], int &length,int i,int j)
{
	int move_step = j - i + 1;
	for (int x = i; x + move_step < length; x++)
	{
		A[x] = A[x + move_step];
	}
	length = length - move_step;
}

int main()
{
	int A[100] = { 1,2,3,4,5,6,7,8,9,10,11 };
	int length = 11;
	int i = 9;
	int j = 11;
	deleteA(A, length,i,j);
	cout << length << endl<<endl;
	for (int i = 0; i < length; i++)
	{
		cout << A[i] << endl;
	}
	system("pause");
}