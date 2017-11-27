#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct linked_list{
	int value;
	struct linked_list *next;
}NODE;
typedef NODE* LINK;

LINK createNode(int *value);
LINK append(LINK head, LINK cur);
int nodeNum(LINK head);
void reverse(LINK head)
void midNum(LINK head);
void print(LINK head);
LINK odddlt(LINK head);
