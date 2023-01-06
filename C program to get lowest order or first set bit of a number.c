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
        if((1<<i)|number)
        {
            order=i;
            break;
        }
    }
    printf("\nHighest order set bit in %d is %d.",number,order+1);

}

/* another correct answer
#include <stdio.h>

#define BITS (8 * sizeof(int))

int main() 
{
    int number,order;
    printf("enter num:\t");
    scanf("%d",&number);
    
    for(int i=0;i<BITS-1;i++)
    {
        if((1<<i)|number)
        {
            order=i;
			
        }
    }
    printf("\nHighest order set bit in %d is %d.",number,BITS-order-1);

}*/