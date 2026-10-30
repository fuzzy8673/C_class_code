#include<stdio.h>

// return_type function_name(data_type param_name,..){
//     // code
//     return value of return_type
// }

// function prototype  declaration
// int sum(int a,int b);   // int i;  
// int sum(int,int);   // int i;  
// function definition 
int sum(int a,int b){  // parameters -> int a, int b
    int c=a+b;
    return c;
}
// function prototype  declaration
float multiply(float a,float b);  
float div(float,float);

// function definition
void greet(){
    printf("Good Morning");
}

int square(int a){
    int ans=a*a;
    return ans;
}

int main(){
    int a=4;
    int b=14;
    int c=sum(a,b); //arguments ->4 14
    printf("the sum :%d",c);  //function calling  
    // int sq=square(4);
    // printf("the square :%d\n",sq);  //function calling  //
    // printf("the square :%d\n",square(5));  //function calling  //
    // printf("the square :%d\n",square(6));  //function calling  //
    // printf("the square :%d\n",square(7));  //function calling  //

    greet();
    

    return 0;
}