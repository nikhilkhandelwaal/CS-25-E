#include <stdio.h>
#include<ctype.h>
#include<string.h>

int main() {

    // char str[] = { 'h','e','l','l','o','\0' };
    // char str1[] = "hello";

    // // printf("%d", sizeof(str));
    // printf("%d", sizeof(str1));

    // char str[] = "Hello";
    // int count = sizeof(str) / sizeof(str[0]);

    // printf("%s", str);

    // for (int i = 0; i < count; i++) {
    //     printf("%c", str[i]);
    // }

    // char arr[100];

    // printf("Enter your name: ");
    // // scanf("%s", arr);
    // fgets(arr, 100, stdin);

    // printf("%s", arr);

    // char a = 'A';
    // printf("%c", tolower(a));

    // char b = 'b';
    // printf("%c", toupper(b));

    // char str[] = "Hello";
    // for (int i = 0; i < 5; i++) {
    //     printf("%c", toupper(str[i]));
    // }

    char str[50] = "Hello"; // 6bytes
    char str1[] = "Everyone"; // 9byte
    printf("%d", strlen(str));

    strcpy(str, str1);
    strcat(str, str1);
    printf("%s", str);

    return 0;
}
/*
    /0 => Null Operator
    fgets(varible name, varible size, stdin);
    ctype.c => tolower, toupper
    string.h => strlen, strcpy, strcat

*/