#include <stdio.h>

int main()
{
	int a = 2, b = 1;
	while (a < 10)
	{
		if (b == 10)
			b = 1;
		if (a == 5) {
			a++;
			continue;
		}
		while (b < 10)
		{

			printf("%d * %d = %d\n", a, b, a * b);
			b++;
		}
		a++;

	}

}