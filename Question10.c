/*Write a C program to calculate and display the grade of a student based on marks using an else-if ladder.
90+ -> A
80-89 -> B
70-79 -> C
Below 70 -> Fail*/
#include<stdio.h>
int main(){
    int marks;
    printf("Enter the marks: ");
    scanf("%d", &marks);
    if(marks >= 90){
        printf("Grade: A\n");
    } else if(marks >= 80 && marks <= 89){
        printf("Grade: B\n");
    } else if(marks >= 70 && marks <= 79){
        printf("Grade: C\n");
    } else {
        printf("Grade: Fail\n");
    }
    return 0;
}