/*#include <stdio.h>

int main() {
   char ch='a';
    printf("print all alphabets from a to z:\n");
   /* while(ch<='z')
    {
        printf("%c,\t", ch);
        ch++;
    }*/
       for(int i=ch; i<='z'; i++)
    {
        printf("%c,\t", i);
    }
}*/
#include <stdio.h>

int main() {
   char ch='a';
    printf("print all alphabets from a to z:\n");
    while(ch<='z')
    {
        printf("%c,\t", ch);
        ch++;
    }
}