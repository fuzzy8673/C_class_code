#include<stdio.h>

int main(){
    // calculate the sum of digits of a number
    int num;
    printf("Enter a number: \n");
    scanf("%d",&num);
    int sum=0;
    while (num>0)  
    {
        // sum=sum+num%10;   // sum=0+8  = 8
        int last=num%10;
        sum=sum+last;
        num=num/10;    // num= 3528/10  = 352
    }

    printf("The sum of the digits of %d is %d\n",num,sum);
    
    return 0;
}