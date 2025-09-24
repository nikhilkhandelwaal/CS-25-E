#include <stdio.h>
int main() {
    int count = 0, num = 123;
    while (num > 0) {
        count++;
        num /= 10;
        if (count == 2)
            continue;
        printf("%d ", num);
    }
    printf("C%d", count);
    return 0;
}
/*
count =3, num=0
    120C3   C121C1   31C1     


*/