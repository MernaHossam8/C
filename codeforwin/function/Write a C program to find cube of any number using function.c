// Online C compiler to run C program online
#include <stdio.h>

int cubic_num(int num);
int main() {
    int val;
    printf("\n enter num:\t");
    scanf("%d",&val);
    int res=cubic_num(val);
    printf("\ncubic_num=\t%d",res);

    return 0;
}
int cubic_num(int num)
{
    return num*num*num;
}
