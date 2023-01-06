// Online C compiler to run C program online
#include <stdio.h>
#define BITS (8 * sizeof(int))
int main() 
{
    int number,msb;
    printf("enter num:\t");
    scanf("%d",&number);
    msb=1<<(BITS - 1);
    if(number&msb)
    {
        printf("\nMost Significant Bit (MSB) of %d is set (1).",number);
    }
    else
    {
        printf("\nMost Significant Bit (MSB) of %d is notset (0).",number);
    }
}