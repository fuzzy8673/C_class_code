// Write a c program that counts the number of vowels in a given string
// input : aasdder 
// output : 3
#include<stdio.h>
#include<string.h>

int countVowel(char str[]){
    int count = 0;
    int i=0;
    while (str[i]!='\0')
    {
        if (str[i]=='A' || str[i]=='E' ||str[i]=='I' ||str[i]=='O' ||str[i]=='U' ||str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u')
        {
            count++;
        }
        i++; 
    }
    
    return count;
}
int main(){
    char str[]="aasdder";
    char str2[]={'a','b','\0','e'};
    // printf("The number of vowels are %d\n",countVowel(str));
    printf("The number of vowels are %d\n",countVowel(str2));
}