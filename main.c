#include "linkedlist.h"

LINK createNode(int value);
LINK append(LINK head, LINK cur);
int printlist(LINK head);
int printback(LINK head, int cnt);
int centerprint(LINK head, int cnt);
LINK removeodd(LINK head, int cnt);


int main()
{
	int value = 0, num = 0;

	LINK head = NULL;
	LINK cur;
	while (scanf_s("%d", &value) != EOF)
	{
		cur = createNode(value);
		if (cur == NULL)
		{
			printf("동적메모리할당에 문제가 있습니다.\n");
			break;
		}
		head = append(head, cur);
		num++;
	}

	printf("자료의 갯수 : %d\n", num);
	printlist(head); printf("\n");
	printback(head, num); printf("\n");
	centerprint(head, num); printf("\n");
	removeodd(head, num);
}