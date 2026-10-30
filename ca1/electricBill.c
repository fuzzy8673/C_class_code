#include<stdio.h>
int main(){
	int units;
	printf("Enter the total consumed units :\n");
	scanf("%d",&units);
	int total=0;
	
	if(units>200){
		total=(100*2)+(100*3)+((units-200)*5);  //250 -- 100*2 + 100*3 + (250-200)*5
	} else if(units > 100 && units <=200){  // 120-- 100*2 + (120-100)*3 
		total=(100*2)+((units-100)*3);
	}else if(units<=100 && units >0){  // 
		total=2*units;
	}else{
		printf("Invalid number\n");
	}
	
	
	printf("Total bill amount :%d\n",total);
	
	
	return 0;
}
