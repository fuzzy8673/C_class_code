#include<stdio.h>
#include<stdlib.h>

int main(){
    //malloc demo
    // syntax: pointer = malloc(number_of_bytes);
    // int n;
    // printf("Enter the array size you want");
    // scanf("%d",&n);
    // int *p = malloc(n*sizeof(int));
    // int i;
    // for (i = 0; i < n; i++)
    // {
    //     printf("Enter the element no %d: ",i);
    //     scanf("%d",&p[i]);
    // }
    // int j;
    // for (j = 0; j < n; j++)
    // {
    //     printf("The element at %d is %d\n",j,p[j]);
    //     // scanf("%d",&p[j]);
    // }



    //calloc demo
    // syntax: pointer = calloc(number_of_elements,size_of_each_element);

    int n;
    printf("Enter the array size you want : ");
    scanf("%d",&n);
    int *p = calloc(n,sizeof(int));
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter the element no %d: ",i);
        scanf("%d",&p[i]);
    }
    int j;
    for (j = 0; j < n; j++)
    {
        printf("The element at %d is %d\n",j,p[j]);
        // scanf("%d",&p[j]);
    }

    //realloc demo
    // syntax: new_pointer = realloc(old_pointer, new_size_in_bytes);


    int size;
    printf("Enter the new array size you want : ");
    scanf("%d",&size);
    int *q = realloc(p,size*sizeof(int));
    int k;
    for (k = 0; k < size; k++)
    {
        printf("Enter the new element no %d: ",k);
        scanf("%d",&q[k]);
    }
    int l;
    for (l = 0; l < size; l++)
    {
        printf("The new element at %d is %d\n",l,p[l]);
        // scanf("%d",&p[j]);
    }

    free(q);
    return 0;
}