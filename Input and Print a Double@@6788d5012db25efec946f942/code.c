#include <stdio.h>

char* welcome() {
    double n;
    scanf("%lf",&n);
    return n;
}

int main() {
    printf("You entered: %lf", welcome());
    return 0;
}