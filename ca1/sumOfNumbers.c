#include<stdio.h>
int main(){
	// write a program to calculate the sum of the numbers from 1 to n
// n will be given by the user
// solve the problem using loops
// ex : input = 5
//    	output= 15

int n;
printf("Enter a number :\n");
scanf("%d",&n);
int sum=0;
int i;
for(i=1;i<=n;i++){  // i=1  sum=0  -- 0+1=1
	sum=sum+i;      // i=2   1      -- 1+2=3
}
printf("the sum upto %d is :%d\n",n,sum);




	
	return 0;
}

