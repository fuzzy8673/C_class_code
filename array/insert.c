#include <stdio.h>

int main() {
    int a[100], n, i;
    int element, pos;

    // Read the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Read the array elements
    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Read the element to insert and its position
    printf("Enter the element to insert: ");
    scanf("%d", &element);

    printf("Enter the position (1 to %d): ", n + 1);
    scanf("%d", &pos);

    // Check whether the position and size are valid
    if (n >= 100 || pos < 1 || pos > n + 1) {
        printf("Invalid position or array is full.\n");
    } else {
        // Shift elements one position to the right
        // Start from the last element
        for (i = n; i >= pos; i--) {
            a[i] = a[i - 1];
        }

        // Insert the new element at the required position
        a[pos - 1] = element;

        // Increase the array size
        n++;

        // Display the updated array
        printf("Array after insertion:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
    }

    return 0;
}












