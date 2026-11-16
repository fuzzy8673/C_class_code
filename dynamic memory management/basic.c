// gcc basic.c ; size .\a.exe    // tells size in bytes

// syntax : ptr= (ptr-type*) malloc(size_in_bytes)
// syntax : ptr= (int*) malloc(3*sizeof(int))

// calloc()
// ptr = (ptr-type*) calloc(n,size_in_bytes)  // n = number of blocks


// realloc()

// free()

#include<stdio.h>
#include<stdlib.h>

int main(){

     int n;
    printf("Enter the array size you want");
    scanf("%d",&n);
    int *p = malloc(n*sizeof(int));
    printf("The element is %d",p[n+100]);
   
    // int arr[10];
    // some
    // lines 
    // of 
    // code
    // arr=arr[20];
    // return 0;
}