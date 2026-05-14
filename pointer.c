#include <stdio.h>

int main()
{
    char a = 100;
    printf("Value of a: %d\n", a);
    // address is:
    printf("Address of a: %p\n", &a);
    // pointer variable:
    char* p = &a;
    char value = *p; // dereference operator
    printf("read value using pointer: %d\n", value);

    *p = 65; // change value of a using pointer
    printf("Value of a after change: %d\n", a);

    
    return 0;
}