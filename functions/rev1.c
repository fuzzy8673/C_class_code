#include<stdio.h>
void printArr(int arr[],int n){
    int i;
    for ( i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void swap(int arr[],int a,int b){
    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}
void revArray(int arr[],int n){
    int i;
    for (i = 0; i < n/2; i++)
    {
        swap(arr,i,n-1-i);
    }
    
}
int main(){
    int arr[]={3,5,2,9,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Before reverse\n");
    printArr(arr,n);
    revArray(arr,n);
    printf("After reverse\n");
    printArr(arr,n);
    return 0;
}