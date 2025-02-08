#include <stdio.h>

int main() {
    int rows, i, j, k;
    
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        // Print leading spaces
        for (j = i; j < rows; j++) {
            printf(" ");
        }
        // Print the first half of the row
        for (k = 1; k <= i; k++) {
            printf("%d", k);
        }
        // Print the second half of the row
        for (k = i - 1; k >= 1; k--) {
            printf("%d", k);
        }
        printf("\n");
    }

    return 0;
}
