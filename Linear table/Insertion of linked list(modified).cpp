#include<iostream>
using namespace std;

typedef struct LNode
{
	char data;
	LNode *next;
}LNode;

void main()
{
	LNode *head = (LNode*)malloc(sizeof(LNode));
	head->next = NULL;
	LNode *p = NULL;
	LNode *r = head;
	int n = 0;
	char data;
	cout << "���������ݸ���" << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		//p = (LNode*)malloc(sizeof(LNode));
		//p->next = NULL;
		cout << "����������" << endl;
		cin >> data;
		p = head->next;
		while (p != NULL)
		{
			if (p->data == data) { break; }
			p = p->next;
		}
		if (p == NULL) 
		{
			p = (LNode*)malloc(sizeof(LNode));
			p->next = NULL;
			p->data = data;
			p->next = head->next;
			head->next = p;
		}
		//p->data = data;
		//p->next = head->next;
		//head->next = p;
		//r = p;
	}
	p = head->next;
	cout << endl;
	for (; p != NULL; p = p->next)
	{
		cout << p->data << endl;
	}
	system("pause");
}