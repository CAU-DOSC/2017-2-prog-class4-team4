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
			printf("�����޸��Ҵ翡 ������ �ֽ��ϴ�.\n");
			break;
		}
		head = append(head, cur);
		num++;
	}

	printf("�ڷ��� ���� : %d\n", num);
	printlist(head); printf("\n");
	printback(head, num); printf("\n");
	centerprint(head, num); printf("\n");
	removeodd(head, num);
}