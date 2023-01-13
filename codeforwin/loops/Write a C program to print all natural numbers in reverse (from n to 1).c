/*#include <stdio.h>

int main() {
   int  num;
    printf("Enter num:\t ");
    scanf("%d", &num);

    printf("Natural numbers from 1 to %d :\t \n", num);
    for(int i=num; i>=1; i--)
    {
        printf("%d,\t", i);
    }
}*/
#include <stdio.h>

int main() {
   int i=1, num;
    printf("Enter num:\t ");
    scanf("%d", &num);

    printf("Natural numbers from %d to 1 :\t \n", num);
    while(num>=i)
    {
        printf("%d,\t", num);
        num--;
    }
}