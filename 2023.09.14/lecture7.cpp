#include <stdio.h>

int main()
{
	int j;
	printf("점수를 입력하거라 :");
	scanf_s("%d", &j);
	if (100 < j || 0 > j)
		printf("잘못입력했어.");
	else if (j >= 90)
		printf("A학점임");
	else if (j >= 80)
		printf("B학점임");
	else if (j >= 70)
		printf("C학점임");
	else if (j >= 60)
		printf("D학점임");
	else
		printf("F학점임");
}