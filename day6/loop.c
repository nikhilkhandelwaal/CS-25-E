#include<stdio.h>

int main() {

    for (int i = 1; i <= 10; i++) {
        i += 2;
        printf("%d\n", i);
    } // 3,6,9     3,6,9,12    4,7,10           

    /*
        1. i=1 => 1<=10 => true => print 1
        2. i++ => 1++ => 2 => 2<=10 => true => print 2
        3. i++ => 2++ => 3 => 3<=10 => true => print 3
        4. i++ => 4++ => 4 => 4<=10 => true => print 4
        5. i++ => 5++ => 5 => 5<=10 => true => print 5
        6. i++ => 6++ => 6 => 6<=10 => true => print 6
        7. i++ => 7++ => 7 => 7<=10 => true => print 7
        8. i++ => 8++ => 8 => 8<=10 => true => print 8
        9. i++ => 9++ => 9 => 9<=10 => true => print 9
        9. i++ => 9++ => 10 => 10<=10 => true => print 10
        9. i++ => 10++ => 11 => 11<=10 => False => Loop End


    */


    return 0;
}

/*
    For Loop
    while Loop
    do while loop

    1. Starting Point
    2. End Point
    3. Increment or decrement

*/