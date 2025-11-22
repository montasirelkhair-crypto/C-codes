#include <stdio.h>

/* void newfunction() { //function cannot see other functions. this void funciton cannot use variables in the main funtion
    printf("hi name: %s", name);
    printf("hi age: %d", age);
}
*/
// instead you can pass variables from main to the void function with arguments:
void newfunction(char name[], int age) { //specify the type of variable when wanting to use the passed variables
    printf("hi name: %s\n", name);
    printf("hi age: %d\n", age);
}
int main() { //main function
    char name [] = "Yeh";
    int age = 21;

    newfunction(name, age); //call function, and inside () are the arguments to pass variable in the main to the void function
    return 0;
}