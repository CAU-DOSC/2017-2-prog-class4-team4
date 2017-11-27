#include "header.h"

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
	printlist(head); 
	printf("\n");
	printback(head, num); 
	printf("\n");
	centerprint(head, num); 
	printf("\n");
	removeodd(head, num);
}