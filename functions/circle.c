// write 2 functions to calculate the area & the perimeter
// of a circle
//func signature
#include<stdio.h>
float getArea(float r){
    // write here
    float area=3.14*r*r;
    return area;
}   // pi = 3.14

float getPerimeter(float r){
    // write here
    float peri=2*3.14*r;
    return peri;
}
// r will be given by the user

int main(){
    float r;
    printf("Enter the radius :\n");
    scanf("%f",&r);
    printf("The area :%f\n",getArea(r));
    printf("The perimeter :%f\n",getPerimeter(r));


    return 0;
}


