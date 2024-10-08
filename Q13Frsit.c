#include <stdio.h>
#include <ctype.h>

int main() {
    char text[1000];
    int count = 0, inWord = 0;

    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);

    for (int i = 0; text[i]; i++) {
        if (isspace(text[i])) {
            inWord = 0; 
        } else if (!inWord) {
            inWord = 1; 
            count++; 
        }
    }

    printf("Total words: %d\n", count);
    return 0;    
}
