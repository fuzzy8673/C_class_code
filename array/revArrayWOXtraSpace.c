// you are given an integer array. your task is to reverse the original array without using any extra space.

// arr = [1,2,3,4]
// new =[4 3 2 1] -- not allowed
// printing the elements from last index  -- not allowed
// arr[0] = 4


#include<stdio.h>
void printArr(int arr[],int n){
    int i;
    for (i = 0; i < n; i++)
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
void revArr(int arr[],int n){
    int i;
    for (i = 0; i < n/2; i++)
    {
        swap(arr,i,n-1-i);
    }
}
int main(){
    int arr[]={3,5,2,8,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Before reverse\n");
    printArr(arr,n);
    printf("After reverse\n");
    revArr(arr,n);
    printArr(arr,n);
    return 0;
}