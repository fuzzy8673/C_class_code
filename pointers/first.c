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

    // 4. void pointer
    int x = 10;
    float y = 2.5;
    void *g;

    g = &x;
    printf("%d\n", *(int *)g);

    g = &y;
    printf("%.1f\n", *(float *)g);

    return 0;
}