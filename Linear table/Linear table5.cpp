/*�ҳ���������Сֵ�����ṩ���±���������A(����ΪN),int i������������ȫΪ��λint����*/

/*˼·������i�ĸ�λ�洢���ݣ�����i��ʮλ�����ϴ洢�±�*/

#include<iostream>

using namespace std;

int create(int list[], int &length)
{
	cout << "create" << endl;
	cout << "�������鳤��" << endl;
	cin >> length;
	for (int i = 0; i < length; i++)
	{
		cout << "��������" << endl;
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
	cout<< "��СֵΪ" << i << endl;
	system("pause");
}
