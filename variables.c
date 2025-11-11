#include <stdio.h>

int main () {
    /*
    variable declaration
    first state the date type then the name of the variable
    */
    int x; //intger data type decleartion 
    x = 123; //initialization of variable x
    int y = 321; //declaration and initialization in one line

    int age = 21; //intger data type
    float gpa = 3.78; //floating point number data type
    char grade = 'A'; //character data type
    char name[] = "Broman"; // array of characters (string)

    //to print use format specifiers
    printf("You are %d years old\n", age); //&d for integer or you can use %i
    printf("Hello %c\n", grade); //%c for character
    printf("Your gpa is %.2f\n", gpa); //%f for float, .2 for 2 decimal points
    printf("Name is %s\n", name); //%s for string
    
    //variables are allocated in memory to store a value. You can change the value

    return 0;
}