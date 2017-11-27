#include "header.h"

LINK createNode(int n)
{
	LINK cur = (LINK)malloc(sizeof(NODE));
	cur->n = n;
	cur->next = NULL;

	return cur;
}
