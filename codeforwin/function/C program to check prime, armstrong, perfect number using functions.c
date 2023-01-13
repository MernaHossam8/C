// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
int prime_num(int num);
int armstrong_num(int num);
int perfect_num(int num);

int main() {
    int val;
    printf("\n enter num:\t");
    scanf("%d",&val);
    perfect_num(val);
    if(prime_num(val))
    {
        printf("%d is Prime number.\n", val);
    }
    else
    {
        printf("%d is not Prime number.\n", val);
    }
    
    if(armstrong_num(val))
    {
        printf("%d is Armstrong number.\n", val);
    }
    else
    {
        printf("%d is not Armstrong number.\n", val);
    }
    if(perfect_num(val))
    {
        printf("%d is Perfect number.\n", val);
    }
    else
    {
        printf("%d is not Perfect number.\n", val);
    }
    return 0;
}
int prime_num(int num)
{
    int i,f=0;
    for(i=1; i<=num; i++)  
    {
        if(num%i == 0)  
        {
            f=1;
        }  
        else
        {
            f=0;
        }
    } 
    return f;
    
}
int perfect_num(int num)
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
int armstrong_num(int num)
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

