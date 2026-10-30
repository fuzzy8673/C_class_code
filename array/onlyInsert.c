#include <stdio.h>

int main()
{
    int a[50] = {2, 4, 6, 8, 10};

    int n = sizeof(a) / sizeof(a[0]);
    int element, pos;
    printf("Enter the element to insert: ");
    scanf("%d", &element);

    printf("Enter the position (1 to 50): ");
    scanf("%d", &pos);

    if (pos < 1 || pos > 50)
    {
        printf("Invalid position or array is full.\n");
    }
    else
    {
        // Shift elements one position to the right
        // Start from the last element
        int i;
        for (i = n; i >= pos; i--)
        {
            a[i] = a[i - 1];
        }

        // Insert the new element at the required position
        a[pos - 1] = element;

        printf("Array after insertion:\n");
    }
    int j;
    for (j = 0; j < n; j++) {
        printf("%d ", a[j]);
    }
    return 0;
}
