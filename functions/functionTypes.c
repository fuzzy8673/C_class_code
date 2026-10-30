#include<stdio.h>
// prototypes
void greet();   // no return, no params
void greet(int n); // no return , param
int sum(int a,int b); // return , param
int calculate();  // return , no params

// write 2 functions to calculate the area & the perimeter
// of a circle
//func prototype
float getArea(float r){
    // write here
    return 3.14*r*r;
}   // pi = 3.14



float getPerimeter(float r){
    // write here
}
// r will be given by the user

int main(){
    printf("%f",getArea(5));
    return 0;
}