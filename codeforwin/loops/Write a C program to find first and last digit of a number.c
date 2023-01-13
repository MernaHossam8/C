#include <stdio.h>

int main() {
   int num,first,last,num_f;
   printf("Enter any number: ");
    scanf("%d", &num);
    
    last=num % 10;
    first=num;
    while(first>=10)
    {
     first=first/10;
    }
    printf("first=%d",first);
    printf("\nlast=%d",last);
}
/*#include <stdio.h>
#include <math.h>
int main() {
   int num,first,last,digit;
   printf("Enter any number: ");
    scanf("%d", &num);
    
    last=num % 10;
    digit=log10(num);
    first=num;
    
     first=num/(pow(10,digit));
    printf("first=%d",first);
    printf("\nlast=%d",last);
}*/