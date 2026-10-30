#include <stdio.h>
#include <math.h>
int amst(int x)
{
    int a = 0;
    int c = 0;
    int b = x;
    while (b != 0)
    {
        b = b / 10;
        c = c + 1;
    }
    while (x > 0)
    {
        a = a + (int)round(pow((x % 10), c));
        x = x / 10;
    }
    return a;
}
int main()
{
    int z;
    printf("Enter a num:");
    scanf("%d", &z);
    if (z == amst(z))
    {
        printf("%d is a armstrong number", z);
    }
    else
    {
        printf("it not");
    }

    return 0;
}