#include <stdio.h>

int main() {

    // int arr[10] = { 2,3,4,5,6,7 };

    // int arr[3][2];

    // arr[0][0] = 10;
    // arr[0][1] = 20;
    // arr[1][0] = 30;
    // arr[1][1] = 40;
    // arr[2][0] = 50;
    // arr[2][1] = 60;

    // for (int i = 0; i < 3; i++) {
    //     for (int j = 0; j < 2; j++) {
    //         printf("%d ", arr[i][j]);
    //     }
    //     printf("\n");
    // }

    int arr[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter values of array: ");
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}