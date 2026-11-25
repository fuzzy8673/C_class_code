#include <stdio.h>
#include <stdlib.h>
int main()
{
    // 1. malloc() demo
    // pointer = malloc(number_of_bytes);
    // int n;
    // printf("Enter the array size : \n");
    // scanf("%d",&n);
    // int *p = malloc(n*sizeof(int));
    // // taking user input
    // int i;
    // for (i = 0; i < n; i++)
    // {
    //     scanf("%d",&p[i]);
    // }
    // // print the array
    // int j;
    // for (j = 0; j < n; j++)
    // {
    //     printf("%d\n",p[j]);
    // }

    // calloc() demo
    // pointer = calloc(number_of_elements,size_of_each_element);

    int n;
    printf("Enter the array size : \n");
    scanf("%d", &n);
    int *p = calloc(n , sizeof(int));
    // taking user input
    // int i;
    // for (i = 0; i < n; i++)
    // {
    //     scanf("%d", &p[i]);
    // }
    // print the array
    int j;
    for (j = 0; j < n; j++)
    {
        printf("%d\n", p[j]);
    }

}