#include<stdio.h>

void  main (void)	
{
	int zero=0;
	long int  range1_ch,range2_ch,range3_ch,range1_int,range2_int,range3_int,range1_sh,range2_sh,range3_sh;
	int bits_ch=8;
	int bits_int=32;
	int bits_sh=16;
	
	range1_ch=((1<<(bits_ch-1))-1);
	range2_ch=-(1<<(bits_ch-1));
	range3_ch=range1_ch-range2_ch;
	range1_int=((1<<(bits_int-1))-1);
	range2_int=-(1<<(bits_int-1));
	range3_int=range1_int-range2_int;
	range1_sh=((1<<(bits_sh-1))-1);
	range2_sh=-(1<<(bits_sh-1));
	range3_sh=range1_sh-range2_sh;
	
	printf("rangeof signed char =%u to %ld\n",range1_ch,range2_ch);
	printf("rangeof unsigned char =%ld to %ld\n",zero,range3_ch);
	printf("rangeof signed int =%u to %d\n",range1_int,range2_int);
	printf("rangeof unsigned int =%ld to %lu\n",zero,range3_int);
	printf("rangeof signed short =%u to %ld\n",range1_sh,range2_sh);
	printf("rangeof unsigned short =%d to %ld\n",zero,range3_sh);
}


	