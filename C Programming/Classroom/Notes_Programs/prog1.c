/*
    Write a C program to acept length and breadth of a rectangle and output its area and perimeter.
*/

#include <stdio.h>

int main(){
    int l, b;
    printf("Enter the length and breadth of rectangle: ");
    scanf("%d %d", &l, &b);

    printf("Area of the rectangle: %d\n", l*b);
    printf("Perimeter of the rectangle: %d\n", 2*(l+b));
}
