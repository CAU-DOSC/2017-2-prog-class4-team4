#include "header.h"
void* jug(int d, int num, char *vector, int gcd);
int gcd(int num, int d);
int main()
{
	char *vector,*rotate;
	int length;
	int rot;
	int G = 0;
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
	jug(rot, length, rotate, G);
	return 0;
}