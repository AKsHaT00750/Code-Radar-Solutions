#include <stdio.h>

float welcome() {
    float num;
    scanf("%f",&num);
    return num;
}

int main() {
    printf(" You entered: %.2f", welcome());
    return 0;
}