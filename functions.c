#include <stdio.h>

void newfunction() {
    printf("hi function"); //created function
} //you cannot return with void

int main() { //main function
    newfunction(); //call function
    return 0;
}