// calculate the cube of a number n
// n will be given by the user

#include<stdio.h>

int calculateCube(int n){
    return n*n*n;
}

int main(){
    int n;
    printf("Enter a number: \n");
    scanf("%d",&n);
    printf("The cube of %d is %d",n,calculateCube(n));
    return 0;
}