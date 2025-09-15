#include<stdio.h>

int main() {

    int sum = 0;

    for (int i = 1; i <= 10; i++) {

        sum = sum + i;
        printf("%d\n", sum);
       
    }


     /*
        sum = 0+1 => 1
        sum = 1+2 => 3
        sum = 3+3 => 6
        sum = 6+4 => 10
        sum = 10+5 => 15
        sum = 15+6 => 21
        sum = 21+7 => 28
        sum = 28+8 => 36
        sum = 36+9 => 45
        sum = 45+10 => 55
        */

    return 0;
}