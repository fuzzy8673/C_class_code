#include <stdio.h>
int main()
{
    int x = 10;
    int *p = &x;

    printf("%d\n", x);  // 10
    printf("%d\n", p);  // stores the address of x
    printf("%d\n", *p); // stores the value of x

    // types of pointers
    // 1. wild
    int *p; /* garbage address */
    *p = 10;

    // 2. null pointer
    int *p = NULL;
    if (p != NULL)
    {
        printf("%d", *p);
    }
    // 3. dangling pointer
    int *p;
    {
        int x = 10;
        p = &x; /* p points to x */
    }
    /* x no longer exists here */
    /* p is now dangling      */
    p = NULL; /* fix */

    return 0;
}