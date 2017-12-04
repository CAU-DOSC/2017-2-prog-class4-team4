#include "header.h"

void *trivial(char *str, int n, int d);
void* jug(int d, int num, char *vector, int gcd);
void Rev(int Length, int D, char* Str);
void BS(int Length, int D, char* Str);
int gcd(int num, int d);

int main()
{
	clock_t start1, end1, start2, end2, start3, end3, start4, end4;
	char *vector, *rotate;
	int length, rot, G = 0;
	printf("Enter the String distance and Rotate distance : ");
	scanf("%d %d", &length, &rot);
	G = gcd(length, rot);
	vector = (char *)malloc(sizeof(char)*(length * 2));
	rotate = (char *)malloc(sizeof(char)*(length * 2));
	printf("Enter the String : ");
	scanf("%s", vector);
	for (int i = 0; i < length; i++)
	{
		// scanf("%c", &vector[i]); //
		rotate[i] = vector[i];
	}
	start1 = clock();
	printf("Trivial Solution : ");
	trivial(vector, length, rot);
	end1 = clock();
	
	start2 = clock();
	printf("Reverse : ");
	Rev(length, rot, vector);
	end2 = clock();

	start3 = clock();
	printf("Jugging : ");
	jug(rot, length, rotate, G);
	end3 = clock();

	start4 = clock();
	printf("Block - Swap : ");
	BS(length, rot, vector);
	end4 = clock();

	printf("Trivial Solution Running Time : %fms", (double)(end1 - start1));
	printf("\nReverse함수 Running Time : %fms", (double)(end2 - start2));
	printf("\nJugging함수 Running Time : %fms\n", (double)(end3 - start3));
	printf("Block - Swap Running Time : %fms", (double)(end4 - start4)); 
	return 0;
}
