#include"header.h"

int main()
{
	int num;
	LINK head = NULL;
	LINK cur;

	printf("정수를 입력하고 enter를 누르세요. >>\n");

	while (scanf_s("%d", &num) != EOF)
	{
		cur = createNode(num);
		head = append(head, cur);
	}

	printf("총 노드의 개수는%d입니다\n", nodeNum(head));
	reverse(head);
	midNum(head);
	printf("입력순 출력\n");
	print(head);
	head = odddlt(head);
	printf("삭제후 출력\n");
	print(head);

	return 0;
}