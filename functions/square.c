#include <stdio.h>
//calculate the square of any number - using a function
// Function definition
int getSquare(int n) {
    return n * n;
}

int main() {
    int n=5;
    int result = getSquare(n);
    printf("Square: %d\n", result);
    return 0;
}   