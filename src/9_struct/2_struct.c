/*
 * Date: 2014年7月17日
 * Author: Administrator
 */
#include <stdio.h>
#include <stdlib.h>

#define LEN sizeof(struct Node)
//链表节点
struct Node
{
	int value;
	struct Node *next;
};


int main()
{
	struct Node * creat();
	void printNode(struct Node *h);

	//链表
	struct Node n1 = {1}, n2 = {2}, n3 = {3}, *head, *p;

	head = &n1;
	n1.next = &n2;
	n2.next = &n3;
//	n3.next = NULL;	//初始化的时候已经为NULL

	p = head;
	while (p != NULL)
	{
		printf("%d ", p->value);
		p = p->next;
	}
	printf("\n******\n");


	//动态链表
	struct Node *createHead;
	createHead = creat();
	printNode(createHead);
	return 0;
}

struct Node *creat()
{
	struct Node *head, *p1, *p2;

	p1 = p2 = malloc(LEN);

	scanf("%d", &p1->value);
	head = p1;

	while(p1->value > 0)
	{
		p2->next = p1;
		p2 = p1;
		p1 = malloc(LEN);
		scanf("%d", &p1->value);
	}
	p2->next = NULL;
	return head;
}

void printNode(struct Node *h)
{
	while(h != NULL)
	{
		printf("%d ", h->value);
		h = h->next;
	}
}
