/*
    Write a C program to accept student number, student name and
    marks in 3 subjects. Calculate total marks, average marks and display results
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    char name[35];
    int num, s1, s2, s3, total;

    printf("Enter Student's Number: ");
    scanf("%d", &num);
    printf("Enter Student's Name: ");
    gets(name);
    printf("Enter marks in 3 subjects: ");
    scanf("%d %d %d", &s1, &s2, &s3);

    total = s1+s2+s3/3;
    printf("********* Report Card *********\n");
    printf("Student No. %d\n", num);
    printf("Student Name: %s\n", name);
    printf("Total Marks: %d\n", total);
    printf("Average Marks: %.2f\n", total/3.0);

    return 0;
}
