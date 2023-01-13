// Online C compiler to run C program online
#include <stdio.h>
void even_odd_num(int num);
int main() {
    int val;
    printf("\n enter num:\t");
    scanf("%d",&val);
    even_odd_num(val);

    return 0;
}
void even_odd_num(int num)
{
    (num&1!=0)?printf("%d is odd num",num):printf("%d is even num",num);

}
