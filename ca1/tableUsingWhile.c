// print the multiplication table 
//of any number using while loop
// ex: 7*1 =7

#include <stdio.h>

int main() {
    int i = 1;
    int num=7;

    // while checks the condition BEFORE executing the loop body.
    while (i <= 10) {
        printf("%d * %d = %d \n", num,i, num*i);

        // Update the loop variable.
        // Without this, the loop could become infinite.
        i++;
    }

    return 0;
}
