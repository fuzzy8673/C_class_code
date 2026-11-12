#include<stdio.h>
int main(){
    int x=7;
    int *p=&x;

    printf("%d\n",x);  // 7
    printf("%d\n",p);  // addrs of x
    printf("%d\n",*p); // 7
    
    int **q=&p;
    printf("%d\n",q);  // addrs of p
    printf("%d\n",*q);  // addrs of x
    printf("%d\n",**q); // 7
    return 0;
}