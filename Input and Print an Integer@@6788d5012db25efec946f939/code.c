#include <stdio.h>

int welcome() {
    
    int n;
    scanf("%d",&n);
    return n;
}

int main() {
    printf("You entered: %d", welcome());
    return 0;
}