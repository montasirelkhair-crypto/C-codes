#include <stdio.h>
#include <math.h>

int main() {

    //to find circumference of a circle

    const double PI = 3.14159; // cannot be changed
    double radius;
    double circumference;
    double area;

    printf("\nEnter radius of circle: ");
    scanf("%lf", &radius); //radius addressed

    circumference = 2 * PI * radius; //radius from user used here
    area = PI * radius * radius;

    printf("\ncircumference: %lf", circumference);
    printf("\narea: %lf", area);

    return 0;
}