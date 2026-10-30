#include <stdio.h>

int main() {
    int a[100], n, i;
    int pos;

    // Read the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Read the array elements
    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Read the position of the element to delete
    printf("Enter the position to delete (1 to %d): ", n);
    scanf("%d", &pos);

    // Check whether the position is valid
    if (pos < 1 || pos > n) {
        printf("Invalid position.\n");
    } else {
        // Shift elements one position to the left
        for (i = pos - 1; i < n - 1; i++) {
            a[i] = a[i + 1];
        }

        // Decrease the array size by one
        n--;

        // Display the updated array
        printf("Array after deletion:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
    }

    return 0;
}





