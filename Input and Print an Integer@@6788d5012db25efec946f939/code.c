#include <stdio.h>

char* welcome() {
    
    int n;
    scanf("%d",&n);
    return n;
}

int main() {
    printf("You entered: %d", welcome());
    return 0;
}