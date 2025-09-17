#include<stdio.h>

int main() {

    for (int i = 1; i <= 10; i++) {


        if (i == 6) {
            break;
            printf("%d\n", i);
        }
        else {
            printf("%d\n", i);
            continue;
        }

    }
    // 1to5    6      1to5   1to10except 6      




    return 0;
}