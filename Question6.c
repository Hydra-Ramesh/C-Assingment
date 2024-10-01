//Write a C program to find the largest of three numbers using nested if-else.
#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the third number: ");
    scanf("%d", &c);

    if (a > b) {
        if (a > c) {
            printf("The largest number is %d.\n", a);
        } else {
            printf("The largest number is %d.\n", c);
        }
    } else {
        if (b > c) {
            printf("The largest number is %d.\n", b);
        } else {
            printf("The largest number is %d.\n", c);
        }
    }

    return 0;
}