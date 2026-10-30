
#include <stdio.h>
void swap(int a, int b)  // copy of 10 or a copy of a
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 10, b = 20;  // 
    printf("Before function call: a = %d, b = %d\n", a, b);
    swap(a, b);  // call by value
    printf("After function call: a = %d, b = %d\n", a, b);
    return 0;
}
