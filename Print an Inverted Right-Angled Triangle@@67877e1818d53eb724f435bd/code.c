#include <stdio.h>



int main() {
    int rows, i, j;

    // Input number of rows from the user\
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Loop to print the inverted right-angled triangle
    for (i = rows; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
    }

    return 0;
}

