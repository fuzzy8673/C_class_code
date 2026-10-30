#include<stdio.h>
/*
Advantages of Arrays
1. Stores multiple values: An array stores many values of the same data type using a single variable name.

Example: int marks[50]; stores marks for 50 students.

2. Easy access to elements: Elements can be accessed directly using their index in \(O(1)\) time.

Example: marks[10] accesses the 11th element.

3. Reduces code length: We can use loops to process multiple elements instead of writing separate statements for each variable.

4. Contiguous memory allocation: Array elements are stored in consecutive memory locations, which makes traversal efficient.

5. Easy to perform operations: Searching, sorting, calculating sums, and finding maximum or minimum values become easier.

6. Useful for implementing data structures: Arrays can be used to implement stacks, queues, heaps, and other data structures.

Disadvantages of Arrays
1. Fixed size: In a conventional fixed-size array, the size is determined when the array is created and cannot be changed afterward.

2. Stores the same data type: An array declared as int stores integer elements, not a mixture of integers and floating-point values.

3. Insertion and deletion are costly: Inserting or deleting an element in the middle usually requires shifting other elements, taking \(O(n)\) time.

4. Risk of wasted memory: If we allocate space for 100 elements but use only 20, the remaining capacity is unused.

5. No automatic bounds checking in C: Accessing an invalid index can cause undefined behavior.

Example: int a[5]; a[10] = 20; — this is an invalid access.

6. Searching may be slow: Searching an unsorted array generally takes \(O(n)\) time in the worst case.
Quick comparison for students
Advantages	Disadvantages
Direct element access	Fixed size for ordinary arrays
Easy traversal using loops	Same data type for all elements
Efficient memory access	Costly middle insertion/deletion
Simple sorting and processing	No automatic bounds checking
Useful for building data structures	Unused allocated capacity may waste memory
*/
int main(){

    // int arr1[5];  // declaration
    // arr1[0]=1;    // initialization
    // arr1[1]=2;
    // arr1[2]=3;
    // arr1[3]=4;
    // arr1[4]=5;
    // printf("%d\n",arr1[0]);
    // printf("%d\n",arr1[1]);
    // printf("%d\n",arr1[2]);


    // int arr[]={2,5,7,56,14,89};
    // int n=sizeof(arr)/sizeof(arr[0]);

   
    // int i=0;
    // for (i = 0; i < n; i++)
    // {
    //     printf("%d\n",arr[i]);
    // }


    // int arr[]={10,20,30,4,5};  // declaration and initialization
    // printf("%d\n",arr[0]);
    // printf("%d\n",arr[1]);
    // printf("%d\n",arr[2]);



    // int arr[6];
    // int i; 
    // taking user input to populate the array
    // for (i = 0; i < 6; i++) 
    // {
    //     printf("Enter the %d element: \n",i);
    //     int inp;
    //     scanf("%d",&inp);   // scanf("%d",&arr[i])
    //     arr[i]=inp;
    // }

    // // printing the array 
    // printf("The array is:\n");
    // int j;
    // for (j = 0; j < 5; j++)
    // {
    //     printf("the %d element is %d\n",j,arr[j]);
    // }
    // // // printing the array in reverse order
    // printf("The array in reverse order is:");
    // int k;
    // for (k = 5; k>=0; k--)
    // {
    //     printf("the %d element is %d\n",k,arr[k]);
    // }
    
    // take a character type array and insert the letters of your name
    // size = number of letters in your name
    // ['R','A','H','U','L']
    //print the array
    // using for loop


    

   
    char arr[9];
    int i;
    for (i = 0; i < 9; i++)
    {
        printf("Enter the %d letter of your name\n",i);
        scanf(" %c",&arr[i]);
    }
    int j;
    for (j = 0; j < 9; j++)
    {
        printf("The %d letter of your name: %c\n",j,arr[j]);
    }



    // int arr[5];  // declaration
    // arr[0]=1;   // initialization
    // arr[1]=2;
    // arr[2]=2;
    // arr[3]=2;
    
    
    // char arr[]={'f','l','p','o','J'}; 
    // printf("%c",arr[4]);

    // int arr[5];
    // int size=sizeof(arr)/sizeof(arr[0]);
    // // printf("%d",size);
    // int i;
    // for (i = 0; i < 5; i++)
    // {
    //     printf("Enter the %d element :\n",i);
    //     scanf("%d",&arr[i]);
    // }

    // int j;
    // for (j = 0; j < 5; j++)
    // {
    //     printf("The %d element is: %d\n",j,arr[j]);
    // }
    


    // int arr[]={10,20,30,4,5};
    // int i;
    // for(i=4;i>=0;i--){
    //     printf("%d\n",arr[i]);
    // }
    

    



    
    





    
    return 0;
}















