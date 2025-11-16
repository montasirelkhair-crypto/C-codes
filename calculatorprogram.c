#include <stdio.h>

int main() {

    char operator;
    double num1;
    double num2;
    double result;

    printf("\nEnter an operator (+ - * /): ");
    scanf("%c", &operator); //to store a symbol liek +, use %d.

    printf("\nEnter number 1: ");
    scanf("%lf", &num1);

    printf("\nEnter number 2: ");
    scanf("%lf", &num2);

    switch(operator){
        case '+':
           result = num1 + num2;
           printf("\nresult: %.1lf", result);
           break;
        case '-':
           result = num1 - num2;
           printf("\nresult: %.1lf", result);
           break; //to break out of the switch
        case '*':
           result = num1 * num2;
           printf("\nresult: %.1lf", result);
           break;
        case '/':
           result = num1 / num2;
           printf("\nresult: %.1lf", result);
           break;
        default:
           printf("%c is not valid", operator);
           //does not need break
    }

    return 0;
}