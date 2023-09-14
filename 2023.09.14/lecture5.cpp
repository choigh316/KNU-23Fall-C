#include <stdio.h>

int main()
{
	int y;
	printf("입력해 :");
	scanf_s("%d", &y);

	if (y % 400 == 0)
	{

		printf("윤년이여");

	}
	else if (y % 4 == 0)
	{
		if (y % 100 == 0)
			printf("아닌디");
		else
			printf("윤년이여");
	}
	else
		printf("아니여");

}