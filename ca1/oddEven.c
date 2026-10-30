//1. print the even numbers from 1 to 20 using loops

// 2. print the sum of the numbers from 1 to n using loops
// the n will be given by user
// ex: n=10 ==> ans= 1+2+3+4+5+6+7+8+9+10   n

#include <stdio.h>

int main() {
	int n;
	printf("Enter a number : \n");
	scanf("%d",&n);
	int sum=0;
    int i;
    for (i = 1; i <=n; i++) {
    	sum+=i;
//    	sum=sum+i;
    }
    printf("Sum is : %d\n",sum);





    return 0;
}
