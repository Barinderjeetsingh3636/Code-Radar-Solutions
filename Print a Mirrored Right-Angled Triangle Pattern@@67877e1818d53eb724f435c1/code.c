#include <stdio.h>

int main() {
    int rows, i, j, k;
    
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        // Print leading spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print stars
        for (k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
