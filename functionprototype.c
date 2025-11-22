#include <stdio.h>

void hello(char[], int); //function prototype. Ensure that calles to a function are made with the correct arguments

int main() { //it is better to have secondary function at the bottom to keep everything more organised

    char name[] = "momo";
    int age = 21;

    hello(name, age); //must provide arguments for the called function otherwise you will receive error

    return 0;
}

void hello(char name[], int age) { //moving this function from before main's to after main function
    printf("quick %s you are %d", name, age);
}