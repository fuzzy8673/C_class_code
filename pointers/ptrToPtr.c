#include<stdio.h>
int main(){
    int x=7;
    int *p=&x;
    printf("%d\n",x);  // 7
    printf("%d\n",p); // addrss of x
    printf("%d\n",*p); // 7
    
    int **q=&p;
    printf("q : %d\n",q); // addrss of p
    printf("*q : %d\n",*q); // the value at p - address of x
    printf("**q : %d\n",**q); // value of x

    return 0;
}