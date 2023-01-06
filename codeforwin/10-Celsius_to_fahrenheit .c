#include<stdio.h>

void  main (void)	
{
	int Celsius;
	float Fahrenheit;
	printf("plz Enter temperature in Celsius :");
	scanf("%d",&Celsius);
	Fahrenheit = (Celsius * 9 / 5) + 32;
	printf("\nTemperature in Fahrenheit =  %f F",Fahrenheit);
}