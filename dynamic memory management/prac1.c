// create one character array using malloc() function and take user input for the array
// char *p = malloc(n*sizeof(char));

// create one double array using calloc() function and print the array
// double *p = calloc(n,sizeof(double));

#include <stdio.h>
#include <stdlib.h>

int main()
{

    // malloc demo
    //  syntax: pointer = malloc(number_of_bytes);
    int n;
    printf("Enter the array size you want");
    scanf("%d", &n);
    // char *p = malloc(n * sizeof(char));
    double *p = calloc(n,sizeof(double));
    // int i;
    // for (i = 0; i < n; i++)
    // {
    //     printf("Enter the element no %d: ", i);
    //     scanf(" %c", &p[i]);
    // }
    int j;
    for (j = 0; j < n; j++)
    {
        printf("The element at %d is %d\n", j, p[j]);
        // scanf("%d",&p[j]);
    }
    return 0;
}