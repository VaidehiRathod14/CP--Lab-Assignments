#include <stdio.h>

int main() {
    int prev_num = 0, current_num = 1, n, i;


    printf("Enter the value of n: ");
    scanf("%d", &n);


    for (i = 0; i < n; i++) {
        printf("%d\n", prev_num);
        current_num = prev_num + current_num;
        prev_num = current_num - prev_num;
    }


    return 0;
}
