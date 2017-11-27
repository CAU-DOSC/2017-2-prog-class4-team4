#include "header.h"

LINK createNode(int n)
{
	LINK cur = (LINK)malloc(sizeof(NODE));
	cur->n = n;
	cur->next = NULL;

	return cur;
}
LINK append(LINK head, LINK cur)
{
	LINK nextNode = head;
	if (head == NULL)
	{
		head = cur;
		return head;
	}
	while (nextNode->next != NULL)
	{
		nextNode = nextNode->next;
	}
	nextNode->next = cur;
	return head;
}
int nodeNum(LINK head)
{
	int cnt = 0;
	LINK nextNode = head;
	while (nextNode != NULL)
	{
		nextNode = nextNode->next;
		cnt++;
	}
	return cnt;
}
void reverse(LINK head)
{
	printf("역순출력:");
	LINK a, b, c;
	a = head;
	b = NULL;
	while (a!=NULL)
	{
		c = b;
		b = a;
		a = a->next;
		b->next = c;
	}
	while (a != NULL)
	{
		c = b;
		b = a;
		a = a->next;
		b->next = c;
	}
	head = b;
	a = b;
	while (b != NULL)
	{
		printf("%d", b->value);
		b = b->next;
	}
	b = NULL;
	c = NULL;
	while (a != NULL)
	{
		c = b;
		b = a;
		a = a->next;
		b->next = c;
	}
	head = b;
}
