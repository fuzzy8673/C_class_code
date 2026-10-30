#include <stdio.h>

int main()
{
    int x = 10;
    int *p = &x;

    printf("%d\n", x);
    printf("%d\n", *p);

    *p = 26;

    printf("%d\n", x);

    return 0;
}
