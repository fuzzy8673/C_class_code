#include<stdio.h>
// you are given an integer array, you have to reverse the array but without using extra space
// arr = [2,3,4,5]
// 5 3 4 2
// 5 4 3 2
void swap(int arr[],int a,int b){
    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}
void revArr(int arr[],int n){
    int i;
    for (i = 0; i < (n/2); i++)
    {
        swap(arr,i,n-1-i);
    }  
}
void printArr(int arr[],int n){
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
}

int main(){
    int arr[]={5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    printArr(arr,n);
    revArr(arr,n);
    printArr(arr,n);
    return 0;
}
