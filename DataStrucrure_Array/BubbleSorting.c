#include <stdio.h>
void PrintArray(int arr[],int n);
int BubbleSorting(int arr[],int n);
int main() {
    // Write C code here
    
    int arr[6]={100,60,20,50,30,90};
    printf("array before bubble sorting\n");
    PrintArray(arr,6);
    BubbleSorting(arr,6);
    printf("\narray after bubble sorting\n");
    PrintArray(arr,6);
    

    return 0;
}
void PrintArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ,\t",arr[i]);
    }
}
int BubbleSorting(int arr[],int n)
{
    int i=0,j=0;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
               int temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
            }
        }
    }
    
}


