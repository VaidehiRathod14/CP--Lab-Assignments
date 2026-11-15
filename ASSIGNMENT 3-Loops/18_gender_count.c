#include <stdio.h>

int main() {
    int i, code;
    int boys = 0, girls = 0;


    printf("Enter gender code (1 for Boy, 2 for Girl) for 50 students:\n");


    for (i = 1; i <= 50; i++) {
        scanf("%d", &code);

        if (code == 1) {
            boys++;
        } 
        else if (code == 2) {
            girls++;
        }
    }


    printf("\nTotal Boys = %d\n", boys);
    printf("Total Girls = %d\n", girls);


    return 0;
}
