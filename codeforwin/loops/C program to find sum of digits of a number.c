#include <stdio.h>

int main() {
   int num,first,last,sum=0;
   printf("Enter any number: ");
   scanf("%d", &num);
    while(num!=0)
    {
        sum+=num%10;
        num/=10;
    }
    printf("sum=%d",sum);
}