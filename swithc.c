#include <stdio.h>

int main() {
    //switch is a case statement in C

    char grade;

    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    /*if(grade == 'A') {
        printf("perfect\n");
    }
    else if()
    better than the above, use switch statement like below
    */
    switch(grade){
        case 'A':
            printf("perfect\n");
            break; //ends code
        case 'B':
            printf("not perfect\n");
            break;
        case 'C':
            printf("stop typing\n");
            break;
        default:
            printf("you are just a loser, type a letter!!"); //if non of the "case" inputs are typed, the default code will run instead
            break;
        return 0;
    }
}