//2506 - 21/10
#include<stdio.h>
int main(){
    //declaration
    // int arr[5];
    // //initialization
    // arr[0]=25;
    // arr[1]=26;
    // arr[2]=27;
    // arr[3]=28;
    // printf("the 0th element of the array : %d\n",arr[0]);
    // printf("the 0th element of the array : %d\n",arr[1]);
    // printf("the 0th element of the array : %d\n",arr[2]);
    
    
    // declaration and initialization in one line
    // int arr[]={2,4,6,8,10};
    // printf("the 3rd element of the array : %d\n",arr[3]);

    // create an array of float and character type
    // give the float array size = 5
    // give the character array size = 3
    //initialize the values of the character array and float array in one line and in seperate lines
    // print the values of the array

    // char arr1[]={'A','B','C'};
    // float arr2[5];
    // arr2[0]=2.3;
    // arr2[1]=4.3;
    // printf("Enter the value to insert : ");
    // float inp;
    // scanf("%f",&inp);
    // arr2[2]=inp;
    // printf("%f\n",arr2[0]);
    // printf("%f\n",arr2[1]);
    // printf("%f\n",arr2[2]);

    // int arr[6];
    // int i;
    // for (i = 0; i < 6; i++)
    // {     // taking user input
    //     printf("Enter the element at %d: ",i);
    //     int ip;
    //     scanf("%d",&ip);
    //     arr[i]=ip;
    // }

    // int j;
    // for ( j = 0; j < 6; j++)
    // {  // printing the array
    //     printf("%d\n",arr[j]);
    // }
    

    // int i;
    // char arr1[3]={'A','B','C'};
    // arr1[2]='R';
    // for (i = 0; i < 3; i++)
    // {
    //     printf("%c",arr1[i]);
    // }
    
    

    int arr[]={2,4,6,8,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("%d",sizeof(arr)/sizeof(arr[0]));





    return 0;
}