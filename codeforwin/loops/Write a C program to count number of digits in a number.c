#include <stdio.h>

int main() {
   int i,num,c=1;
    printf("Enter num: ");
    scanf("%d", &num);
    printf("num of digit :\t \n");
    while(num>=10)
    {
     num/=10;
     c++;
    }
    printf("%d",c);
    
}