// Online C compiler to run C program online
#include <stdio.h>
void PrintArray(int arr[],int n);
int BinarySearch(int arr[],int L,int H,int Key);
int main() {
    // Write C code here
    int val;
    int arr[]={20,30,50,60,90,100};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("array before BinarySearch\n");
    PrintArray(arr,6);
    val=BinarySearch(arr,0,n-1,60);
    printf("\narray after BinarySearch");
    printf("\nindex of key is %d",val);
  //  printf("\nkey is %d",arr[val]);
    

    return 0;
}
void PrintArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ,\t",arr[i]);
    }
}
int BinarySearch(int arr[],int L,int H,int Key)
{
    int i,j,middle;
    while(L<=H)
    {
        middle=(L+H)/2;

        if(arr[middle]==Key)
        {
            return middle;
        }
        if(arr[middle]>Key)
        {
            H=middle-1;
        }
        else
        {
            L=middle+1;
        }
    }
    return -1;


    
    
}
