#include <stdio.h>

int main()
{
	int j;
	int a;
	printf("������ �Է��ϰŶ� :");
	scanf_s("%d", &j);
	if (100 < j || 0 > j)
		printf("�߸��Է��߾�.");
	a = j / 10;

	switch (a) {
	case 10 :
	case 9 :
		printf("A�����Դϴ�.");
		break;
	case 8 :
		printf("B�����Դϴ�.");
		break;
	case 7 :
		printf("C�����Դϴ�.");
		break;
	case 6 :
		printf("D�����Դϴ�.");
		break;
	case 5 :
		printf("F�����Դϴ�.");
		break;


	}
}