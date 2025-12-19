#include <stdio.h>
#include <string.h>

int main() {
    char x[] = "water";
    char y[] = "lemeonade";
    char temp[15]; //take into consideration the limit nomber of elements in array
                   // when swapping strings

    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);

    printf("x = %s\n", x);
    printf("y = %s\n", y);

    return 0;
}