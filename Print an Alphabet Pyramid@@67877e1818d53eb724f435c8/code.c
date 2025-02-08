#include <stdio.h>

int main() {
    int rows, i, j, k;
    char ch;
    
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        // Print leading spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print alphabets
        ch = 'A';
        for (k = 1; k <= i; k++) {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }

    return 0;
}
