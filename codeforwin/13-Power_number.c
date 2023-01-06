#include<stdio.h>
#include<math.h>

void  main (void)	
{
	int base,expo,power;
	printf("plz Enter base&expo:");
	scanf("%d%d",&base,&expo);
	power=pow(base,expo);
	printf("\npower= %d^%d=%d",base,expo,power);
}