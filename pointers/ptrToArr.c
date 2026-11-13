#include<stdio.h>
int main(){
    int arr[]={4,5,6,7};
    int *p=arr+1;
    printf("%d %d",*p,p[2]);

    // printf("%d %d\n",*(p+0),(p+0));
    // printf("%d %d\n",*(p+1),(p+1));
    // printf("%d %d\n",*(p+7),(p+7));

    // int n=sizeof(arr)/sizeof(arr[0]);
    // int i;
    // for (i = n-1; i >= 0; i--)
    // {
    //     printf("%d %d\n",*(p+i),(p+i));
    //     // printf("%d %d\n",*p,p);
    //     // p++;
    // }
    // int i;
    // for (i = 0; i < n; i++)
    // {
    //     printf("%d %d\n",*(p+i),(p+i));
    //     // printf("%d %d\n",*p,p);
    //     // p++;
    // }
    return 0;
}