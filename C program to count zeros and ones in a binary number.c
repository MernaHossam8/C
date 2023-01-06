// Online C compiler to run C program online
#include <stdio.h>

#define BITS (8 * sizeof(int))

int main() 
{
    int number,n_zeros=0,n_ones=0;
    printf("enter num:\t");
    scanf("%d",&number);
    for(int i=0;i<BITS;i++)
    {
        if((number>>i)&1)
        {
            n_ones++;
        }
        else
        {
            n_zeros++;
        }
    }
    printf("Total zero bit is %d\n", n_zeros);
    printf("Total one bit is %d", n_ones);

}