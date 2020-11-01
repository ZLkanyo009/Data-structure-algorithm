/*找出数组中最小值，仅提供如下变量：数组A(长度为N),int i，数组内数据全为个位int数据*/

/*思路：利用i的个位存储数据，利用i的十位及以上存储下标*/

#include<iostream>

using namespace std;

int create(int list[], int &length)
{
	cout << "create" << endl;
	cout << "输入数组长度" << endl;
	cin >> length;
	for (int i = 0; i < length; i++)
	{
		cout << "输入数据" << endl;
		cin >> list[i];
	}
	return 1;
}

void find_min(int a[], int length, int &i)
{
	i = a[0];
	i += 10;
	while (i / 10 < length)
	{
		if (a[i / 10] < i%10)
		{
			i = i - i % 10;
			i = i + a[i / 10];
		}
		i += 10;
	}
	i = i % 10;
}

void main() 
{
	int a[100];
	int length,i;
	create(a, length);
	find_min(a, length,i);
	cout<< "最小值为" << i << endl;
	system("pause");
}
