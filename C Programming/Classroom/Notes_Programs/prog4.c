/*
    Write a C program to calculate simple and compund interest
*/

#include <stdio.h>
#include <math.h>

int main(){
    int p, n;
    float r, si, amt, ci;

    printf("Enter p, n and r values: ");
    scanf("%d %d %f", &p, &n, &r);

    si = p*n*r/100;
    amt = p*pow(1+r/100, n);
    ci = amt - p;

    printf("Simple Interest: %.2f\n", si);
    printf("Compound Interest: %.2f\n", ci);

    return 0;
}
