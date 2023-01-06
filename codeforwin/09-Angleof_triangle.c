#include<stdio.h>

void  main (void)	
{
	int firstangle,secondangle;
	printf("plz enter firstangle & secondangle :");
	scanf("%d%d",&firstangle,&secondangle);
	printf("\nThird angle= %d ",180-(firstangle+secondangle));
}