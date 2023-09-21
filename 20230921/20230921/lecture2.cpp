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
        printf("����! 0���� ������ ū�ϳ��ϴ�.");
        return 0;
    }
    return num1 / num2;
}

void calculator(int selector, int num1, int num2)
{
    int result;
    if (selector < 1 || selector > 4)
    {
        printf("����!");
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

    printf("���: %d\n", result);
}

int main(void)
{
    int selector, num1, num2;

    printf("1�� �Է��ϸ� ���ϱ� \n2�� �Է��ϸ� ���� \n3�� �Է��ϸ� ���ϱ� \n4�� �Է��ϸ� ������ \n���ϴ� ��ȣ�� �Է���: ");
    scanf_s("%d", &selector);
    printf("�� �� ���� �Է���: ");
    scanf_s("%d %d", &num1, &num2);

    calculator(selector, num1, num2);

    return 0;
}