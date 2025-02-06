#include <stdio.h>

int main() {
    char sample_text[] = "Hello World!";
    int has_upper = 0, has_lower = 0;

    // Check each character
    for(int i = 0; sample_text[i] != '\0'; i++) {
        if(isupper(sample_text[i])) {
            has_upper = 1;
        }
        if(islower(sample_text[i])) {
            has_lower = 1;
        }
    }

    // Print results
    if(has_upper && has_lower) {
        printf("Contains both uppercase and lowercase characters\n");
    } else if(has_upper) {
        printf("Contains only uppercase characters\n");
    } else if(has_lower) {
        printf("Contains only lowercase characters\n");
    } else {
        printf("Does not contain uppercase or lowercase characters\n");
    }

    return 0;
}

