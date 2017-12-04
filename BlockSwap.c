#include "header.h"

void BS(int Length, int D, char* Str)      //BlockSwap
{
	int A = 0, Z = Length - 1;             //맨처음 맨끝 좌표
	int L = D, R = Length - D;             //좌 우 길이
	while (L != R)                         //좌 우 길이가 같지않을때까지 반복
	{
		if (L < R)
		{
			Swap(A, Z, L, Str);
			Z -= L;
			R -= L;
		}
		else
		{
			Swap(A, Z, R, Str);
			A += R;
			L -= R;
		}
	}
	Swap(A, Z, R, Str);                    //좌 우 길이가 같을때 마지막으로 swap해주고 마침
}
void Swap(int a, int z, int sD, char* Str) //Str에서 a위치부터 z위치까지 sD만큼 이동
{
	char temp = NULL;
	for (int i = 0; i < sD; i++)
	{
		temp = Str[a + i];
		Str[a + i] = Str[z - sD + i + 1];
		Str[z - sD + i + 1] = temp;
	}
}