#include <stdio.h>

int search(int arr[],int n,int target){
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i]==target)
        {
            return i;
            break;
        }
    }
    return -1;
}

int searchC(char arr[],int n,char target){
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i]==target)
        {
            return i;
            break;
        }
    }
    return -1;
   
}
int main()
{
    
    int arr[] = {3, 5, 2, 9, 7, 1};
    int target = 70;
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = search(arr,n, target);
    printf("The index of %d is %d", target, ans);
    return 0;
}