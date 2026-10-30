/*
39. Restaurant Billing System
Write a C program to create a simple restaurant billing system.
The restaurant offers the following items:
1. Pizza  ? ?200
2. Burger ? ?120
3. Pasta  ? ?150
Ask the user to select an item and enter the quantity.
Calculate the total bill.
If the total bill is greater than ?500, provide a 10% discount.
Display:
	• Item selected
	• Quantity
	• Original bill
	• Discount
	• Final bill
	
	*/
	
	#include<stdio.h>
	
	int main(){
		int item,costOfOne,qty;
		float finalBill;
		
		printf("Enter the corresponding number of the item you want\n1.Pizza - 200/-\n2.Burger - 120/-\n3.Pasta - 150/-");
		scanf("%d",&item);
		
		if(item==1){
			costOfOne=200;
			printf("Selected item : pizza\n");
		} else if(item==2){
			costOfOne=120;
		}else if(item==3){
			costOfOne=150;
		}else{
			printf("invalid input. Enter a valid number between 1-3\n")
			break;
		}
		
		printf("Enter the quantity :\n");
		scanf("%d",&qty);
		
		int totalBill=qty*costOfOne;
		
		
		return 0;
	}
	
	

