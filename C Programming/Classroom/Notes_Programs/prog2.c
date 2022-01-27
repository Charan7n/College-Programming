/*
    Write a C program to accept any two numbers and
    compute all arithmetic operation
*/

#include <stdio.h>

int main(){
    int n1, n2;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &n1, &n2);

    printf("%d + %d = %d\n", n1, n2, n1+n2);
    printf("%d - %d = %d\n", n1, n2, n1-n2);
    printf("%d * %d = %d\n", n1, n2, n1*n2);
    printf("%d / %d = %d\n", n1, n2, n1/n2);
    printf("%d %% %d = %d\n", n1, n2, n1%n2);

    return 0;
}
