#include <stdio.h>

int main() {
    // do while loop = always executes a block of code once, then checks a condition

    int number = 0;
    int sum = 0;

    /*
    while(number > 0)
    {
       printf("Enter a no above 0: ");
       scanf("%d", &number);
       if(number > 0)
       {
        sum = sum + number;
       }
    }
    */
   do{
    printf("Enter a no above 0: ");
    scanf("%d", &number);
    if(number > 0)
    {
     sum = sum + number;
    }
   }while(number > 0);

    printf("sum: %d", sum);
    return 0;
}