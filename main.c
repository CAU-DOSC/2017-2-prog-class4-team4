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
			printf("�����޸��Ҵ翡 ������ �ֽ��ϴ�.\n");
			break;
		}
		head = append(head, cur);
		num++;
	}

	printf("�ڷ��� ���� : %d\n", num);
	printlist(head); 
	printf("\n");
	printback(head, num); 
	printf("\n");
	centerprint(head, num); 
	printf("\n");
	removeodd(head, num);
}