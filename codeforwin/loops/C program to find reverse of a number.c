#include <stdio.h>

int main() {
   int num,reverse;
   printf("Enter any number: ");
   scanf("%d", &num);
    while(num!=0)
    {
        reverse=(reverse*10)+(num%10);
        num/=10;
    }
    printf("reverse=%d",reverse);
}