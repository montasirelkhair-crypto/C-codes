#include <stdio.h>

int main () {
    
    // arithmetic  operators = operators that perform mathematical operations such as addition, subtraction, multiplication, division, and modulus.
    // +  = addition
    // -  = subtraction
    // *  = multiplication
    // /  = division
    // %  = modulus (remainder of division)
    // ++ = increment operator (increases a value by 1)
    // -- = decrement operator (decreases a value by 1)

    int x = 10;
    int y = 5;

    int z = x + y; // addition
    printf("x + y = %d\n", z); // if the result is a floating point number, it will be truncated to an integer.

    // example of truncation
    int a = 7;
    int b = 2;
    int c = a / b; // division
    printf("a / b = %d\n", c); // result is truncated to 3.
    float d = (float)a / (float)b; // casting to float for accurate division
    printf("a / b = %.2f\n", d); // result is 3

    //for more redeability use float or double
    //modulus gives remainder of a division

    printf("a %% b = %d\n", a % b);

    //to write % in printf :
    printf(" hi this is percentage %%\n");

    a++; //a increase by 1
    b--; //b decrease by 1

    printf ("%d\n", a);
    

}