#include <stdio.h>

int main()
{
	int j;
	int a;
	printf("점수를 입력하거라 :");
	scanf_s("%d", &j);
	if (100 < j || 0 > j)
		printf("잘못입력했어.");
	a = j / 10;

	switch (a) {
	case 10 :
	case 9 :
		printf("A학점입니다.");
		break;
	case 8 :
		printf("B학점입니다.");
		break;
	case 7 :
		printf("C학점입니다.");
		break;
	case 6 :
		printf("D학점입니다.");
		break;
	case 5 :
		printf("F학점입니다.");
		break;


	}
}