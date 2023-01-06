#include<stdio.h>
#include<math.h>

void  main (void)	
{
	int principle,time;
	float rate,simple_interest;
	printf("plz Enter principle,time ,rate:");
	scanf("%d%d%f",&principle,&time,&rate);
	simple_interest= principle*(pow((1+(rate/100)),time));
	printf("\nsimple_interest=%f",simple_interest);
}