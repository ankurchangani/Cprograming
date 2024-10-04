#include <stdio.h>

int main() {
    char letter = 'A';

    for (int i = 5; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            printf("%c", letter);
        }
        printf("\n");
        letter++;
    }

    return 0;
}
