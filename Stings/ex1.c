// write a c program that takes a string input from the user and counts how many letters are there

// input : good morning
// output : 12
#include<stdio.h>

int main(){
    char str[100];
    printf("Enter your sentence : \n");
    gets(str);

    int i=0;
    while (str[i]!=0)   
    {
        i++;
    }
    printf("%d\n",i);
    
    return 0;
}