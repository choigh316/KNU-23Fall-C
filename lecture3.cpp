#include<stdio.h>

int main()
{
	int score[5] = { 87, 92, 94, 65, 33 };
	int cnt;

	int* p_score = score;

	for (cnt = 1; cnt < 4; cnt++) {
		printf("%d\n", score[cnt]);

	}
	return 0;
}