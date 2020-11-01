/*将一个单链表分为奇数与偶数两个单链表，里面数据排序与原来一样*/


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

LNode *split(LNode *&head)
{
	LNode *jishu_head = (LNode *)malloc(sizeof(LNode));
	jishu_head->next = NULL;
	LNode* jishu_r = jishu_head, *oushu, *oushu_prior=head;
	while (oushu_prior ->next!= NULL)
	{
		if (oushu_prior->next->data % 2 != 0)
		{
			oushu = oushu_prior->next;
			oushu_prior->next = oushu->next;
			oushu->next = jishu_r->next;
			jishu_r->next = oushu;
			jishu_r = oushu;
		}
		else { oushu_prior = oushu_prior->next; }
	}
	return jishu_head;
}

void main()
{
	LNode *head = (LNode *)malloc(sizeof(LNode));
	head->next = NULL;
	LNode *jishu_head;
	create(head);
	show(head);
	system("pause");
	jishu_head = split(head);
	show(head);
	system("pause");
	show(jishu_head);
	system("pause");
}