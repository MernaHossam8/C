// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
double power_num(int base, int expo);
int main() {
    double  power;
    int expo, base;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &expo);
    power = power_num(base, expo); 
    
    printf("%d ^ %d = %lf", base, expo, power);
    
    return 0;
}
double power_num(int base, int expo)
{
    double result;
  if(expo == 0) 
    result= 1;
  else if (expo > 0) 
    result=( (double)base*power_num( base, expo-1));
  else if (expo < 0) 
     result=1.0/((double)power_num( base, -expo));
    else
    result=0;
    return result;
}