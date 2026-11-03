// you are given an array where the numbers from 0 to n-1 are stored except one missing number. return/print the missing number
// input : [0,1,2,3,5]
// output : 4
#include<stdio.h>
int main(){
    // write your code here
    int arr[6]={0,1,2,3,4};
    int i;
    for (i = 0; i < 6; i++)
    {
        if (arr[i]!=i)
        {
            printf("%d\n",i);
            break;
        }
        
    }
    
    return 0;
}