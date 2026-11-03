// you are given one array of integers, your task is to copy the elements of the array into another array but in reverse order, print the array
// Sample Input:
// 5
// 7 14 21 28 35
// Sample Output:
// 35 28 21 14 7

#include<stdio.h>
int main(){
    int f[5]={7,14,25,23,56};
    int s[5];

    int j;
    for (j = 0; j < 5; j++)
    {
        s[j]=f[4-j];
    }
    

    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d ",s[i]);
    }
    
    return 0;
}

