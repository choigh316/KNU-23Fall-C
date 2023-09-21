#include<stdio.h>


int hamsu(int num)
{
    for (int div = num - 1; div > 1; div--)
    {
        if (num % div == 0) {
            printf("소수가 아니다.");
            return 0;
        }
    }
    printf("소수다.");
    return 1;
}


int main()
{
    int num;


    printf("숫자를 입력하세요 : ");
    scanf_s("%d", &num);

    printf("%d", hamsu(num));
}