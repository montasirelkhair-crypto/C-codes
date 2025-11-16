#include <stdio.h>

int main() {

    int age;

    printf("\nEnter your age: ");
    scanf("%d", &age);

    if(age >= 18) {
        printf("you are grown"); 
        //if it is fall the if code is skipped or you could add else like below     
    }
    else if (age == 0) {
        printf("no");
    }
    else if (age < 0) {
        printf("you are not here");
    }
    else { //before else you can have another if statment with else if
        printf("you are young");
    }

    return 0;

}