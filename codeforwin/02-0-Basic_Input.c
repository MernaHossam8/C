#include<stdio.h>
void  main (void)	
{
	char result;
	unsigned short u;
	/*printf("Enter your result: ");
	result=getchar();
	putchar(result);*/
	printf("Enter character: ");
	scanf("%c",&result);
	printf("Enter your unsigned short: ");
	scanf("%hu",&u);
	printf("\n unsigned short: %hu\n character %c",u,result);
	
}