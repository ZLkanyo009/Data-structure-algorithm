#include<iostream>
using namespace std;

typedef struct LNode 
{
	int data;
	LNode *next;
}LNode;

void main()
{
	LNode *head = (LNode*)malloc(sizeof(LNode));
	head->next = NULL;
	LNode *p = NULL;
	LNode *r = head;
	int n = 0;
	cout << "请输入链表个数" << endl;
	cin >> n;
	for (int i = 0; i < n; i++) 
	{
		int data = 0;
		p = (LNode*)malloc(sizeof(LNode));
		p->next = NULL;
		cout << "请输入数据" << endl;
		cin >> data;
		p->data = data;
		p->next = head->next;
		head->next = p;
		//r = p;
	}
	r = head->next;
	for (r; r != NULL; r = r->next)
	{
		cout << r->data << endl;
	}
	system("pause");
}