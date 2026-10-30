//Check whether a year is a leap year.
//Take input from the user and print the corresponding result.

//year = 2000;
// year % 4 == 0  --> normal years (except centuries)
// year % 400 ==0 --> for centuries
// 
 //1700 , 1900
 
 #include<stdio.h>
 int main(){
 	int year;
 	printf("Enter a year\n");
 	scanf("%d",&year);
 	
	if((year%400==0) || (year%4==0) && (year%100!=0)){  
		printf("%d is a leap year\n",year); 
	}
	else{
			printf("%d is not a leap year\n",year);
	}



 	
 	
 	return 0;
 }
 


