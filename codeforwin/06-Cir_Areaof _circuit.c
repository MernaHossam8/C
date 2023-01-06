#include<stdio.h>

void  main (void)	
{
	int radius;
	float  pi=3.14;
	printf("plz enter radius :");
	scanf("%d",&radius);
	printf("\nDiameter= %d units",2*radius);
	printf("\nCircumference= %f square units",2*pi*radius);
	printf("\nArea= %f square units",pi*radius*radius);

}