#include "header.h"

int main()
{
	char *vector,*rotate;
	int length;
	int rot;
	int G = 0;
	time_t start = 0, end = 0;
	float t.trivial = 0, t.juggling = 0, t.blockswap = 0, t.reverse = 0;

	printf("vector �� ���̸� �Է��ϼ���");
	scanf("%d", &length);
	printf("��� rotate?");
	scanf("%d", &rot);
	G = gcd(length,rot);

	vector = (char *)malloc(sizeof(char)*length);
	rotate = (char *)malloc(sizeof(char)*length);

	for (int i = 0; i < length; i++)
	{
		scanf("%s", &vector[i]);
		rotate[i] = vector[i];
	}
	start = clock();
	jug(rot, length, rotate, G);
	end = clock();
	t.juggling = (float)(end - start);

	strcpy(rotate, vector);
	start = clock();
	BS(length,rot,rotate);
	end = clock();
	t.blockswap = (float)(end - start);

	printf("\n[�ð� ����]\nTrivial : %f��\nJuggling : %f��\nBlock-Swap : %f��\nReverse : %f��", t.trivial, t.juggling, t.blockswap, t.reverse);
	return 0;
}