#include "header.h"

LINK createNode(int *value)
{
	LINK cur;
	cur = (LINK)malloc(sizeof(NODE));
	cur->value = value;
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
	printf("�������:");
	LINK a, b, c;
	a = head;
	b = NULL;
	while (a != NULL)
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
		printf("\n����� ������ ¦���Դϴ� ���� �߰�����:");
		for (int i = 0; i < cnt / 2; i++)
		{
			nextNode = nextNode->next;
		}
		printf("%d,", nextNode->value);
		nextNode = nextNode->next;
		printf("%d �Դϴ�.", nextNode->value);
	}
	else
	{
		nextNode = head;
		printf("\n����� ������ Ȧ���Դϴ� ���� �߰�����:");
		for (int i = 0; i < cnt / 2; i++)
		{
			nextNode = nextNode->next;
		}
		printf("%d �Դϴ�.", nextNode->value);
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
	printf("Ȧ����° ��� ����\n");
	int i;
	LINK temp;
	LINK del;
	int n = nodeNum(head);

	del = head;
	head = head->next;
	free(del);

	temp = head;
	if (n % 2 == 0)
	{
		for (i = 1; i < n / 2; i++) 
		{
			if (temp->next != NULL){
				del = temp->next;
				temp->next = del->next;
				free(del);
				temp = temp->next;
			}
		}
	}
	else
	{
		for (i = 1; i < (n / 2)+1; i++)
		{
			if (temp->next != NULL){
				del = temp->next;
				temp->next = del->next;
				free(del);
				temp = temp->next;
			}
		}
	}
	return head;
}