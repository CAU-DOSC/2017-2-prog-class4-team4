#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct linked_list{
	int value;
	struct linked_list *next;
}NODE;
typedef NODE* LINK;
