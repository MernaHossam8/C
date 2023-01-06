// Online C compiler to run C program online
#include <stdio.h>
int main() 
{
    int number,n_bits,countbits;
    printf("enter num:\t");
    scanf("%d",&number);
    printf("\nenter nth bit number:\t");
    scanf("%d",&n_bits);
    countbits=(number>>n_bits);
    if(countbits&1)
    {
        printf("\n%d bit of %d is set (1).",n_bits,number);
    }
    else
    {
        printf("\n%d bit of %d is notset (0).",n_bits,number);
    }
}