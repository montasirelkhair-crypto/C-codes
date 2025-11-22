#include <stdio.h>

double square(double x) { //because reuslt is double you need to use double instead of void
    double result = x * x;
    return result; // saves result in the function, so that it can be outpetted when the function is called in the main function
}

int main() { //int is here because 0 is an integer (look at return)
    double x = square(3.14);
    printf("%lf", x);

    return 0; //returns a value back to a calling function
}