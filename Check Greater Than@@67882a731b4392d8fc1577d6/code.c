#include <stdio.h>

void welcome() {
    int a,b;
    scanf("%d %d",&a,&b);
    if (a>b) {
        return printf("True");
    }
    else {
        return printf("False");
    }
}

int main() {
  welcome();
    return 0;
}