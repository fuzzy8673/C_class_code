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
    char arr[] = {'R','A','M','O','S'};
    // int arr[] = {3, 5, 2, 9, 7, 1};
    char target = 'M';
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = searchC(arr,n, target);
    printf("The index of %c is %d", target, ans);
    return 0;
}