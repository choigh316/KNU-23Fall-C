#include <stdio.h>

int main()
{
	int y;
	printf("�Է��� :");
	scanf_s("%d", &y);

	if (y % 400 == 0)
	{

		printf("�����̿�");

	}
	else if (y % 4 == 0)
	{
		if (y % 100 == 0)
			printf("�ƴѵ�");
		else
			printf("�����̿�");
	}
	else
		printf("�ƴϿ�");

}