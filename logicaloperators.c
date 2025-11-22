#include <stdio.h>
#include <stdbool.h> //for booleans

int main (){

    // && = AND
    // || = OR
    // ! = NOT

    float temp = 25;
    bool sunny = false;
    bool man = true;

    if( temp >= 0 && temp <=30 && sunny == true){ //true or you can say 1 or just sunny (whcih means true)
        printf("1\n");
    }
    else {
        printf("2\n");
    }

    if (!man){ //!man = false
        printf("Hi it is true\n");
    }
    else {
        printf("not true");
    }
    
    return 0;
}