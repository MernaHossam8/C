#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter any two numbers: ");
    scanf("%d%d", &num1, &num2);
    printf("Num1 before swapping = %d\n", num1);
    printf("Num2 before swapping = %d\n", num2);
    num1 ^= num2;
    num2 ^= num1;
    num1 ^= num2;
    printf("Num1 after swapping = %d\n", num1);
    printf("Num2 after swapping = %d\n", num2);

    return 0;
}