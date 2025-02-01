#include <stdio.h>

float welcome() {
    float num;
    scanf("%f",&num);
    return num;
}

int main() {
    printf("%.2f", welcome());
    return 0;
}