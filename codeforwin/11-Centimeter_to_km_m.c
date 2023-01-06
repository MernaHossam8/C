#include<stdio.h>

void  main (void)	
{
	long centimeter;
	float kilometer,meter;
	printf("plz Enter length in centimeter :");
	scanf("%d",&centimeter);
	meter=centimeter/100.0;
	kilometer=centimeter/100000.0;
	printf("\nLength in meter = %f m",meter);
	printf("\nLength in kilometer = %f km",kilometer);

}