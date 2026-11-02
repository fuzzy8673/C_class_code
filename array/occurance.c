// you are given an array and a target, you have to count the number how many times the target is appearing in the array
//Sample Input:
//7
// 5 12 5 8 5 3 12
// 5
// Sample Output:
// 3
#include<stdio.h>
int findOccurance(int arr[],int n,int target){
    // write your code here
    int i;
    int count=0;
    for (i = 0; i < n; i++)
    {
        if (arr[i]==target)
        {
            // return i;
            // break;
            count++;
        }
    }
    return count;
}
int main(){
   int arr[]={5, 12, 5, 8, 5, 3, 12};
   printf("%d\n",findOccurance(arr,7,5));
    return 0;
}
