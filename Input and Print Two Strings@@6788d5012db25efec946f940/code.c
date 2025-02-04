#include <stdio.h>

void welcome() {
    char str1[100],str2[100];
    scanf("%s %s",str1 , str2);
    printf("You entered: %s and %s",str1,str2);
}

int main() {
    welcome();
    return 0;
}