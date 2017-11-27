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

void midNum(LINK head)
{
	int cnt = 0;
	LINK nextNode = head;
	while (nextNode != NULL)
	{
		nextNode = nextNode->next;
		cnt++;
	}
	if (cnt % 2 == 0)
	{
		nextNode = head;
		printf("\n노드의 개수는 짝수입니다 따라서 중간값은:");
		for (int i = 0; i < cnt / 2; i++)
		{
			nextNode = nextNode->next;
		}
		printf("%d,", nextNode->value);
		nextNode = nextNode->next;
		printf("%d 입니다.", nextNode->value);
	}
	else
	{
		nextNode = head;
		printf("\n노드의 개수는 홀수입니다 따라서 중간값은:");
		for (int i = 0; i < cnt / 2; i++)
		{
			nextNode = nextNode->next;
		}
		printf("%d 입니다.", nextNode->value);
	}
	printf("\n");
}

void print(LINK head)
{
	LINK nextNode = head;
	while (nextNode != NULL)
	{
		printf("%d", nextNode->value);
		nextNode = nextNode->next;
	}
	printf("\n");
}
LINK odddlt(LINK head)
{
	printf("홀수번째 노드 삭제\n");
	int i;
	LINK temp;
	LINK del;
	int n = nodeNum(head);
 
	del = head;
	head = head->next;
	free(del);
 
	temp = head;
	for (i = 1; i < n / 2; i++) {
		if (temp->next != NULL){
			del = temp->next;
			temp->next = del->next;
			free(del);
			temp = temp->next;
			printf("!\n");
		}
	}
	
	return head;
}
