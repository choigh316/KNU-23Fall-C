#include <stdio.h>

int main()
{
	int j;
	printf("������ �Է��ϰŶ� :");
	scanf_s("%d", &j);
	if (100 < j || 0 > j)
		printf("�߸��Է��߾�.");
	else if (j >= 90)
		printf("A������");
	else if (j >= 80)
		printf("B������");
	else if (j >= 70)
		printf("C������");
	else if (j >= 60)
		printf("D������");
	else
		printf("F������");
}