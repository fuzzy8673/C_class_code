// write a c program that tells that a given string is palindrome or not

// input : eye
// output : yes

// input : cristiano
// output : no









#include<stdio.h>
#include<string.h>
int main(){
    printf("Enter a string : \n");
    char str[200];
    gets(str);
    char str2[200];
    strcpy(str2,str);
    if (strcmp(strrev(str),str2) != 0)
    {
        printf("No");
    }else{
        printf("Yes");
    }
    
    return 0;
}