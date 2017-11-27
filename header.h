#include <stdio.h>
#include <stdlib.h>

#define _CRT_SECURE_NO_WARNINGS

struct linked_list
{
	int n;
	struct linked_list *next;
};
typedef struct linked_list NODE;
typedef NODE *LINK;

LINK createNode(int value);
LINK append(LINK head, LINK cur);
LINK removeodd(LINK head, int cnt);
int printlist(LINK head);
int printback(LINK head, int cnt);
int centerprint(LINK head, int cnt);