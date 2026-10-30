// write a function that accepts 2 int as parameter and calculate the substraction of them

#include<stdio.h>
int getSub(int a,int b){
    int c=a-b;
    return c;
}

int main(){
    int a;
    int b;
    printf("Enter 2 numbers :");
    scanf("%d %d",&a,&b);
    printf("The sub :%d",getSub(a,b));
    return 0;
}