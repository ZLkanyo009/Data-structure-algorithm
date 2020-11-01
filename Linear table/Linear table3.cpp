/*有一递增非空单链表，删除其中值重复的节点*/

#include<iostream>
using namespace std;

typedef struct LNode
{
	int data;
	LNode *next;
}LNode;

void show(LNode *head)
{
	LNode *r = NULL;
	r = head->next;
	for (; r != NULL; r = r->next)
	{
		cout << r->data << endl;
	}
}

void create(LNode *&head)
{
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
		p->next = r->next;
		r->next = p;
		r = p;
	}
}

void deleteL(LNode *&head)
{
	LNode *p = head->next;
	LNode *q;
	while (p->next != NULL)
	{
		if (p->data != p->next->data)
		{
			p = p->next;
			cout << "yes";
		}
		else
		{
			q = p->next;
			p->next = q->next;
			cout << "yes2";
			free(q);
		}
	}
	cout << "yes3";
}

void main() 
{
	LNode *head = (LNode *)malloc(sizeof(LNode));
	head->next = NULL;
	create(head);
	show(head);
	system("pause");
	deleteL(head);
	show(head);
	system("pause");
}