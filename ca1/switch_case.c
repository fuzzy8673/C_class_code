
//switch (expression) {   // 0- sunday
//    case constant_1:  //1
//        // Code to execute if expression == constant_1
//        break;
//    case constant_2:
//        // Code to execute if expression == constant_2
//        break;
//    // You can have any number of case statements
//    default:
//        // Code to execute if expression doesn't match any case
//}


#include <stdio.h>

int main() {
	
	
    int day = 3;
    switch (day) {
        case 1:                        // return the name of the 
            printf("Monday\n");       // month based on the number 
            break;                     //entered
        case 2:                         // example: 1 -> January
            printf("Tuesday\n");
            break;
        case 3:
        	printf("Wednesday\n");
        	break;
        case 5:
            printf("Friday\n");
            break;
        default:
            printf("Weekend or Invalid Day\n");
            break;
    }

    return 0;
}

