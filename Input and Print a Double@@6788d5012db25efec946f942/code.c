#include <stdio.h>

double welcome() {
    double n;
    scanf("%lf",&n);
    return n;
}

int main() {
    printf("You entered: %lf", welcome());
    return 0;
}