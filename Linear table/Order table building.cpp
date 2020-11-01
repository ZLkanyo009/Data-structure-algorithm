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

void reverse(int list[],int min,int max)
{
	int temp;
	cout << "reverse" << endl;
	for (int i = min, j = max; i < j; i++, j--)
	{
		temp = list[i];
		list[i] = list[j];
		list[j] = temp;
	}
}

void show_list(int list[],int length)
{
	cout << "show_list" << endl;
	for (int i = 0; i < length; i++)
	{
		cout << list[i] << endl;
	}
}

void main()
{
	int list[100];
	int length;
	create(list,length);
	show_list(list, length);
	reverse(list, 0, length - 1);
	show_list(list, length);
	system("pause");
}