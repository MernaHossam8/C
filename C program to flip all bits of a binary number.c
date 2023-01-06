// Online C compiler to run C program online
#include <stdio.h>


int main() 
{
    int number,order,f_number;
    printf("enter num:\t");
    scanf("%d",&number);
    f_number=~number;
    printf("\nOriginal number =  %d (in decimal).",number);
    printf("\nNumber after bits are flipped = %d (in decimal)",f_number);

}