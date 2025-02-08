#include <stdio.h>

int main() {
    int rows, i, j, num;
    
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        num = 1;
        // Print leading spaces
        for (j = i; j < rows; j++) {
            printf(" ");
        }
        // Print increasing numbers
        for (j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
