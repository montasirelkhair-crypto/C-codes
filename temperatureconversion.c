#include <stdio.h>
#include <ctype.h> //for some strinf functions

int main() {
    
    char unit;
    float temp;

    printf("\n Is temp in F or C?: ");
    scanf("%c", &unit);
    //remember c programs are case sensitives

    unit = toupper(unit); //if user types letter in lower case
                          //the toupper() function turns it into upper case

    if(unit == 'C') {
        printf("\nEnter temp in Celsius: ");
        scanf("%f", &temp);
        temp = (temp *9 / 5) + 32;
        printf("\ntemp in F is: %.1f", temp);
    }
    else if(unit == 'F') {
        printf("\nEnter temp in Farenheit: ");
        scanf("%f", &temp);
        temp = (temp -32) * 5 / 9;
        printf("\n temp in C is: %.1f", temp);
    }
    else{
        printf("\n %c is not valid");
    }
}