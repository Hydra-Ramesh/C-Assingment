//Write a C program to find the largest of two numbers using if-else.
#include <stdio.h>
int main(){
    int a;
    int b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    if(a > b){
        printf("The largest number is %d.\n", a);
    } else {
        printf("The largest number is %d.\n", b);
    }
    return 0;
}