/*
*   Name: Charan Manikanta Nalla
*   CSE-A
*   Date: 1/27/2021
*/
/*
*   Problem:
*   Write a C program to compute the area and perimeter of a square.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int side;

    printf("Enter the square's side length: ");
    scanf("%d", &side);

    printf("Perimeter of the square: %d", 4*side);
    printf("Area of the square: %d", side*side);

    return 0;
}
