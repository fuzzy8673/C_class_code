#include<stdio.h>
#include<math.h>

int main(){
    //  printf("sqrt(25)  = %.2f\n", sqrt(25.0));
    int a=49;
    int rootedValue=sqrt(a);
    printf("The square root of %d is %d\n",a,rootedValue);
    return 0;
}
/*
    HEADER FILES: 

    #include <math.h>
        Used for:
        sqrt(), pow(), ceil(), floor(), round(), trunc()
        
       example :printf("sqrt(25)  = %.2f\n", sqrt(25.0));
                printf("pow(2,3)  = %.2f\n", pow(base, exponent));

    #include <stdlib.h>
        Used for:
        abs()

*/
