#include <stdio.h>

int main() {
    
    // constant = a fixed value that the program may not alter during its execution
    
    const float pi = 3.14159; //variable

    pi = 3.14; //error: assignment of read-only variable 'pi'
    
    //but you can change the value of a non-constant variable like this:
    float radius = 5.0;
    radius = 10.0; //this is allowed. No error.
    printf("Radius: %.2f\n", radius);


}