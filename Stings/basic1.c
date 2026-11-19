/*
string.h
strcat
strlen
strrev
strcpy
strcmp
*/
#include<stdio.h>

void printStr(char arr[]){
    int i=0;
    while (arr[i]!='\0')
    {
        printf("%c",arr[i]);
        i++;
    }
    printf("\n");
    
}
// gets(str);
//     printStr(str);
//     printf("%s\n",str);
//     puts(str);

int main(){
    // char str[]={'s','o','u','m','y','a'};  // not a string
    // char str2[]={'s','o','u','m','y','a','\0'};  // valid string
    // char str3[]={'h','e','l','l','o','\0'};  // valid string
    // printStr(str3);   // getting extra char
    
    
    // another way to create char array
    // char str4[]="cristiano is the";   // dont have to write the \0
    // printStr(str4);


    // char str4[5]="four";   // have to take one size +, cause the \0, 
    // printStr(str4);
    
    
    
    char str[52];
    printf("Enter your name : \n");
    gets(str);
    printStr(str);
    printf("%s\n",str);
    puts(str);
    return 0;
}