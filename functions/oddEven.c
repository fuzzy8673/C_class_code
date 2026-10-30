// write a function to decide whether a number is odd or even
// if the number is odd , print -> odd
// if the number is even , print -> even
#include<stdio.h>
int globalVar;  //global variable

void isOdd(int a){
    if (a%2==0)    // a & 2--- 9 & 2
    {
        printf("Even Number\n");
        printf("Even Number -- %d\n",globalVar);
    }
    else{
        printf("Odd Number\n");
    }
    
}


int main(){
    a=10;
    // int globalVar=70;  // local variable
    scanf("%d",&globalVar);
    printf("The value of global variable : %d\n",globalVar);
    isOdd(74);

    return 0;
}
