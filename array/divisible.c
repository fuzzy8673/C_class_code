// you are given one integer array and one key. You have to count the number of elements those are divisible by the key
// input : arr = [5,10,12,54,50]
//         key = 5
// output : 3
#include<stdio.h>
int countDivisible(int arr[],int n,int key){
    int i;
    int count=0;
    for (i = 0; i < n; i++)
    {
        if (arr[i]%key==0)
        {
            count++;
        }
       
    }
     return count;
    
}
int main(){
    int arr[]={5,10,12,54,50};
    int key=5;
    int n=5;
    printf("The number of elements that are divisible by %d is %d\n",key,countDivisible(arr,n,key));
    return 0;
}