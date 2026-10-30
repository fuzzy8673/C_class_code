/*
 Number Guessing Game
Write a C program to create a simple number guessing game.
The program should have a fixed secret number, for example 7. Ask the user to guess the number repeatedly.
	• If the guess is smaller than the secret number, display "Too Low".
	• If the guess is greater than the secret number, display "Too High".
If the guess is equal to the secret number, display "Correct!" and terminate the program.

*/

#include<stdio.h>
int main(){
	int secret=49;
	
	int i;
	for(i=1;i<=5;i++){
		printf("Enter your guess :\n");
		int guess;
		scanf("%d",&guess);
		
		if(guess>secret){
			printf("Try to reduce your guessed number, you have %d chances left\n",5-i);
		} else if(guess<secret){
			printf("Try to increase your guessed number, you have %d chances left\n",5-i);
		}else{
			printf("Correct!! you guessed the number correctly in %d chances.\n",i);
			break;
		}
	}
	
	
	return 0;
}
