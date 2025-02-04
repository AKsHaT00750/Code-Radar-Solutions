#include <stdio.h>

char* welcome() {
    char ch;
    scanf("%c",&ch);
    return (int)ch;
}

int main() {
    printf("ASCII Value: %d", welcome());
    return 0;
}