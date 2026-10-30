#include<stdio.h>

int isPrime(int num){
//	int flag=0;
	int i;
	
	for(i=2;i<num-1;i++){
		if(num%i==0){
			return 1;
			break;
		}
	}
	
	return 0;
	
}
int main(){
	
	int input;
	printf("Enter a number :\n");
	scanf("%d",&input);
	
	
	
	if(isPrime(input)==0){
		printf("%d is a prime number :\n",input);
	}else{
		printf("%d is not a prime number :\n",input);
	}
	
	
	return 0;
}
