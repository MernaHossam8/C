#include <stdio.h>

int main()
{
    int num;
    printf("Enter num: ");
    scanf("%d", &num);
     printf("Factors of %d:\n",num);

    for(int i=1; i<=num; i++)
    {
        if(num%i==0)
        {
            printf(" %d,",i);
        }
    }


    return 0;
}