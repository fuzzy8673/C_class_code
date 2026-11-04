// you are given an integer array. you have to add all the elements those are at odd index and print the sum
// input : [1,3,7,12,5];
// output : 15
#include<stdio.h>
int oddSum(int arr[],int n){
    int sum=0;
    int i;
    for (i = 0; i < n; i++)
    {
        if (i%2!=0)
        {
            sum+=arr[i];
        }
    }
    return sum;
}
int main(){
    int arr[]={1,3,7,12,5};
    int arr2[]={1};
    printf("the sum is : %d\n",oddSum(arr,5));
    printf("the sum is : %d\n",oddSum(arr2,1));
    return 0;
}