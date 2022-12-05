#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("enter num a:\t");
    scanf("%d",&a);
    printf("\nenter num b:\t");
    scanf("%d",&b);
    printf("\n\n%d + %d = %d\n",a,b,a+b);
    printf("%d - %d = %d\n",a,b,a-b);
    printf("%d & %d = %d\n",a,b,a&b);
    printf("%d | %d = %d\n",a,b,a|b);
    printf("%d ^ %d = %d\n",a,b,a^b);
    return 0;
}
