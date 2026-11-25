#include<stdio.h>
int main(){
    int arr[]={10,20,30,40,50};
    int *p=arr;

    // printf("%d  %d\n",*p+0,p+0);
    // printf("%d  %d\n",*(p+1),(p+1));
    // printf("%d  %d\n",*(p+2),(p+2));

    int n=sizeof(arr)/sizeof(arr[0]);
    int i;
    for (i = n-1; i>= 0; i--)
    {
        printf("%d  %d\n",*(p+i),(p+i));
    }
    // int i;
    // for (i = 0; i < n; i++)
    // {
        // printf("%d  %d\n",*(p+i),(p+i));
    // }
    
    return 0;
}