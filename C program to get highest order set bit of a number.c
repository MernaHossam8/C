// Online C compiler to run C program online
#include <stdio.h>

#define BITS (8 * sizeof(int))

int main() 
{
    int number,order;
    printf("enter num:\t");
    scanf("%d",&number);
    for(int i=0;i<BITS-1;i++)
    {
        if((number>>i)&1)
        {
            order=i;
        }
    }
    printf("\nHighest order set bit in %d is %d.",number,order);

}