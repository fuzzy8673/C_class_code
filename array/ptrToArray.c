#include <stdio.h>
int main()
{
// char arr[]={'q','w','e','r'};
// char *p=arr;
// printf("%c\n",*p);
// printf("%c\n",*(p+1));
// printf("%c\n",*(p+2));
// printf("%d\n",p);
// printf("%d\n",(p+1));
// printf("%d\n",(p+2));

// int arr[]={1,2,3,4};
// int *p=arr;
// printf("%d\n",*p);
// printf("%d\n",*(p+1));
// printf("%d\n",*(p+2));
// printf("%d\n",p);
// printf("%d\n",(p+1));
// printf("%d\n",(p+2));

// printing all the elements using pointers

        int a[5] = {10, 20, 30, 40, 50};
        int *p = a;
        int i;

        for (i = 4; i >=0; i--)
        {
            printf("%d ", *(p+i));
            // p--;
        }
    return 0;
}