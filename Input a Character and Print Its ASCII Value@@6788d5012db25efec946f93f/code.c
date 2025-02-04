#include <stdio.h>

char* welcome() {
    char ch;
    scanf("%c",&ch);
    return ch;
}

int main() {
    printf("ASCII Value: %d", (int)welcome());
    return 0;
}