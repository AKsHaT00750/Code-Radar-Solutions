#include <stdio.h>

int main() {

   int a,b;
   scanf("%d",&a);

   for (int i = 1 ; i >= a ; i++) {

            if (a%i==0) {
                b+=1;
            }

            if (b==1){
                print("Prime");
            }
            else("Not Prime");
   }
    return 0;
}