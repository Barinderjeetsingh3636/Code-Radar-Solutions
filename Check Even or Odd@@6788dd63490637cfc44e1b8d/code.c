#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);
    if (number % 2 == 0) {
        printf("Even.\n", number);
    } else {
        printf("odd.\n", number);
    }
    return 0;
}


