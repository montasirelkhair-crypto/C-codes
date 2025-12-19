#include <stdio.h>
#include <string.h>

int main() {
    char cars[][10] = {"Mustang", "Corvette","Camaro"}; //remember that each string is already an array so this is a 2D array

    //cars[0] = "Tesla"; use string function instead to change an element in the array
    strcpy(cars[0], "Tesla");

    for(int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++)
    {
        printf("%s\n", cars[i]);
    }

    return 0;
}