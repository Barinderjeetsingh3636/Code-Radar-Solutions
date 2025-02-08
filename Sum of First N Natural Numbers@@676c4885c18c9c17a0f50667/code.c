#include <stdio.h>

int main() {
    int N, i, sum = 0;
    
    scanf("%d", &N);
    for (i = 1; i <= N; i++) {
        printf("%d ", i);
        sum += i;
    }
    printf( sum);

    return 0;
}
