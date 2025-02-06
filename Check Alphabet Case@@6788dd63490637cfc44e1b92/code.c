#include <stdio.h>

int main() {
    char sample_text[] = "Hello World!";
    int has_upper = 0, has_lower = 0;

    for(int i = 0; sample_text[i] != '\0'; i++) {
        has_upper |= isupper(sample_text[i]);
        has_lower |= islower(sample_text[i]);
    }
    printf("Uppercase");
    printf("Lowercase");
    return 0;
}


