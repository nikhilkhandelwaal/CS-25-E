#include <stdio.h>
int main() {
    int num;
    for (num = 5; num >= 1; num--) {
        if (num % 2 == 0 || num % 3 == 0) {

            printf("A");
        }
        else if (num % 2 == 0) {

            printf("B");
        }
        else if (num % 3 == 0) {

            printf("C");
        }
        else {

            printf("%d", num);
        }
        if (num == 5)break;
    }
    return 0;
}
/*
    AAA1
    5
    5AAA1



*/