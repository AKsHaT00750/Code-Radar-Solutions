#include <stdio.h>

 char welcome() {
    char str[100];
    scanf("%s",str); 
    return str;
}

int main() {
    printf("%s", welcome());
    return 0;
}