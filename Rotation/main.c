#include "header.h"

int main()
{
	clock_t start1, end1, start2, end2, start3, end3, start4, end4;
	char *vector, *rotate;
	int length, rot, G = 0;
	printf("Enter the String distance and Rotate distance : ");
	scanf("%d %d", &length, &rot);
	if (rot < 0)
		rot = length + rot;
	G = gcd(length, rot);
	vector = (char *)malloc(sizeof(char)*(length * 2));
	rotate = (char *)malloc(sizeof(char)*(length * 2));
	printf("Enter the String : ");
	scanf("%s", vector);
	
	strcpy(rotate, vector);
	start1 = clock();
	printf("Trivial Solution : ");
	trivial(rotate, length, rot);
	end1 = clock();
	puts(rotate);
	
	strcpy(rotate, vector);
	start2 = clock();
	printf("Reverse : ");
	Rev(length, rot, rotate);
	end2 = clock();
	puts(rotate);

	strcpy(rotate, vector);
	start3 = clock();
	printf("Jugging : ");
	jug(rot, length, rotate, G);
	end3 = clock();
	puts(rotate);

	strcpy(rotate, vector);
	start4 = clock();
	printf("Block - Swap : ");
	BS(length, rot, rotate);
	end4 = clock();
	puts(rotate);

	printf("Trivial Solution Running Time : %fms", (double)(end1 - start1));
	printf("\nReverse함수 Running Time : %fms", (double)(end2 - start2));
	printf("\nJugging함수 Running Time : %fms\n", (double)(end3 - start3));
	printf("Block - Swap Running Time : %fms", (double)(end4 - start4)); 
	return 0;

}
