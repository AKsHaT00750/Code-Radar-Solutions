#include <stdio.h>

char welcome() {
    char ch;
    scanf(" %c", &ch);
    return ch
}

int main() {
    printf("You entered: %c", welcome());
    return 0;
}