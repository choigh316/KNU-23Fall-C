#include <stdio.h>

int sum(int num1, int num2)
{
    return num1 + num2;
}

int sub(int num1, int num2)
{
    return num1 - num2;
}

int mul(int num1, int num2)
{
    return num1 * num2;
}

int div(int num1, int num2)
{
    if (num2 == 0)
    {
        printf("주의! 0으로 나누면 큰일납니다.");
        return 0;
    }
    return num1 / num2;
}

void calculator(int selector, int num1, int num2)
{
    int result;
    if (selector < 1 || selector > 4)
    {
        printf("오류!");
        return;
    }

    if (selector == 1)
        result = sum(num1, num2);
    else if (selector == 2)
        result = sub(num1, num2);
    else if (selector == 3)
        result = mul(num1, num2);
    else if (selector == 4)
        result = div(num1, num2);

    printf("결과: %d\n", result);
}

int main(void)
{
    int selector, num1, num2;

    printf("1을 입력하면 더하기 \n2를 입력하면 빼기 \n3을 입력하면 곱하기 \n4를 입력하면 나누기 \n원하는 번호를 입력해: ");
    scanf_s("%d", &selector);
    printf("값 두 개를 입력해: ");
    scanf_s("%d %d", &num1, &num2);

    calculator(selector, num1, num2);

    return 0;
}