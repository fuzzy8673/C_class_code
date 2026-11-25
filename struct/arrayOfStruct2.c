#include <stdio.h>

struct Student
{
    int id;
    char name[50];
    float marks;
};

int main()
{
    // Initializing an array of 3 structures
    struct Student class[3] = {
        {101, "Aarav", 88.5},
        {102, "Diya", 92.0},
        {103, "Kabir", 79.5}};

    // Modifying a specific member
    class[2].marks = 85.0;
    strcpy(class[1].name,"David");

    // Iterating through the array using a loop
    for (int i = 0; i < 3; i++)
    {
        printf("ID: %d | Name: %s | Marks: %.2f\n",
               class[i].id, class[i].name, class[i].marks);
    }

    // Taking User Input with scanf

    // When reading user input into an array of structures, remember:
    // • Use & for primitive data types (int, float, char).
    // • Do not use & for strings (character arrays), as the array name already acts as a pointer.

    //     for (int i = 0; i < 3; i++) {
    //     printf("Enter ID, Name, and Marks for student %d: ", i + 1);
    //     scanf("%d %s %f", &class[i].id, class[i].name, &class[i].marks);
    // }

    return 0;
}
