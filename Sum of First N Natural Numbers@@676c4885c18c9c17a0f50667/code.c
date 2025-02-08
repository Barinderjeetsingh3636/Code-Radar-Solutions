#include <stdio.h>

int main() {
    int N, i, sum = 0;
    
    scanf("%d", &N);

    printf( N);
    for (i = 1; i <= N; i++) {
        printf("%d ", i);
        sum += i;
    }
    printf("\nTheir sum is: %d\n", sum);

    return 0;
}
