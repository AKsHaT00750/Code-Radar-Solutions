#include <stdio.h>

int welcome() {
    int num;
    scanf("%d",&num);
    return num;
}

int main() {
    int num = welcome();
    printf("Hexadecimal: %X\n", num);
    printf("Octal: %o\n", num);
    return 0;
}