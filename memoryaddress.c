#include <stdio.h>

int main()
{
    // memory = an array of bytes that can be read and written to
    // memory block = a single unit of memory that can be read or written to
    // memory address = the location of a memory block

    //short a = 'A'; // 2 bytes of memory
    //short b = 'B'; // 2 bytes of memory
   // short c = 'C'; // 2 bytes of memory

   char a;
   char b[10]; // 10 bytes of memory because it is an array of 10 characters
   char c[10]; // 10 bytes of memory because it is an array of 10 characters

    printf("%d bytes\n", sizeof(a)); //=> 1 byte
    printf("%d bytes\n", sizeof(b)); //=> 10 bytes
    printf("%d bytes\n", sizeof(c)); //=> 10 bytes

    printf("%p, %p, %p\n", &a, &b, &c); //=> memory addresses of a, b, c
}