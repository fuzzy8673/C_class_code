// 1.take 3 integer user input
// check which one is the greatest number
//a ,b,c
//if(a>b && a>c) --> a is greatest
//else if(b>c && b>a)--- b is gr
//else -- >c is greatest

//2.Calculate the number of digits in a number.
// 1123 = 4

//3.Calculate the sum of digits of a number.
// 1123 = 1+1+2+3=7















#include<stdio.h>
int main(){
	int n;
	int ans=0;
	printf("Enter a number : \n");
	scanf("%d",&n);
	while(n>0){
		ans+=n%10;
		n=n/10;
//		ans++;
	}
//	printf("The number of the digits : %d\n",ans);
	printf("The sum of the digits : %d\n",ans);
	
	
	return 0;
	
	
	// count the digits of a number
	// ex: 1123  --> 4
	
	
	
	
	
	
	
	
}

