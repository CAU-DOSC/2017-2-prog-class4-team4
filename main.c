#include"header.h"

int main()
{
	int num,cnt;
	LINK head = NULL;
	LINK cur;

	printf("������ �Է��ϰ� enter�� ��������. >>\n");

	while (scanf_s("%d", &num) != EOF)
	{
		cur = createNode(num);
		head = append(head, cur);
	}

	cnt = nodeNum(head);
	printf("[�� ����� ������ %d]\n", cnt);
	printf("    ���� ��� : ");
	reverse(head);
	if (cnt % 2 == 0)
	{
		printf("\n\n[����� ������ ¦��] \n  �߰��� ��� : ");
	}
	else
	{
		printf("\n\n[����� ������ Ȧ��] \n  �߰��� ��� : ");
	}
	midNum(head);
	printf("  �Է¼� ��� : ");
	print(head);
	printf("\n[Ȧ����° ��� ����]\n");
	head = odddlt(head);
	printf("  ������ ��� : ");
	print(head);

	return 0;
}