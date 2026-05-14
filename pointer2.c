#include <stdio.h>

long long int g_data = 0x1234567890abcdef;

int main(void)
{
    int* p;// pointer variable

    p = (int*)&g_data; // assign address of g_data to p

    printf("Value at address %p\n is : %x\n", p, *p); // dereference operator to read value at address p, which is the first byte of g_data

    return 0;
}