// initialize an array of float type, size= 5,
// insert elements in the array from the user
// print the array
//print the sum of all the elements of the array
// create one variable sum outside for loop, initialize it with 0
// sum=sum+arr[i]  // inside the for loop



#include<stdio.h>
int main(){

    float arr[5];
    int i;
    for (i = 0; i < 5; i++)
    {    // taking user input to populate the array
        printf("Enter element %d: ",i);
        scanf("%f",&arr[i]);
    }
    int j;
    float sum=0;
    for (j = 0; j < 5; j++)
    {    // printing the array
        printf("Element %d is: %f\n",j,arr[j]);
        sum=sum+arr[j];
    }
    printf("The sum of all the array elements are : %f\n",sum);
    
    

    return 0;
}