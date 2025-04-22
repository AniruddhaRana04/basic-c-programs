// Normal fibonacci series
#include <stdio.h>  // stdio.h library is used for printf() and scanf() functions
#include <conio.h>  // conio.h library is used for getch() function
void main() {   // main function
    int n, a = 0, b = 1, c; // variable declaration

    printf("Enter a positive integer: ");   // user input
    scanf("%d", &n);    // user input

    printf("Fibonacci Series: ");   // output

    while (a <= n) {    // while loop to print fibonacci series upto n
        printf("%d ", a);   // print a
        c = a + b;  // c is the sum of a and b
        a = b;  // a is assigned the value of b
        b = c;  // b is assigned the value of c
    }
    getch();
}

// Even fibonacci series

#include <stdio.h>  // stdio.h library is used for printf() and scanf() functions
#include <conio.h>  // conio.h library is used for getch() function
void main() {   // main function
    int n, a = 0, b = 1, c; // variable declaration

    printf("Enter a positive integer: ");   // user input
    scanf("%d", &n);    // user input

    printf("Fibonacci Series: ");   // output

    while (a <= n) {    // while loop to print fibonacci series upto n
        (a%2==0)?printf("%d ", a):printf("");   // print a
        c = a + b;  // c is the sum of a and b
        a = b;  // a is assigned the value of b
        b = c;  // b is assigned the value of c
    }
    getch();
}

// Odd fibonacci series
#include <stdio.h>  // stdio.h library is used for printf() and scanf() functions
#include <conio.h>  // conio.h library is used for getch() function
void main() {   // main function
    int n, a = 0, b = 1, c; // variable declaration

    printf("Enter a positive integer: ");   // user input
    scanf("%d", &n);    // user input

    printf("Fibonacci Series: ");   // output

    while (a <= n) {    // while loop to print fibonacci series upto n
        (a%2!=0)?printf("%d ", a):printf("");   // print a
        c = a + b;  // c is the sum of a and b
        a = b;  // a is assigned the value of b
        b = c;  // b is assigned the value of c
    }
    getch();
}