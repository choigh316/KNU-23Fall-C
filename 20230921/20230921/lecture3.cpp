#include<stdio.h>

int hamsu(int num)
{
	if (num == 0) return 1;

	return num * hamsu(num - 1);
}

int main(void)
{
	int num;

	printf("����� ���丮�� ���� �Է��ϰŶ� :");
	scanf_s("%d", &num);

	printf("%d! = %d", num, hamsu(num));

	return 0;
}