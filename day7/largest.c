#include<stdio.h>

int main() {

    int count, entry, largest=0;
    printf("Enter number of entries you want to check: ");
    scanf("%d", &count);

    for (int i = 1; i <= count; i++) {
        printf("Enter your %d entry: \n", i);
        scanf("%d", &entry);
        if (entry > largest) {
            largest = entry;
        }
    }
    // Largest =20

    printf("Largest is %d", largest);

    return 0;
}