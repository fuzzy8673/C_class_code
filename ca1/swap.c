/*
Write a C program to input two numbers and swap their values using a third variable.
Example:
Input:
A = 10
B = 20
Output:
A = 20
B = 10

*/

#include<stdio.h>
int main(){
	int a=1;
	int b=2;
	printf("Before Swapping : \na= %d\nb=%d\n",a,b);
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("After Swapping : \na= %d\nb=%d\n",a,b);
	
	return 0;	
}







