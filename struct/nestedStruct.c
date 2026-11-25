// A nested structure in C is a structure declared as a member inside another structure. It lets you group complex, related data hierarchically under a single outer entity (for example, storing a Date structure inside an Employee structure).

// 

#include <stdio.h>

// 1. Define the inner structure
struct Date {
    int day;
    int month;
    int year;
};

// 2. Define the outer structure containing the inner structure
struct Employee {
    int id;
    char name[30];
    struct Date joinDate; // Nested structure variable
};

int main() {
    // Initialize using nested curly braces
    struct Employee emp1 = {101, "Ananya", {15, 8, 2024}};

    // Access members by chaining the dot (.) operator
    printf("ID: %d\n", emp1.id);
    printf("Name: %s\n", emp1.name);
    printf("Joined: %02d-%02d-%d\n", 
           emp1.joinDate.day, 
           emp1.joinDate.month, 
           emp1.joinDate.year);

    return 0;
}
