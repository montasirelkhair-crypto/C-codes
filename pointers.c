#include <stdio.h>

void printA(int *a)
{
    printf("value of a: %d\n", *a); //=> 5
}

int main()
{
    // pointer = a variable that stores the memory address of another variable
    
    int a = 5;
    int *pA = &a; // pA is a pointer to an integer, it stores the memory address of a

    printf("address of a: %p\n", &a); //=> memory address of a
    printf("value of pA: %p\n", pA); //=> memory address of a
    //variable a is stored at a memory address, we can access that memory address using the & operator
    
    printf("size of pA: %d bytes\n", sizeof(pA)); //=> 8 bytes (on a 64-bit system)
    // the size of a pointer is typically 8 bytes on a 64-bit system, regardless of the type of variable it points to
    
    printf("value of a: %d\n", a); //=> 5
    printf("value at address stored in pA: %d\n", *pA); //=> 5
    // we can access the value at the memory address stored in pA using the * operator
    
    printA(pA); //=> 5

    return 0;
}
