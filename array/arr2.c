#include <stdio.h>

int main()
{
    int arr[] = {4, 5, 6, 7, 8, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    // printf("%d",size);
    int target = 70;
    int i;
    int flag = 0;
    int ans;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            flag = 1;
            ans=i;
            break;
        }
    }

    if (flag)
    {
        printf("Target is inside the array, index is %d\n", ans);
    } else{
        printf("Target %d is not inside the array\n",target);
    }


    return 0;
}