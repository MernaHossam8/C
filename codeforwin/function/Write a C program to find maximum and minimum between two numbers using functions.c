// Online C compiler to run C program online
#include <stdio.h>
void max_min_num(int num1,int num2);
int main() {
    int val1,val2;
    printf("\n enter num1,num2:\t");
    scanf("%d%d",&val1,&val2);
    max_min_num(val1,val2);

    return 0;
}
void max_min_num(int num1,int num2)
{
    (num1>num2)?printf("%d is max num",num1):printf("%d is max num",num2);
    (num1>num2)?printf("\n%d is min num",num2):printf("\n%d is min num",num1);

}
