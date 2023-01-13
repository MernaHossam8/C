#include <stdio.h>

int main()
{
    int num;
    long long int fact=1;
    printf("Enter num: ");
    scanf("%d", &num);
     printf("Factorialof  %d:\n",num);

    for(int i=1; i<=num; i++)
    {
        fact*=i;
    }
    printf("%lld", fact);

    return 0;
}