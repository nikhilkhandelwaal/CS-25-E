#include <stdio.h>

int main() {

    // int arr[5] = { 10,20,30,40,50 };
    // float arr1[5] = { 2.5,3.6,1.2,3.3,2.6 };
    // char arr2[5] = { 'a','b','c','d','e' };
    // double arr3[5] = { 2.5,3.6,1.2,3.3,2.6 };

    // printf("%d", sizeof(arr));
    // printf("%d", sizeof(arr1));
    // printf("%d", sizeof(arr3));

    // int arr[5] = { 10,20,30,40,50 };

    // printf("%d\n", arr[0]);
    // printf("%d\n", arr[1]);
    // printf("%d\n", arr[2]);
    // printf("%d\n", arr[3]);
    // printf("%d\n", arr[4]);
    // printf("%d\n", arr[-1]);

    // int arr[5];
    // arr[0] = 10;
    // arr[1] = 20;
    // arr[2] = 30;
    // arr[3] = 40;
    // arr[4] = 50;

    // int arr[5], j = 1;
    // for (int i = 0; i < 5; i++) {
    //     arr[i] = 10 * j;
    //     j++;
    // }

    // int arr[10] = { 10,20,30,40,50 };

    // int arr[5];
    // printf("Enter first value: ");
    // scanf("%d", &arr[0]);
    // printf("Enter second value: ");
    // scanf("%d", &arr[1]);
    // printf("Enter third value: ");
    // scanf("%d", &arr[2]);
    // printf("Enter fourth value: ");
    // scanf("%d", &arr[3]);
    // printf("Enter fifth value: ");
    // scanf("%d", &arr[4]);


    // int arr[5];
    // for (int i = 0; i < 5; i++) {
    //     printf("Enter value: ");
    //     scanf("%d", &arr[i]);
    // }

    int arr[] = { 5,7,8,9,1,2,5,3,6,7,8 };
    int count = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < count; i++) {
        printf("%d\n", arr[i]);
    }




    return 0;
}

// Take 5 integer value and print in reverse order
// Take 5 integer value and print its sum and Average