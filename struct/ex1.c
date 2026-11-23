// create a user defined data type book. the properties will be : id (int), name(char name[]),author(char name[]), price(float)
// create 2 variables of book type and initialize the values. then print all the details of the 2 books.
#include<stdio.h>
#include<string.h>
struct book
{
    int id;
    char name[50];
    char author[50];
    float price;
};
int main(){

// inside main
struct book b1,b2;
printf("Enter the book id : \n");
scanf("%d",&b1.id);
printf("Enter the book name : \n");
scanf(" %99s",&b1.name);
// gets(b1.name);
// strcpy(b1.name,"a thousand splendid suns");
printf("Enter the author name : \n");
// gets(b1.author);
scanf(" %99s",&b1.author);
printf("Enter the book price : \n");
scanf("%f",&b1.price);

printf("Id : %d\n",b1.id);
printf("Name : %s\n",b1.name);
printf("Author : %s\n",b1.author);
printf("Price : %f\n",b1.price);

return 0;
}