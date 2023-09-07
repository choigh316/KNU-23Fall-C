#include <stdio.h>

int main()
{
	int N;
	printf("몇 층 피라미드를 원해?\n대답.\n");
	scanf_s("%d", &N);
	for (int i = 1; i <= N; i++)
	{
		for (int j = i; j <= N - 1; j++)
		{
			printf(" ");
		}
		for (int k = 1; k <= 2 * i - 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}