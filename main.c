#include "header.h"
void* jug(int d, int num, int vector, int gcd);
int gcd(int num, int d);
int main()
{
	int *vector,*rotate;
	int length;
	int rot;
	int G = 0;
	printf("vector 의 길이를 입력하세요");
	scanf("%d", &length);
	printf("몇번 rotate?");
	scanf("%d", &rot);
	G = gcd(length,rot);
	vector = (int *)malloc(sizeof(int)*length);
	rotate = (int *)malloc(sizeof(int)*length);
	for (int i = 0; i < length; i++)
	{
		scanf("%d", &vector[i]);
		rotate[i] = vector[i];
	}
	jug(rot, length, rotate, G);
	return 0;
}