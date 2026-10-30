/*
write a program that calculates the sum of all the odd numbers from 1 to N  -- user input
ex: inp: 10
output : 
explanation : 1+3+5+7+9
*/
#include<stdio.h>  
int main(){
    int n;
    scanf("%d",&n);  // if n=11
    int i;
    int sum=0;
    for ( i = 1; i <= n; i++)
    {
        if (i%2==0)
        {
            continue;
        }
        // printf("the value of i :%d\n",i);

        sum=sum+i;
        
    }
    printf("the sum of all the odd numbers upto %d :%d\n",n,sum);
    
    return 0;
}