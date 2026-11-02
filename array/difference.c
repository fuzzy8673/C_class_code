// You are given an array of integers
// you have to find out and print the differene between the largest and smallest element in the array
// example :
// input :  [1,2,3,4,5]
// output : 4
//largest : 5
//smallest : 1
// 5-1 = 4
#include<stdio.h>
int getDifference(int arr[],int n){
    int max = arr[0];
    int i;
    for (i = 1; i < n; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
        
    }
    int min=arr[0];
    int j;
    for (j = 1; j < n; j++)
    {
        if (arr[j]<min)
        {
            min=arr[j];
        }
        
    }
    return max-min;
}

int main(){
    int arr[]={3,5,2,9,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("%d\n",getDifference(arr,n));
    return 0;
}