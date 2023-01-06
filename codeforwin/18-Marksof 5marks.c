#include<stdio.h>

void  main (void)	
{
	int mark1,mark2,mark3,mark4,mark5,total;
	float average,percentage;
	printf("plz Enter marks of five subjects:");
	scanf("%d%d%d%d%d",&mark1,&mark2,&mark3,&mark4,&mark5);
	total=mark1+mark2+mark3+mark4+mark5;
	average=total/5.0;
	percentage=average*100;
	printf("\ntotal=%d",total);
	printf("\naverage=%f",average);
	printf("\npercentage=%f",percentage);
}