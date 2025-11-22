#include <stdio.h>
#include <string.h> //string library

int main(){

    char string1[] = "Bro";
    char string2[] = "code";

    // strlwr(string1); //converts to all lowercase
    // strupr(string1); //converts to all uppercase
    // strcat(string1, string2) // appends string2 to end of string1
    // strncat(string1, string2, 1); //appends n characters from stirng2 to string1
    // strcpy(string1, string2); //copy string2 to string1
    // strncpy(string1, string2, 4); //copy n characters of string2 to string1

    //strset(string1, '?'); //sets all characters of a string to a given character
    //strnset(string1, 'x', 1); //sets first n characters of a string to a given character
    //strrev(string1); //reverses a string
    //and there are many more

    printf("%s", string1);
}