#include<stdio.h>

int main() {
    int a = 10, b = 15, c = 20;
    int max = a;
    if (b > max)max = b;
    if (c > max)max = c;
    if (max == a) {
        if (a * a == (b * b) + (c * c)) {

        }
        else {

        }
    }
    else if (max == b) {
        if (b * b == (a * a) + (c * c)) {

        }
        else {

        }
    }
    else {
        if (c * c == (a * a) + (b * b)) {

        }
        else {

        }
    }

    return 0;
}