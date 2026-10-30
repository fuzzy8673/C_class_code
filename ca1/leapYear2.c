#include<stdio.h>
int main (){
	
//Check whether a year is a leap year.
// take a user input (year) , then tell that the year
// is a leap year or not :2000, 1700

int year;
printf("Enter a year :\n");
scanf("%d",&year);
// check the centuries
if(year % 400==0){  //1900
	printf("%d is leap year\n",year);
	// centuries but not leap year
} else if(year % 100 ==0){
	printf("%d is not leap year\n",year);
	// years those are not centuries
}else if(year%4==0){
	printf("%d is leap year\n",year);
} else{
	printf("%d is not leap year\n",year);
}





return 0;	
	
}



