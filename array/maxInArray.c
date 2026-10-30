// write a program that returns the maximum/largest number from a given array
// input : arr = [4,5,6,7]
// output : 7










// write a c program that finds the minimum / smallest element from a given array
// input : arr = [4,5,6,7]
// output : 4

#include <stdio.h>

int getMax(int arr[], int n)
{
    int max = arr[0];
    int i;
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int getMin(int arr[], int n)
{
    int min = arr[0];
    int i;
    for (i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int arr[] = {4,5,6,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("The maximum in the array is: %d\n", getMax(arr, n));
    printf("The minimum in the array is: %d\n", getMin(arr, n));

    return 0;
}