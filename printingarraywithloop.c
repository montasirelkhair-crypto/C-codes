#include <stdio.h>

int main() {
    double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0};

    //print("%lf", prices[0]); example to print one element in array
    //better with for loop

    //printf("%d bytes\n", sizeof (prices));

    for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++) //to calculate how many times it is going to loop through the array
    {
        printf("%.2lf\n", prices[i]);
    }

    return 0;
}