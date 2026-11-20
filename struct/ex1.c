// create a data type called Student. the members will be roll_no (int), name (string), cgpa (float).

// make 2 variables of the Student type and initialize with actual values
// print the details of the 2 variables
#include<stdio.h>
#include<string.h>
struct Student{
    int roll_no;
    char name[50];
    float cgpa;
};
int main(){
    struct Student s1 = {7,"Alice", 4.5};
    struct Student s2 = {9,"Bob", 8.9};

    printf("The roll of s1 : %d\n",s1.roll_no);
    printf("The name of s1 : %s\n",s1.name);
    printf("The cgpa of s1 : %f\n",s1.cgpa);
}
