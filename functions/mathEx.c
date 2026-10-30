#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){

    // printf("sqrt(25)  = %.2f\n", sqrt(25.0));
    
    // float fl=49.0;
    // float roootValue=sqrt(fl);
    // printf("%f\n",roootValue);

    int base;
    int exponent;
    printf("Enter the base :\n");
    scanf("%d",&base);
    printf("Enter the exponent :\n");
    scanf("%d",&exponent);
    int calculatedValue=pow(base,exponent);
    printf("%d ^ %d : %d\n",base,exponent,calculatedValue);

    //sqrt(), pow(), ceil(), floor(), round(), trunc()  abs()  
    printf("pow(%d, %d)  = %.2f\n",base,exponent,pow(base, exponent));   // same in one line


    return 0;
}
