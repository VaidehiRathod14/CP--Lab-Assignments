#include <stdio.h>

int main() {
    int i;
    float value, sum = 0.0, mean;


    for (i = 1; i <= 10; i++) {
        printf("Enter value %d: ", i);
        scanf("%f", &value);
        sum += value;
    }


    mean = sum / 10.0;


    printf("Sum = %.2f\n", sum);
    printf("Mean = %.2f\n", mean);


    return 0;
}
