#include <stdio.h>
// An array of structures in C is a collection of multiple structure variables of the same type stored together in contiguous memory locations, allowing you to manage complex records (like a list of students or employees) efficiently.

// 1. Define the structure
struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    // 2. Declare an array of 3 Student structures
    struct Student class[3]; 
    
    return 0;
}
