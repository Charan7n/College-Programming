/*
    Write a C program to swap or interchange any 2 given numbers
*/

#include <stdio.h>

int main(){
    int a, b, temp;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swaping: %d, %d", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("After swaping: %d %d", a, b);

    return 0;
}
