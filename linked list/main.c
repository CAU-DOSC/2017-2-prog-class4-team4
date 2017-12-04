#include"header.h"

int main()
{
	int num,cnt;
	LINK head = NULL;
	LINK cur;

	printf("정수를 입력하고 enter를 누르세요. >>\n");

	while (scanf_s("%d", &num) != EOF)
	{
		cur = createNode(num);
		head = append(head, cur);
	}

	cnt = nodeNum(head);
	printf("[총 노드의 개수는 %d]\n", cnt);
	printf("    역순 출력 : ");
	reverse(head);
	if (cnt % 2 == 0)
	{
		printf("\n\n[노드의 개수는 짝수] \n  중간값 출력 : ");
	}
	else
	{
		printf("\n\n[노드의 개수는 홀수] \n  중간값 출력 : ");
	}
	midNum(head);
	printf("  입력순 출력 : ");
	print(head);
	printf("\n[홀수번째 노드 삭제]\n");
	head = odddlt(head);
	printf("  삭제후 출력 : ");
	print(head);

	return 0;
}