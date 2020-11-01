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

void create(LNode *head)
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
		p->next = r ->next;
		r ->next = p;
		r = p;
	}
}

void reverse(LNode *forward, LNode *backward)
{
	LNode *temp = NULL;
	while (forward->next != backward)
	{
		temp = forward->next;
		forward->next = temp->next;
		temp->next = backward->next;
		backward->next = temp;
	}
}

void reverse2(LNode *head)
{
	LNode *p = head->next;
	LNode *r = p;
	while (r->next != NULL)
	{
		r = r->next;
	}
	while (p != r)
	{
		head->next = p->next;
		p->next = r->next;
		r->next = p;
		p = head->next;
	}
	//head = head ->next;
}

LNode *reverseList(LNode *head) 
{
	if (head == NULL || head -> next == NULL) return head;
	LNode *newHead = reverseList(head -> next);//尾节点
	head->next->next = head;
	head->next = NULL;
	return newHead;
}

int main() 
{
	LNode *head = (LNode*)malloc(sizeof(LNode));
	head->next = NULL;
	create(head);
	show(head);
	LNode *forward = head;
	LNode *backward = head->next->next->next->next;
	head = reverseList(forward);
	show(head);
	system("pause");
	return 0;
}