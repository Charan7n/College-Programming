/*
    Write a C program to compute the area and perimeter of a circle
*/

#include <stdio.h>

#define PI 3.14

int main(){
    int r;
    float perimeter, area;

    printf("Enter the radius of the circle: ");
    scanf("%d", &r);

    perimeter = 2*PI*r;
    area = PI*(r*r);
    printf("The circle's perimeter: %.2f\n", perimeter);
    printf("The circle's area: %.2f\n", area);

    return 0;
}
