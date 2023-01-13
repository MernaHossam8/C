#include <stdio.h>

int main() {
   int num,first,last,mul=1;
   printf("Enter any number: ");
   scanf("%d", &num);
    while(num!=0)
    {
        mul*=num%10;
        num/=10;
    }
    printf("mul=%d",mul);
}