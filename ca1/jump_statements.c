//JUMP STATEMENTS

//Statement 1
//    |
//Statement 2
//    |
//Statement 3
//    |
//Statement 4

//break
//continue
//goto
//return

#include<stdio.h>

int main(){
	
	// break : immediately terminates the nearest loop or switch.
	
//	int i;
//
//for(i = 1; i <= 10; i++)
//{
//    if(i == 5)
//        break;
//
//    printf("%d ", i);
//}


// continue : skips the remaining statements of the current
// iteration and moves to the next iteration.

//int i;
//
//for(i = 1; i <= 10; i++)
//{
//    if(i == 5)
//        continue;
//
//    printf("%d ", i);
//}



//goto : transfers program control to a labeled statement.

//printf("Start\n");
//
//    goto skip;
//
//    printf("This will not print\n");
//
//skip:
//    printf("End\n");
    
//    Excessive use of goto can make programs:
//
//Difficult to understand
//Difficult to debug
//Difficult to maintain
//Confusing due to jumps




//return:
//
//Ends the execution of a function
//Can send a value back to the calling function

//int result;
//result = add(10, 20);
//printf("result : %d\n",result);









	
	return 0;    // means the program has completed successfully
}



int add(int a, int b)
{
    return a + b;
}







