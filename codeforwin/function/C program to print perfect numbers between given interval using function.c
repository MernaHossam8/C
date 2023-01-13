// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
void perfect_num(int lower_limit1,int upper_limit1);
int perfect_numm(int num);
int main() {
    int lower_limit,upper_limit;
    printf("\n enter lower limit,upper limit:\t");
    scanf("%d",&lower_limit);
    scanf("%d",&upper_limit);
    printf("\nPerfect numbers between %d-%d are:",lower_limit,upper_limit);
    perfect_num(lower_limit,upper_limit);
    
    return 0;
}
void perfect_num(int lower_limit1,int upper_limit1)
{
    int i=1,f=0;
    while(lower_limit1 <= upper_limit1)
    {
        if(perfect_numm(lower_limit1))
        {
            printf("%d, ", lower_limit1);
        }
        
        lower_limit1++;
    }
    
}
int perfect_numm(int num)
{
    int i,sum=0,num1=num;
    
    for(i=1; i<=num1; i++)  
    {
        if(num1%i == 0)  
        {
          sum+=i;
        }
    } 
    return (sum==num);
}


