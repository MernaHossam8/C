// Online C compiler to run C program online
#include <stdio.h>
#define PI 3.14
void cal_circle(int r);
int main() {
    int val;
    printf("\n enter r:\t");
    scanf("%d",&val);
    cal_circle(val);

    return 0;
}
void cal_circle(int r)
{
    printf("\ndiameter=\t%d",2*r);
     printf("\ncircumference=\t%f",2*PI*r);
    printf("\nArea=\t%f",r*r*PI);

}
