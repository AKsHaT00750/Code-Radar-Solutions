#include <stdio.h>

int main() {

   int a,b=0;
   scanf("%d",&a);

   for (int i = 1 ; i >= a ; i++) {

            if (a%i==0) {
                b+=1;
            }

          
   }
     if (b==1){
                print("Prime");
            }
            else{
                printf("Not Prime");
                }
    return 0;
}