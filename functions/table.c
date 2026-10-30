

// take a user input (int)
// print the multiplication table of that number
//perform the whole task in a seperate function
// in main call the function



#include<stdio.h>
void printTable(int n){
    int i;
    for (i = 0; i <= 10; i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    } 
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    printTable(n);

    


}