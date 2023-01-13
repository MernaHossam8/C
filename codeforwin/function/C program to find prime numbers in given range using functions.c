// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
void prime_num(int lower_limit1,int upper_limit1);
int prime_numm(int num);
int main() {
    int lower_limit,upper_limit;
    printf("\n enter lower limit,upper limit:\t");
    scanf("%d",&lower_limit);
    scanf("%d",&upper_limit);
    printf("\nPrime numbers between %d-%d are:",lower_limit,upper_limit);
    prime_num(lower_limit,upper_limit);
    
    return 0;
}
void prime_num(int lower_limit1,int upper_limit1)
{
    int i=1,f=0;
    while(lower_limit1 <= upper_limit1)
    {
        if(prime_numm(lower_limit1))
        {
            printf("%d, ", lower_limit1);
        }
        
        lower_limit1++;
    }
    
}
int prime_numm(int num)
{
    int i,f=0;
    for(i=2; i<=num/2; i++)  
    {
        if(num%i == 0)  
        {
            f=0;
        }  
        else
        {
            f=1;
        }
    } 
    return f;
    
}


