#include <stdio.h>

int main () {
    
    /*
    augumented assignemnt operators = used to replace a statment where an operator takes a variable as one of its
    arguments and then assigns the result back to the same variable
    x = x + 1
    x += 1
    */

    int x = 10;
    
    // x = x + 2;
    //or better:

    x+=2;

    printf("x = %d", x);
    
    return 0;

}

