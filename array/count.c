// write a program that counts number of zeros, ones and twos in a given array
// input : arr = [0,0,1,2,3,2,1,0,2]
// output: zero : 3
            // one: 2
            // two : 3
       
#include<stdio.h>
int main(){
    int arr[] = {0,0,1,2,3,2,1,0,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int zero=0;
    int one=0;
    int two=0;
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i]==0)
        {
            zero++;
        }
        if (arr[i]==1)
        {
            one++;
        }
        if (arr[i]==2)
        {
            two++;
        }
        
    }

    printf("The counts are : \n zero : %d\none : %d\ntwo : %d\n",zero,one,two);
    
    return 0;
}
