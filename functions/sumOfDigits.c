/*
Sum of First N Natural Numbers
Write a C program to input a positive integer N and calculate the sum of all natural numbers from 1 to N using loops.
Example:
Input: 5
Output: 15
write a function for it.   // 5 --> 1+2+3+4+5 = 15
*/                          //2 --> 1+2 = 3
#include<stdio.h>
// void calculateSum()



int calculateSum(int n){
    int ans=0;
    int i;
    for ( i = 1; i <= n; i++)
    {
        // printf("Enter the n: %d\n",i);
        ans=ans+i;
        
    }
    return ans;

}

int main(){
    int n;
    int ans=0;
    printf("Enter the n: \n");
    scanf("%d",&n); 
    
    printf("The sum: %d\n",calculateSum(n));  // ant return data type
    // calculateSum(7);  // for void type
    
    return 0;
}