#include <stdio.h>
#include <stdlib.h>

int main()
{
    // new_pointer = realloc(old_pointer, new_size_in_bytes);
    int n;
    printf("Enter the array size : \n");
    scanf("%d", &n);
    int *p = calloc(n , sizeof(int));
    // print the array
    int j;
    for (j = 0; j < n; j++)
    {
        printf("%d\n", p[j]);
    }

    // realloc()
    int k;
    printf("Enter the new size of the array : \n");
    scanf("%d",&k);
    int *q=realloc(p,k*sizeof(int));
    printf("The new array elements are : \n");
    int i;
    for (i = 0; i < k; i++)
    {
        printf("%d ", q[i]);
    }


    // free()
    free(q);
    q=NULL;
    return 0;
}