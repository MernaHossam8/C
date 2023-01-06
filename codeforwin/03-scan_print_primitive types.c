#include<stdio.h>
void  main (void)	
{
/*declare all primitive datatype*/
	char char_value;
	unsigned char uchar_value;
	
	short short_value;
	unsigned short ushort_value;
	
	int int_value;
	unsigned int uint_value;
	
	long  long_value;
	unsigned long ulong_value;
	
	long long  longlong_value;
	unsigned long long ulonglong_value;
	
	float float_value;
	double double_value;
	long double longdouble_value;
	
	
	/*scan input*/
	printf("Enter a character num: ");
	char_value=getchar();
	getchar();
	printf("\nEnter a unsigned character num: ");
	uchar_value=getchar();
	getchar();
	printf("\nEnter a short integer num: ");
	scanf("%hi",&short_value);
	printf("\nEnter an unsigned short integer num: ");
	scanf("%hu",&ushort_value);
	
	printf("\nEnter an  integer num: ");
	scanf("%d",&int_value);
	printf("\nEnter an unsigned integer num: ");
	scanf("%lu",&uint_value);
	
	printf("\nEnter a long  integer num: ");
	scanf("%li",&long_value);
	printf("\nEnter an unsigned  long integer num: ");
	scanf("%lu",&ulong_value);
	
	printf("\nEnter a long long integer num: ");
	scanf("%lli",&longlong_value);
	printf("\nEnter an unsigned long long integer num: ");
	scanf("%llu",&ulonglong_value);
	
	printf("\nEnter a float num: ");
	scanf("%f",&float_value);
	printf("\nEnter a double num: ");
	scanf("%lf",&double_value);
	printf("\nEnter a long  double num: ");
	scanf("%Lf",&longdouble_value);
	
	/*print output*/
	printf("\ncharacter num: '%c'",char_value);
	printf("\nunsigned character num: '%c'",uchar_value);

	printf("\nshort integer num: %hi",short_value);
	printf("\nunsigned short integer num: %hu",ushort_value);
	printf("\ninteger num: %d",int_value);
	printf("\nunsigned integer num: %lu",uint_value);
	printf("\nlong  integer num: %li",long_value);
	printf("\nunsigned  long integer num: %lu",ulong_value);
	printf("\nlong long integer num: %lli",longlong_value);
	printf("\nunsigned long long integer num: %llu",ulonglong_value);
	printf("\nfloat num: %f",float_value);
	printf("\ndouble num: %lf",double_value);
	printf("\nlong  double num: %Lf",longdouble_value);
}
	
	
	