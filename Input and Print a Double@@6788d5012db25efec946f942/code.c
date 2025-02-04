#include <stdio.h>

void welcome() {
    double n;
    scanf("%lf",&n);
    return n;
}

int main() {
    printf("You entered: %lf", welcome());
    return 0;
}