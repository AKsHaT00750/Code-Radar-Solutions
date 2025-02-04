#include <stdio.h>

double welcome() {
    double n;
    scanf("%lf",&n);
    return n;
}

int main() {
    printf("You entered: %.4lf", welcome());
    return 0;
}