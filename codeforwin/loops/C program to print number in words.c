#include <stdio.h>

int main() {
   int num,reverse,n;
   printf("Enter any number: ");
   scanf("%d", &num);
   n=num;
    while(num!=0)
    {
        reverse=(reverse*10)+(num%10);
        num/=10;
    }
     while(reverse!=0)
    {
            switch(reverse % 10)
        {
            case 0: 
                printf("Zero ");
                break;
            case 1: 
                printf("One ");
                break;
            case 2: 
                printf("Two ");
                break;
            case 3: 
                printf("Three ");
                break;
            case 4: 
                printf("Four ");
                break;
            case 5: 
                printf("Five ");
                break;
            case 6: 
                printf("Six ");
                break;
            case 7: 
                printf("Seven ");
                break;
            case 8: 
                printf("Eight ");
                break;
            case 9: 
                printf("Nine ");
                break;
        }
        
        reverse/= 10;
    }
}