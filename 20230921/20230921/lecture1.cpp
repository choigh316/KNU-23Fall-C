#include<stdio.h>


int hamsu(int num)
{
    for (int div = num - 1; div > 1; div--)
    {
        if (num % div == 0) {
            printf("�Ҽ��� �ƴϴ�.");
            return 0;
        }
    }
    printf("�Ҽ���.");
    return 1;
}


int main()
{
    int num;


    printf("���ڸ� �Է��ϼ��� : ");
    scanf_s("%d", &num);

    printf("%d", hamsu(num));
}