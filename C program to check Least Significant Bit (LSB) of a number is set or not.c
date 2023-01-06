#include <stdio.h>

int main() 
{
    int number;
    printf("enter num:\t");
    scanf("%d",&number);
    if(number&1)
    {
        printf("\nLeast Significant Bit of %d is set (1).",number);
    }
    else
    {
        printf("\nLeast Significant Bit of %d is notset (0).",number);
    }
}