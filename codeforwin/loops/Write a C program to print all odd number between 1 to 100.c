#include <stdio.h>

int main() {
   int i=0, num=100;
    printf("even numbers from 1 to 100 :\t \n");
    while(i<=100)
    {
        ((i&1)==1)?printf("\n%d is odd num",i):printf("\n%d is even num",i);
        i++;
        
    }
}