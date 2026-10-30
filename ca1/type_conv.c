#include <stdio.h>

int main() {
	int count = 5;
    float price = 2.50;
    
    // 'count' is automatically promoted to float (5.0) before multiplication
    float total = count * price; 
    
    printf("Total: %.2f\n", total); // Output: 12.50
    
    //char to int  
    char letter = 'A';
    
    // 'letter' is  converted to its ASCII value
    int ascii_value = letter; 
    
    printf("ASCII Value: %d\n", ascii_value); // Output: 65
    
    
//    int to char
    int code = 66;
    
    // Explicitly casts the ASCII value 66 back to a character
    char symbol = (char)code; 
    
    printf("Character: %c\n", symbol); // Output: B
    
    
    //demotion with data loss
    double pi = 3.14159;
    
    // The fractional part is entirely truncated during implicit conversion
    int cropped_pi = pi; 
    
    printf("Value: %d\n", cropped_pi); // Output: 3
    
    //preventing integer turncation in diivision
    int total_marks = 425;
    int subjects = 6;
    
    // Without (float), 425 / 6 equals 70. 
    // Casting 'total_marks' forces a float result.
    float average = (float)total_marks / subjects; 
    
    printf("Average: %.2f\n", average); // Output: 70.83
    return 0;
}

