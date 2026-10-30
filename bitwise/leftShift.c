//Write a C program to read two integers n and k and print the result of shifting n to the left by k positions.
// 5 2
// 5 = 0101

// 5 << 2 = 10100 = 20

#include <stdio.h>
int main()
{
    int n, k;

    scanf("%d %d", &n, &k);

    printf("%d", n << k);

    return 0;
}