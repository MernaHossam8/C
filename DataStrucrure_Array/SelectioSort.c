// Online C compiler to run C program online
#include <stdio.h>
void PrintArray(int arr[],int n);
int selectionSorting(int arr[],int n);
int main() {
    // Write C code here
    
    int arr[6]={100,60,20,50,30,90};
    printf("array before selection sorting\n");
    PrintArray(arr,6);
    selectionSorting(arr,6);
    printf("\narray afterselection  sorting\n");
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
int selectionSorting(int arr[],int n)
{
    int i=0,j=0,MinIDX=0;
    for(i=0;i<n-1;i++)
    {
        MinIDX=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[MinIDX]>arr[j])
            {
                MinIDX=j;
                
            }
               
            
        }
        int temp=arr[MinIDX];
         arr[MinIDX]=arr[i];
        arr[i]=temp;
    }
    
}
