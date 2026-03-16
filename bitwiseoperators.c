#include <stdio.h>

int main()
{
    // BITWISE operators = special operators used in bit level probramming
    // << left shift
    // >> right shift
    // & = AND, | = OR, ^ = XOR
    // knowing binary is important for this topic


    int a = 5; // 0000 0101
    int b = 9; // 0000 1001
    int z = 0; 

    z = a & b; // 0000 0001 = 1
    printf("AND: %d\n", z); //=> 1

    z = a | b; // 0000 1101 = 13
    printf("OR: %d\n", z); //=> 13

    z = a ^ b; // 0000 1100 = 12
    printf("XOR: %d\n", z); //=> 12

    z = a << 1; // 0000 1010 = 10
    printf("LEFT SHIFT: %d\n", z); //=> 10
    z = a >> 1; // 0000 0010 = 2
    printf("RIGHT SHIFT: %d\n", z); //=> 2

    return 0;

}