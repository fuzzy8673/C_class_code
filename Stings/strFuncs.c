/*
string.h
strcat
strlen
strrev
strcpy
strcmp     
*/

#include<stdio.h>
#include<string.h>
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
    char s1[]="Hello ";
    char s2[]="world!!";
    printStr(strcat(s1,s2));
    printf("The length of s1 is %d\n",strlen(s1));
    printf("The length of s2 is %d\n",strlen(s2));
    printStr(strrev(s2)); 
    char s3[200];
    strcpy(s3,s1);
    // printStr(s3);
    printf("%d\n",strcmp("x","x"));
    return 0;
}