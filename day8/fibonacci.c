#include<stdio.h>

int main() {

    int a = 0, b = 1, c;
    for (int i = 1; i <= 12; i++) {
        printf("%d ", a);
        c = a + b; // 21
        a = b;// a=13
        b = c; // 21
    }


    return 0;
}
// 0 1 1 2 3 5 8 13

// 0 1 1 2 3 5 8 13 21 34