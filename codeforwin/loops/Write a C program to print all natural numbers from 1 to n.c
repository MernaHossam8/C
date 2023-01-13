// Online C compiler to run C program online
/*#include <stdio.h>

int main() {
   int  num;
    printf("Enter num:\t ");
    scanf("%d", &num);

    printf("Natural numbers from 1 to %d :\t \n", num);
    for(int i=1; i<=num; i++)
    {
        printf("%d,\t", i);
    }
}*/
#include <stdio.h>

int main() {
   int i=1, num;
    printf("Enter num:\t ");
    scanf("%d", &num);

    printf("Natural numbers from 1 to %d :\t \n", num);
    while(i<=num)
    {
        printf("%d,\t", i);
        i++;
    }
}