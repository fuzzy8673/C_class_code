// Write a C program to read two integers n and k and print the result of shifting n to the right by k positions.
// Example
// 20 2
// 20 = 10100
// 20 >> 2 = 00101 = 5
#include <stdio.h>

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);

    printf("%d", n >> k);

    return 0;
}