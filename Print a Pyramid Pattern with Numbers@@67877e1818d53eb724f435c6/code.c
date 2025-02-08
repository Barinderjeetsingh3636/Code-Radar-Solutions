#include <stdio.h>

int main() {
    int rows, i, j, k, num = 1;
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        // Print leading spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print numbers
        for (k = 1; k <= i; k++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
