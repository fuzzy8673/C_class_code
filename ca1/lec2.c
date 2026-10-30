#include <stdio.h>

// use code::blocks (those who are having mac OS)


int main(){
/*	
// Lec 2: Data types

int a =7;  // 2-4 bytes
float d=8.1;   // 4 bytes - 6 decimal precision
double f=7.2655;  // 15 decimal places precision
char h='j';  // 1 byte

unsigned short e=8;   // 2 bytes
long b=6525625;  //4 bytes
short c=21;    //2 bytes
long double g=7.1545484;   // 19 decimal place precision


printf("The size taken by int is %d\n",sizeof(int));



int myName;  // declaration
myName=7;   // initialization

int seven=7;  //declarationn and initialization

const int i=7;

i=10;

//format specifiers in c

| Format Specifier | Data Type                  | Example     |
| ---------------- | -------------------------- | ----------- |
| `%d` or `%i`     | Integer                    | `25`        |
| `%c`             | Character                  | `'A'`       |
| `%f`             | Float                      | `3.14`      |
| `%lf`            | Double (mainly in `scanf`) | `3.141592`  |
| `%s`             | String                     | `"Hello"`   |
| `%u`             | Unsigned Integer           | `50`        |
| `%x`             | Hexadecimal                | `FF`        |
| `%o`             | Octal                      | `17`        |
| `%p`             | Memory Address             | `0x7ffe...` |







Types of operators in c : 

Arithmatic Operators  --> + - * / %

Relational  --> == != < >  
Logical  --> && || !
Bitwise  --> & | ^ << >>
Assignment  --> = += -= *= %= etc
Misc.  --> . :  sizeof()

//python
import pandas as pd

df=pd.read_csv("path_of_the_file")


int u=0;
int v=1;
printf("and op %d\n",u&&v);
*/



//Bitwise
//A=60    B= 13

//A=00111100
//B=00001101

//printf("The size taken by char is %d\n",sizeof(char));


//float c=7.2;
//char ch='A';

//printf("the val of b=%d\n",b);
//printf("the val of ch=%c\n",ch);



//int result=b+c;
//printf("b+c=%d\n",b+c);
//printf("b-c=%d\n",b-c);
//printf("b*c=%d\n",b*c);
//printf("b/c=%d\n",b/c);

//int b=55;
//int c=11;

//printf("%d\n",b==c);
//printf("%d\n",b!=c);
//printf("%d\n",b<c);
//printf("%d\n",b>c);

/*
take 2 variables
declare initialize
perform + - * /
show the output using printf function
*/

//iSnt a=0;  //this is for future ref.
//int b=1;
//
//printf("a || b=%d\n", a||b);
//
//printf("a && b=%d\n", a&&b);

/*
this
is 
a multi line
comment
*/

//int z=60;
//int y=13;
//S
//
//printf("z|y=%d\n",z|y);
//printf("%d\n",z-=y);



//printf("the result : %d\n",a==b);
//printf("the result : %d\n",a!=b);
//printf("the result : %d\n",a<b);
//printf("the result : %d\n",a>b);


//printf("the result : %d\n",a||b);
//printf("the result : %d\n",a&&b);
//printf("the result : %d\n",!b);



//printf("the result : %d\n",a|b);   // bitwise OR
//printf("the result : %d\n",a&b);  // bitwise AND
//printf("the result : %d\n",a^b);  // bitwise XOR

// what is left shift and right shift operator?






// take two float variable
// perform the( +, -, *, / )and print the result

//float a=61.2;
//float b=13.5;
//printf("the result : %f\n",b+a); 
//printf("the result : %f\n",b-a); 
//printf("the result : %f\n",b*a); 
//printf("the result : %f\n",b/a); 

//int input;
//printf("Enter a integer\n");
//scanf("%d",&input);
//printf("the value of input : %d\n",input);

// take one character as input from the user
// and print its value

//char input2;
//printf("Enter a char\n");
//scanf(" %c",&input2);
//printf("the value of input2 : %c\n",input2);



//float input3;
//printf("Enter a decimal number : \n");
//scanf(" %f",&input3);
//printf("the value of input3 : %f\n",input3);
//printf("the value of input3 : %.2f\n",input3);

//take 3 float numbers as user input
// calculate their average
//print the result upto 3 digits after decimal using output
//formatting

float input;
printf("Enter a decimal\n");
scanf("%f",&input);
printf("the value of input : %f\n",input);

float input2;
printf("Enter a decimal\n");
scanf("%f",&input2);
printf("the value of input : %f\n",input2);

float input3;
printf("Enter a decimal\n");
scanf("%f",&input3);
printf("the value of input : %f\n",input3);

//double result= ;

printf("the average : %.3f\n",(input+input2+input3)/3);





return 0;
}


