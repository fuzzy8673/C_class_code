//write a function to calculate the perimeter of a rectangle
// length and breadth will be given by user input
// call the function in main().
#include<stdio.h>
int calculatePeri(int l,int b){
    return 2*(l+b);
}

int main(){
    int l,b;
    scanf("%d %d",&l,&b);
    printf("The perimeter is: %d",calculatePeri(l,b));
    return 0;
}





