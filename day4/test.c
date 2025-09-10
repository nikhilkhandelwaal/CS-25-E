#include<stdio.h>
#include<math.h>
int main() {

    // int amnt1, amnt2;
    // printf("Enter first amount :");
    // scanf("%d", &amnt1);
    // printf("Enter Second amount :");
    // scanf("%d", &amnt2);

    // printf("Total Amount  is %d", amnt1 + amnt2);

    // int score1, score2, score3, total;
    // printf("Enter Student 1 marks: ");
    // scanf("%d", &score1);
    // printf("Enter Student 2 marks: ");
    // scanf("%d", &score2);
    // printf("Enter Student 3 marks: ");
    // scanf("%d", &score3);

    // total = score1 + score2 + score3;

    // printf("Average marks: %f", total / 3.0);


    // int radius;
    // printf("Enter Radius of circle: ");
    // scanf("%d", &radius);

    // printf("Area of circle is %f", 3.14 * radius * radius);


    // int base, height;

    // printf("Enter Base: ");
    // scanf("%d", &base);

    // printf("Enter height: ");
    // scanf("%d", &height);

    // printf("Area of triangle is %f", 0.5 * base * height);

    // int principle, time;
    // float rate;

    // printf("Enter Principle: ");
    // scanf("%d", &principle);
    // printf("Enter time: ");
    // scanf("%d", &time);
    // printf("Enter rate of intrest: ");
    // scanf("%f", &rate);

    // printf("Simple Intrest is %f", principle * time * rate / 100);

    int base, height;
    float hypotenus;

    printf("Enter base :");
    scanf("%d", &base);
    printf("Enter height :");
    scanf("%d", &height);

    hypotenus = sqrt((base * base) + (height * height));

    printf("Hypotenus is : %f", hypotenus);


    return 0;
}

/*
    double => float => int
*/