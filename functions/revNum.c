#include <stdio.h>

// write a function that takes a integer and returnes the reverse of the integer
// example : 
// input : 1234
// output : 4321     // 76 60 // total=32
int reverseNumber(int n)
{
    int reverse = 0;
    while (n > 0)
    {
        // Get the last digit
        int digit = n % 10;
        // Add the digit to the reversed number
        reverse = reverse * 10 + digit;
        // Remove the last digit from n
        n = n / 10;
    }
    return reverse;
}

void isPalindrome(int n){
    if (n==reverseNumber(n))
    {
        printf("YES");
    }else{
        printf("NO");
    }
    
}

int main()
{
    int n;

    scanf("%d", &n);

    printf("%d", reverseNumber(n));

    return 0;
}