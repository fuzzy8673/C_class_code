// A union in C is a user-defined data type that allows you to store different data types in the exact same memory location.
// Unlike a struct (where every member gets its own separate memory space), all members of a union share a single block of memory. Because of this, a union can only hold a value for one member at a time.
#include <stdio.h>

union Data {
    int i;
    double f;
    char c;
};

int main() {
    union Data d;

    d.i = 10;
    printf("d.i = %d\n", d.i); // Output: 10

    // Assigning a new member overwrites the previous memory!
    d.f = 22.5;
    printf("d.f = %.1f\n", d.f); // Output: 22.5
    printf("d.i = %d\n", d.i);   // Output: Garbage value (corrupted)

    return 0;
}


// When to Use a Union

// • Memory Optimization: Ideal for embedded systems or hardware programming with strict RAM limits where a variable might hold different types of data at different times, but never simultaneously.
// • Type Punning / Bit Manipulation: Useful for inspecting the raw bytes of a variable (e.g., overlapping a float with a char[4] array to read its individual bytes).
// • Tagged Unions (Variants): Often placed inside a struct alongside an enum tag that keeps track of which union member is currently active.