//1. write a c program that will compare between two given strings and returns the length of the longer string
// input : asdawl    asd45200
// output : 8

// 2. write a c program that will accept a string and a target character, and it will count the frequency of the character in that string
// input : parrot
// target : r
// output : 2

#include<stdio.h>
#include<string.h>
int getLonger(char str1[],char str2[]){
    if (strlen(str1)>strlen(str2))
    {
        return strlen(str1);
    }
    strlen(str2);
}

int countFreq(char str[],char target){
    int count = 0;
    int i=0;
    while (str[i]!='\0')
    {
        if (str[i]==target)
        {
            count++;
        }
        i++;
    }
    return count;
}
int main(){
    char str1[]="asdawl";
    char str2[]="asdawlosjdh";
    // printf("The length of the longer string is : %d\n",getLonger(str1,str2));
    printf("The count of %c in %s is : %d\n",'a',str1,countFreq(str1,'a'));
    return 0;
}