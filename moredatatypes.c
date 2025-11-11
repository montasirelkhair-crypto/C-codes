#include <stdio.h>
#include <stdbool.h> //for boolean data type

int main () {
    /*
    There are more data types in C
    each data type has a specific size and range of values it can store
    */
    
    double largeDecimal = 3.14159265359; //double data type for large floating point numbers the format specifier is %lf
    //double is more precise than float but takes more memory space

    bool e = true; //boolean data type can be true or false format specifier is %d (1 for true, 0 for false)

    //you can store a number as a character or as an integer value
    char f = 120; //stores the integer value 120. This number corresponds to the character 'x' in the ASCII table. They can store values from -128 to 127
    unsigned char g = 255; //unsigned char can store values from 0 to 255
    printf ("largeDecimal: %.11lf\n", largeDecimal); //printing double with 11 decimal points
    printf ("boolean e: %d\n", e); //printing boolean value
    printf ("char f as character: %c\n", f); //printing char as character
    printf("char f as integer: %d\n", f); //printing char as integer value
    //ok so you can store char as integer value and print it as interger or character from the ASCII table
    //there is always a limit to how much data a data type can store

    printf("unsigned char g: %d\n", g); //printing unsigned char value

    short h = 32767; //short data type can store smaller range of integer values (-32,768 to 32,767) and the format specifier is %hd
    unsigned short i = 65536; //unsigned short can store values from 0 to 65,535
    printf("short h: %hd\n", h);
    printf("unsigned short i: %hu\n", i);
    //int uses 4 bytes
    //char uses 1 byte
    //short uses 2 bytes
    //int is also considered as long int
    int j = 2147483647; //int data type can store integer values from -2,147,483,648 to 2,147,483,647 format specifier is %d
    unsigned int k = 4294967295; //unsigned int can store values from 0 to 4,294,967,295
    //if you try to store a value outside the range of the data type it will result in an overflow
    printf("int j: %d\n", j);
    printf("unsigned int k: %u\n", k);
    
    long long int l = 9223372036854775807; //long long int can store larger integer values from -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 format specifier is %lld
    unsigned long long int m = 18446744073709551615U; //unsigned long long int can store values from 0 to 18,446,744,073,709,551,615 the format specifier is %llu
    //if U is not included at the end of the number it will result in a warning for integer constant is too large for its type
    printf("unsigned long long int m: %llu\n", m);
    printf("long long int l: %lld\n", l);

    return 0;
}
