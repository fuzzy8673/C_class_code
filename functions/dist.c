#include<stdio.h>
#include<math.h>
// (x1,y1) (x2,y2)   // sqrt()  pow()
// calculate the distance between two given points

float calculateDistance(int x1,int y1,int x2,int y2){
    // complete the function
    return sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    // float a=pow(x2-x1,2);
    // float b=pow(y2-y1,2);
    // return sqrt(a+b);
}

// (x1,y1,z1) (x2,y2,z2)   // sqrt()  pow()
// calculate the distance between two given points in 3d plain

void calculateDistanceIn3d(int x1,int y1,int z1,int x2,int y2,int z2){
    // complete the function
    printf("The distance : %f\n",sqrt(pow(x2-x1,2)+pow(y2-y1,2)+pow(z2-z1,2))) ;
    // float a=pow(x2-x1,2);
    // float b=pow(y2-y1,2);
    // float c=pow(z2-z1,2);
    // return sqrt(a+b+c);
}

int main(){
    int x1=2;
    int y1=6;
    int z1=65;
    int x2=19;
    int y2=45;
    int z2=31;
    printf("The distance between these two points : %f",calculateDistance(x1,y1,x2,y2));
    // printf("The distance between these two points : %f",calculateDistance(x1,y1,z1,x2,y2,z2));
    calculateDistanceIn3d(x1,y1,z1,x2,y2,z2);
    return 0;
}



