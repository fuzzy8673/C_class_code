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

int main(){
    // char str[]={'s','o','u','m','y','a'};  // not a string
    // char str2[]={'s','o','u','m','y','a','\0'};  // valid string
    // printStr(str);   // getting extra char
    
    
    // another way to create char array
    // char str3[]="cristiano is the";   // dont have to write the \0
    // printStr(str3);


    // char str4[5]="four";   // have to take one size +, cause the \0, 
    // printStr(str4);
    
    
    
    char str[52];
    gets(str);
    printStr(str);
    printf("%s",str);
    puts(str);
    return 0;
}