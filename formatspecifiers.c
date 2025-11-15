#include <stdio.h>

int main () {

    //format specifiers % are used to specify the type of data to be printed or read.
    /*
    Here is a list of common format specifiers in C:
    %d or %i - Integer (decimal)
    %u - Unsigned integer
    %f - Floating point number
    %lf - Double floating point number
    %c - Character
    %s - String
    %x - Hexadecimal integer
    %o - Octal integer
    %% - Percent sign   
    %p - Pointer address
    %.1 - Floating point number with 1 digit after the decimal point
    %1 - Minimum field width of 1
    %- - Left-justify within the given field width
    and many more.
    */
    
    float item1 = 5.75;
    float item2 = 6.25;
    float item3 = 7.50;
    printf("item 1: $%.2f\n", item1); //2 digits after the decimal point
    printf("item 2: $%.2f\n", item2); //2 digits after the decimal point
    printf("item 3: $%.1f\n", item3); //1 digit after the decimal point

    printf("item 1: $%6.2f\n", item1); //minimum field width of 6
    printf("item 2: $%8.2f\n", item2); //minimum field width of 6

    // %.1 = decimal point with 1 digit
    // %1 = minimum field width of 1
    // %- = left-justify within the given field width
    
    printf("item 3: $%-6.1f\n", item3); //left-justify within the given field width of 6
    printf("item 2: $%-2f\n", item2); //left-justify within the given field width of 8

    return 0;
}