#include <stdio.h>

int isPalindrome(int n)
{
    int original = n;
    int reverse = 0;

    while (n > 0)
    {
        // Get the last digit
        int digit = n % 10;

        // Build the reversed number
        reverse = reverse * 10 + digit;

        // Remove the last digit
        n = n / 10;
    }

    // Compare original and reversed numbers
    if (original == reverse)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    scanf("%d", &n);

    printf("%d", isPalindrome(n));

    return 0;
}