// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
void armstrong_num(int lower_limit1,int upper_limit1);
int armstrong_numm(int num);
int main() {
    int lower_limit,upper_limit;
    printf("\n enter lower limit,upper limit:\t");
    scanf("%d",&lower_limit);
    scanf("%d",&upper_limit);
    printf("\narmstrong_num between %d-%d are:",lower_limit,upper_limit);
    armstrong_num(lower_limit,upper_limit);
    
    return 0;
}
void armstrong_num(int lower_limit1,int upper_limit1)
{
    while(lower_limit1 <= upper_limit1)
    {
        if(armstrong_numm(lower_limit1))
        {
            printf("%d, ", lower_limit1);
        }
        
        lower_limit1++;
    }
    
}
int armstrong_numm(int num)
{
    int digit,last,first,num1,sum;
    num1=num,sum=0;
    digit= (int) log10(num) + 1;
    while(num>0)
    {
        last=num%10;
        sum+=(int)pow(last,digit);
        num/=10;
    }
    return (num==sum);
      
}


