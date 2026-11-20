#include<stdio.h>
#include<string.h>

    // int -- integer
    // employee  -- id(int), name(string), salary(float)
    // int a=10
    // employee e1= 1, sj, 500

    

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main(){
    struct Employee e1;  // e1 is the variable of employee data type
    e1.id=8;
    strcpy(e1.name, "soumyadip");  // another way of initialize the members of your user defined data type
    e1.salary=7000.255;

    struct Employee e2 = {7,"Alice", 100.45};

    printf("the id of e1 is %d\n",e1.id);
    printf("the name of e1 is %s\n",e1.name);
    printf("the salary of e1 is %f\n",e1.salary);

}