#include <stdio.h>

float welcome() {
    float n,m;
    scanf("%f %f",&n ,&m);
    return n*m;
}

int main() {
    printf("Produt: %.2f", welcome());
    return 0;
}