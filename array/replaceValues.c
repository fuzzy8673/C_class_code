//write a c program that replaces all the 0 {zeros} with 1 in a given array
// input : arr = [0,1,0,2]
// output : arr=[1,1,1,2]
#include <stdio.h>
void printArray(int arr[],int n){
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
}
int main(){
    int arr[]={0,1,0,2};
    int arr2[]={0,1,0,2,3,4,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    printf("Before replace \n");
    printArray(arr,n);
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i]==0)
        {
            arr[i]=1;
        }
        
    }

    printf("After replace \n");
    printArray(arr,n);
    
    // printArray(arr,n);
    // printArray(arr2,n2);
    return 0;
}