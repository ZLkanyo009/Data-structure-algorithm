//A��BΪǰ׺��ͬ��һ��float���ݣ�����㷨�Ա����ߣ���Aǰ׺������ݸ�������B����ǰ׺��ĵ�һ�����ݴ���B�ĵ�һ�����ݣ���ΪA > B
#include <iostream>
#include <math.h>
using namespace std;

int compare(float A[],int m , float B[],int n)
{
	int i = 0;
	while (i < m && i < n)
	{
		if (A[i] != B[i]) {break;}
		i++;
	}
	if (i == m && i == n)
		return 0;
	if ((i >= m && i < n) || (A[i] < B[i]))
		return -1;
	else 
		return 1;
}

void main()
{
	float A[100] = { 0.2,1.5,3.2,1.2,1.1,1.2 };
	float B[100] = { 0.2,1.5,3.2,1.2,1.1 };
	int result = compare(A, 6, B, 5);
	cout << result << endl;
	system("pause");
}