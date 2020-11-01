#include <iostream>

using namespace std;

typedef struct DLNode 
{
	int data;
	DLNode *prior;
	DLNode *next;
}DLNode;

void main()
{
	int n;
	cout << "输入链表长度" << endl;
	cin >> n;
	DLNode *head,*r,*p;
	head = (DLNode *)malloc(sizeof(DLNode));
	head->next = NULL;
	head->prior = NULL;
	r = head;
	for (int i = 0; i < n; i++)
	{
		p = (DLNode *)malloc(sizeof(DLNode));
		p->next = NULL;
		cout << "请输入数据" << endl;
		cin >> p->data;
		p->next = r->next;
		p->prior = r;
		r->next = p;
		r = p;
	}
	r = head->next;
	for (int i = 0; i < n; i++)
	{
		cout << r->data << endl;
		r = r->next;
	}
	system("pause");
	r = head;
	for (int i = 0; i < n; i++)
	{
		//cout << r->data << endl;
		r = r->next;
	}
	for (int i = 0; i < n; i++)
	{
		cout << r->data << endl;
		r = r->prior;
	}
	system("pause");
}