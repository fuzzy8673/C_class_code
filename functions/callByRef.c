#include <stdio.h>

void swap(int *a, int *b) // 1000     1004
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x = 10, y = 20;   // 1000, 1004
    printf("Before function call: x = %d, y = %d\n", x, y);
    swap(&x, &y);  // call by reference
    printf("After function call: x = %d, y = %d\n", x, y);
    return 0;
}