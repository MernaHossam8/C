#include<stdio.h>

void  main (void)	
{
	int principle,time;
	float rate,simple_interest;
	printf("plz Enter principle,time ,rate:");
	scanf("%d%d%f",&principle,&time,&rate);
	simple_interest= (principle*time*rate)/100;
	printf("\nsimple_interest=%f",simple_interest);
}