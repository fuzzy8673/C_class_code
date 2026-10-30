// initialize one char array
// insert the characters in the array that are in your name
// search for the initials - return the index of initials
// [S a r g i o R a m o s] - 
// S = 0
// R = 6


#include <stdio.h>

int search(char arr[],int n, char target)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return i;
            break;  
        }
    }
    return -1;
}
int main()
{
    char arr[] = {'S','O','U','M','Y','A'};
    char target = 'J';
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = search(arr,n, target);
    printf("The index of %c is %d", target, ans);
    return 0;
}