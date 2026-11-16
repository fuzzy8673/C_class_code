#include<stdio.h>
#include<stdlib.h>

int main(){

int n;
    printf("Enter the array size you want : ");
    scanf("%d",&n);
    int *p = calloc(n,sizeof(int));
    int j;
    for (j = 0; j < n; j++)
    {
        printf("The element at %d is %d\n",j,p[j]);
    }
    printf("Enter the new size : \n");
    int m;
    scanf("%d",&m);
    int *q = realloc(p,m*sizeof(int));
    int i;
    for (i = 0; i < m; i++)
    {
        printf("The element at %d is %d\n",i,q[i]);
    }

    free(q);
    q=NULL;
    return 0;
}