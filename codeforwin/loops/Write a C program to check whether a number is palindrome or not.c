#include <stdio.h>

int main() {
   int num,reverse,n;
   printf("Enter any number: ");
   scanf("%d", &num);
   n=num;
    while(num!=0)
    {
        reverse=(reverse*10)+(num%10);
        num/=10;
    }
    if(reverse==n)
    {
        printf("%d = %d,palindrome num",reverse,n);
    }
    else
    {
         printf("%d!= %d,not palindrome num",reverse,n);

    }
}