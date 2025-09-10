#include<stdio.h>
int main() {

    // Q. 9 ----------------------------------------
    // int a, b, temp; // 10, 20

    // printf("Enter a: ");
    // scanf("%d", &a);

    // printf("Enter b: ");
    // scanf("%d", &b);

    // temp = a; // temp=10
    // a = b; // a= 20
    // b = temp;  // b = 10

    // printf("Value of a is %d and b is %d", a, b);

    // Conditional Statement

    // printf("Hello Everyone");

    // int a = 20;
    // int b = 20;


    // if (a == b) {
    //     printf("Hello Everyone");
    // }else{
    //      printf("WElceomt to India");
    // }

    // printf("Welcome to NCU");


    // eligible for voting or not
    // int age;
    // printf("Enter your age: ");
    // scanf("%d", &age);

    // if (age >= 18) {
    //     printf("You can vote");
    // }
    // else {
    //     printf("You can not vote");
    // }

    // Q. 14 -------------------------------------------
    // int score1, score2;
    // printf("Enter score 1: ");
    // scanf("%d", &score1);
    // printf("Enter score 2: ");
    // scanf("%d", &score2);

    // if (score1 > score2) {
    //     printf("Largest score is %d", score1);
    // }
    // else {
    //     printf("Largest score is %d", score2);
    // }

    // Q.15 ------------------------------------------------
    // int number; // 13
    // printf("Enter the number: ");
    // scanf("%d", &number);

    // if (number % 2 == 0) { // 13%2==0 => 1==0 => false
    //     printf("%d is even number", number);
    // }
    // else {
    //     printf("%d is odd number", number);
    // }

    // Q.16 -----------------------------------------------
    // int orderSize;
    // printf("Enter your order Size: ");
    // scanf("%d", &orderSize);

    // if (orderSize % 3 == 0 && orderSize % 5 == 0) {
    //     // 15%3==0 && 15%5 ==0 => 0==0 && 0==0
    //     printf("Offer is On");
    // }
    // else {
    //     printf("Offer is not valid");
    // }

    // Q.17 -----------------------------------------------

    // char letter;
    // printf("Enter your letter: ");
    // scanf("%c", &letter);

    // if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') {
    //     printf("It is vowel");
    // }
    // else {
    //     printf("It is Consonant");
    // }

    // Q.21 ------------------------------------------------------
    // int number;
    // printf("Enter your number: ");
    // scanf("%d", &number);

    // if (number > 0) {
    //     printf("Positive number");
    // }
    // else if (number < 0) {
    //     printf("Negative Number");
    // }
    // else {
    //     printf("Number is Zero");
    // }

    // Q.29 ------------------------------------------------------
    // int dayNum;
    // printf("Enter the number (1 to 7): ");
    // scanf("%d", &dayNum);

    // if (dayNum == 1) {
    //     printf("Monday");
    // }
    // else if (dayNum == 2) {
    //     printf("Tuesday");
    // }
    // else if (dayNum == 3) {
    //     printf("Wednesday");
    // }
    // else if (dayNum == 4) {
    //     printf("Thursday");
    // }
    // else if (dayNum == 5) {
    //     printf("Friday");
    // }
    // else if (dayNum == 6) {
    //     printf("Saturday");
    // }
    // else if (dayNum == 7) {
    //     printf("Sunday");
    // }
    // else {
    //     printf("Not a valid day number");
    // }

    // Ascending order of 3 numbers
    int num1, num2, num3;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Enter third number: ");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3) {
        // num1 is largest
        if (num2 > num3) {
            printf("%d %d %d", num3, num2, num1);
        }
        else {
            printf("%d %d %d", num2, num3, num1);
        }
    }
    else if (num2 > num1 && num2 > num3) {
        // num2 is largest
        if (num1 > num3) {
            printf("%d %d %d", num3, num1, num2);
        }
        else {
            printf("%d %d %d", num1, num3, num2);
        }
    }
    else {
        // num3 is largest
        if (num1 > num2) {
            printf("%d %d %d", num2, num1, num3);
        }
        else {
            printf("%d %d %d", num1, num2, num3);
        }
    }









    return 0;
}

/*
    Conditional Statement
    if
    if else
    if else if
    nested if else


*/