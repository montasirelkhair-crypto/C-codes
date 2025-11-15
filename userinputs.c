#include <stdio.h>
#include <string.h>

int main() {

    /*
    settings >> code runner >> run in terminal. 
    doing this, when running code the O/P is displayed on terminal instead of OUTPUT section
    to allow for user inputs.
    */
    char name [25]; //max bytes is 25
    int age;

    printf("\nWhat's your name?");
    //scanf("%s", &name); //scanf does not read spaces, it stops reading there.
    //instead tho you can use fgets():
    fgets(name, 30, stdin); //you do not need & for addressing, 25 is bytes, and stin = standard input. but remeber to disable scanf()
    name[strlen(name)-1] = '\0'; //gets rid of new line characterI

    printf("\nhow old are you?\n");
    scanf("%d", &age); //it is almost like the inverse of invert. It is used to read input
    // & before age, i used to state variable's address

    printf("You are: %d years old\n", age); //then you can print the users input.
    printf("\nYou are %s, u good fam?", name);

    //to summarise ask question, get user I/P from scanf() function by holding the input in address
    //then print the addressed user input.

    return 0;
}