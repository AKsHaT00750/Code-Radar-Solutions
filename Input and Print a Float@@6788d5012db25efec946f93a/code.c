#include <stdio.h>

float welcome() {
    float num;
    scanf("%f",&num);
    return num;
}

int main() {
    printf("%f", welcome());
    return 0;
}