#include<stdio.h>
int main(){
    int x=7;
    int *p=&x;

    int **q=&p;

    printf("%d\n",x);  // 7
    printf("%d\n",p);  // addrs of x
    printf("%d\n",*p); // 7
    printf("q  %d\n",q); // addrs of p
    printf("*q  %d\n",*q); // 
    printf("**q  %d\n",**q); // 

    return 0;
}