#include <stdio.h>

int main()
{
	int i, k;

	for (i = 2; i < 10; i++) {
		if (i == 5)
			continue;

		for (k = 1; k < 10; k++) {
			printf("%d * %d = %d\n", i, k, i * k);

		}

	}


}