// Online C compiler to run C program online
#include <stdio.h>
void PrintArray(int arr[],int n);
int LinearSearch(int arr[],int n,int Key);
int main() {
    // Write C code here
    int val;
    int arr[6]={20,30,50,60,90,100};
    printf("array before LinearSearch\n");
    PrintArray(arr,6);
    val=LinearSearch(arr,6,90);
    printf("\narray after LinearSearch");
    printf("\nindex of key is %d",val);
    printf("\nkey is %d",arr[val]);
    

    return 0;
}
void PrintArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ,\t",arr[i]);
    }
}
int LinearSearch(int arr[],int n,int Key)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==Key)
        {
            return i;
                
        }
}
        return -1; 
        
    
    
}
