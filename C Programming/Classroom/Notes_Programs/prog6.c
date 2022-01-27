/*
    Write a C program to accept temperature in fahrenheit and convert it into Celsius
*/

#include <stdio.h>

int main(){
    float ct, ft;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &ft);

    ct = (ft-32)/1.8;
    printf("It's %.2f Celsius", ct);
    return 0;
}
