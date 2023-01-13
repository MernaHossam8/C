#include <stdio.h>
#include <math.h>
int main() {
   int num,first,last,digit,swap,n;
   printf("Enter any number: ");
    scanf("%d", &num);
    n=num;
    last=num % 10;
    digit=log10(num);
    first=num/(pow(10,digit));
    swap=last*pow(10,digit);
    swap=swap+(num%(int)pow(10,digit));
    swap=swap-last;
    swap=swap+first;
    printf("swap number = %d",swap);

    }