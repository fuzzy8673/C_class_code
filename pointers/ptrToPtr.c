#include<stdio.h>
int main(){
    int x=7;
    int *p=&x;
    printf("%d\n",x);  // 7
    printf("%d\n",p);  // addrss of x
    printf("%d\n",*p); // 7

    int **q=&p;
    printf("%d\n",q);  // 
    printf("%d\n",*q);
    printf("%d\n",**q);
    return 0;
}