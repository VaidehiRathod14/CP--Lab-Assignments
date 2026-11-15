#include <stdio.h>

int main() {
    int i;
    float num, largest, smallest;


    printf("Enter number 1: ");
    scanf("%f", &num);


    largest = num;
    smallest = num;


    for (i = 2; i <= 100; i++) {
        printf("Enter number %d: ", i);
        scanf("%f", &num);

        if (num > largest) {
            largest = num;
        }

        if (num < smallest) {
            smallest = num;
        }
    }


    printf("\nLargest = %.2f\n", largest);
    printf("Smallest = %.2f\n", smallest);


    return 0;
}
