// Online C compiler to run C program online
#include <stdio.h>

#define BITS (8 * sizeof(int))

int main() 
{
    int number,order,msb;
    printf("enter num:\t");
    scanf("%d",&number);
    msb = 1 << (BITS - 1);
    for(int i=0;i<BITS;i++)
    {
        if((number<<i)&msb)
        {
            order=i;
            break;
        }
    }
    printf("\nHighest order set bit in %d is %d.",number,order);

}