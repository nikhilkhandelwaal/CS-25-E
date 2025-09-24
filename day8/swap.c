#include<stdio.h>

int main() {
    int a = 10, b = 20;

    a = a + b; // 30
    b = a - b; // 10
    a = a - b; // 20
    printf("A is %d and b is %d", a, b);

    return 0;
}