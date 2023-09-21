#include<stdio.h>

int hamsu(int num)
{
	if (num == 0) return 1;

	return num * hamsu(num - 1);
}

int main(void)
{
	int num;

	printf("계산할 팩토리얼 값을 입력하거라 :");
	scanf_s("%d", &num);

	printf("%d! = %d", num, hamsu(num));

	return 0;
}