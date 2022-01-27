/*
    Write a C program to accept temperature in Celsius and
    convert it into Fahrenheit
*/

#include <stdio.h>

int main(){
    float ct, ft;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &ct);

    ft = 1.8*ct+32;
    printf("It's %.2f degree Fahrenheit", ft);

    return 0;
}
