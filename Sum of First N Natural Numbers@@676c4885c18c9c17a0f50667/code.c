#include <stdio.h>

int main() {
    int N, i, sum = 0;
    
    scanf("%d", &N);

    printf("The first %d natural numbers are: ", N);
    for (i = 1; i <= N; i++) {
        printf("%d ", i);
        sum += i;
    }
    printf("\nTheir sum is: %d\n", sum);

    return 0;
}
