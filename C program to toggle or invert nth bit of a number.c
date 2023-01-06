// Online C compiler to run C program online
#include <stdio.h>
int main() 
{
    int number,n_bits,n_number;
    printf("enter num:\t");
    scanf("%d",&number);
    printf("\nenter nth bit number:\t");
    scanf("%d",&n_bits);
    n_number=((1<<n_bits)^number);
    printf("\nNumber before setting %d bit: %d (in decimal)\n",n_bits,number);
    printf("\nNumber after  setting %d bit: %d (in decimal)\n",n_bits,n_number);

}