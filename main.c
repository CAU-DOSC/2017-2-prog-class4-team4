#include"header.h"

int main()
{
	int num;
	LINK head = NULL;
	LINK cur;

	printf("������ �Է��ϰ� enter�� ��������. >>\n");

	while (scanf_s("%d", &num) != EOF)
	{
		cur = createNode(num);
		head = append(head, cur);
	}

	printf("�� ����� ������%d�Դϴ�\n", nodeNum(head));
	reverse(head);
	midNum(head);
	printf("�Է¼� ���\n");
	print(head);
	head = odddlt(head);
	printf("������ ���\n");
	print(head);

	return 0;
}