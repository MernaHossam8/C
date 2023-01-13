#include <stdio.h>

int main() {
   int i,sum=0,num;
    printf("Enter num: ");
    scanf("%d", &num);
    printf("odd numbers from 1 to 100 :\t \n");
     for(i=1; i<=num; i+=2)
     {
        sum+=i;
        
    }
    printf("sum\t");
    printf("%d", sum);
}