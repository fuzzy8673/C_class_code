// write a c program :
// 1. define a struct marks {p(float), c(float),m(float)}
// create a variable of marks and use that variable in another structure named student {id(int), name(string), score(marks)}
// create 2 student variables and initialize their values, then print all the details of 2 students

// 2. create an array of student of length 3. Insert the details of every student and print the details

#include <stdio.h>
#include <string.h>
struct marks
{
    float p;
    float c;
    float m;
};

// 2. Define the outer structure containing the inner structure
struct student
{
    int id;
    char name[30];
    struct marks score; // Nested structure variable
};
int main()
{
    // struct student s1 = {101, "Ananya", {15, 8, 24}};
    // struct student s2 = {102, "Pradip", {1, 8.6, 20}};

    // printf("ID: %d\n", s1.id);
    // printf("Name: %s\n", s1.name);
    // printf("Marks: %f %f %f\n",
    //        s1.score.p,
    //        s1.score.c,
    //        s1.score.m);

    // printf("ID: %d\n", s2.id);
    // printf("Name: %s\n", s2.name);
    // printf("Marks: %f %f %f\n",
    //        s2.score.p,
    //        s2.score.c,
    //        s2.score.m);

    // struct student class[3] = {
    //     {101, "Aarav", {12.3, 2.3, 3.6}},
    //     {102, "Diya", {112.3, 23.3, 31.6}},
    // {103, "Kabir", {102.3, 256.3, 324.6}}};
    struct student class[3];

    // taking input
    int j;
    for (j = 0; j < 3; j++)
    {
        scanf("%d %s %f %f %f", &class[j].id, class[j].name, &class[j].score.p, &class[j].score.c, &class[j].score.m);
    }
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("ID: %d | Name: %s | Marks of p %.2f | Marks of c %.2f | Marks of m %.2f\n",
               class[i].id, class[i].name, class[i].score.p, class[i].score.c, class[i].score.m);
    }

    return 0;
}
