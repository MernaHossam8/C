
#include <stdio.h>

int main() {
   int i=1, num,sum=0;
    printf("Enter num:\t ");
    scanf("%d", &num);

    printf("Natural numbers from 1 to %d :\t \n", num);
    while(i<=num)
    {
        printf("%d,\t", i);
        i++;
            sum+=i;

    }
        printf("sum=");
printf("%d\t", sum);

}