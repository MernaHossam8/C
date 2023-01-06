#include<stdio.h>

void  main (void)	
{
	int days,weeks,years;
	printf("plz Enter days:");
	scanf("%d",&days);
	years=days/365;
	weeks=(days%365)/7;
	days=days-(years*365)-(weeks*7);
	printf("\nyears= %d",years);
	printf("\nweeks= %d",weeks);
	printf("\ndays= %d",days);
}