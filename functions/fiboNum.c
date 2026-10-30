#include <stdio.h>

int fibonacci(int n)
{
    int first = 0;
    int second = 1;

    // First term
    if (n == 0)
        return 0;

    // Second term
    if (n == 1)
        return 1;

    for (int i = 2; i <= n; i++)
    {
        int next = first + second;

        first = second;
        second = next;
    }

    return second;
}

int main()
{
    int n;

    scanf("%d", &n);

    printf("%d", fibonacci(n));

    return 0;
}