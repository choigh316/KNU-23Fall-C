#include <stdio.h>

int main()
{
	int a = 0, b=0;
	while (a < 5) {
		if (b != 0)
			b = 0;
		while (b < a*2) {
			printf(" ");
			b++;
		}
			
	
		if (a % 2 == 0)
			printf("|O|\n");
		else
			printf("|X|\n");
		printf("-------------\n");
		a++;
	}

		

}