// You are given an array of integers which stores the numbers from 0 to n-1, but except only one number.
// print/ return the missing number
// input : [0,1,2,78,4,5]
// output : 3

#include<stdio.h>
int main(){
    int arr[]={0,1,2,3,4,15};
    int i;
    for ( i = 0; i < 6; i++)
    {
        if (arr[i] != i)
        {
            printf("%d\n",i);
            break;
        }
    }

    
}