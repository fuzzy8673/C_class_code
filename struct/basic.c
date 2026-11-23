// ID 
// name
// designation
// salary

// 100 employees

// A_ID = 0234;

#include<stdio.h>
#include<string.h>

struct employee
{
    int id;
    char name[50];
    char designation[50];
    float salary;
};

int main(){
    struct employee e1;    // similar to  - int a
    e1.id=213;
    strcpy(e1.name,"alex");
    strcpy(e1.designation,"manager");
    e1.salary=400.568;

    printf("The id of e1 is : %d\n",e1.id);
    printf("The name of e1 is : %s\n",e1.name);
    printf("The designation of e1 is : %s\n",e1.designation);
    printf("The salary of e1 is : %f\n",e1.salary);
    return 0;
}