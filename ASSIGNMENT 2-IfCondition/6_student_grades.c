#include <stdio.h>

int main() {
    float m1, m2, m3;
    float total, average;

    printf("Enter marks for Subject 1: ");
    scanf("%f", &m1);
    
    printf("Enter marks for Subject 2: ");
    scanf("%f", &m2);
    
    printf("Enter marks for Subject 3: ");
    scanf("%f", &m3);


    total = m1 + m2 + m3;
    average = total / 3.0;


    printf("\nTotal Marks = %.2f\n", total);
    printf("Average Marks = %.2f\n\n", average);


    if (m1 < 35 || m2 < 35 || m3 < 35) {
        printf("Result: Fail\n");
    } 
    else if (average >= 70) {
        printf("Result: Distinction\n");
    } 
    else if (average >= 60) {
        printf("Result: First Class\n");
    } 
    else if (average >= 50) {
        printf("Result: Second Class\n");
    } 
    else if (average >= 35) {
        printf("Result: Third Class\n");
    } 
    else {
        printf("Result: Fail\n");
    }

    return 0;
}
