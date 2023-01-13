#include <stdio.h>
#include <math.h>
int main() {
   int num,first,last,digit,sum=0;
   printf("Enter any number: ");
    scanf("%d", &num);
    
    last=num % 10;
    digit=log10(num);
    first=num;
    first=num/(pow(10,digit));
    sum=first+last;
    printf("sum=%d",sum);
}