#include <stdio.h>
 
int add(int a, int b);        // prototype
 
int main()
{
    int x, y, result;
 
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
 
    result = add(x, y);       // call
 
    printf("Sum = %d", result);
    return 0;
}
 
int add(int a, int b)         // definition
{
    int sum;
    sum = a + b;
    return sum;
}
